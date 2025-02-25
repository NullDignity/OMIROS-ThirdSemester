#include "BibElement.h"

// Διαγραφή Κενών Χαρακτήρων
string trim(const string &s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == string::npos)
        return "";
    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}


int quicksortPartition(vector<BibElement> &vec, int low, int high, function<bool(const BibElement&, const BibElement&)> comp) {
    BibElement pivot = vec[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
        if (comp(vec[j], pivot)) {
            i++;
            swap(vec[i], vec[j]);
        }

    swap(vec[i + 1], vec[high]);
    return (i + 1);
}

void quickSort(vector<BibElement> &vec, int low, int high, function<bool(const BibElement&, const BibElement&)> comp) {
    if (low < high) {
        int pi = quicksortPartition(vec, low, high, comp);
        quickSort(vec, low, pi - 1, comp);
        quickSort(vec, pi + 1, high, comp);
    }
}

int main() {
    
    ifstream infile("input.bib");
    if (!infile) {
        // Για ασφάλεια κατά την εκτέλεση, τερματίζεται ο κώδικας.
        return 1;
    }
    
    string line;
    vector<BibElement> entries;
    BibElement currentEntry;
    bool inEntry = false;
    
    // Εισαγωγή των Εγγραφών
    while (getline(infile, line)) {

        line = trim(line);
        if (line.empty())
            continue;
        
        if (line[0] == '@') {
            if (inEntry) {
                entries.push_back(currentEntry);
                currentEntry = BibElement();
            }

            inEntry = true;
            size_t bracePos = line.find('{');

            if (bracePos != string::npos) {
                string type = line.substr(1, bracePos - 1);
                currentEntry.setType(trim(type));
                size_t commaPos = line.find(',', bracePos);
                if (commaPos != string::npos) {
                    string id = line.substr(bracePos + 1, commaPos - bracePos - 1);
                    currentEntry.setId(trim(id));
                }
            }
        } else if (inEntry) {
            if (line[0] == '}') {
                entries.push_back(currentEntry);
                currentEntry = BibElement();
                inEntry = false;
            } else {
                size_t eqPos = line.find('=');
                if (eqPos != string::npos) {
                    string field = trim(line.substr(0, eqPos));
                    string value = trim(line.substr(eqPos + 1));
                    
                    if (!value.empty() && (value[0] == '{' || value[0] == '"'))
                        value = value.substr(1);
                    
                    while (!value.empty() && (value.back() == ',' || value.back() == '}' || value.back() == '"')) {
                        value.pop_back();
                    }
                    value = trim(value);
                    
                    if (field == "author")
                        currentEntry.setAuthor(value);
                    else if (field == "title")
                        currentEntry.setTitle(value);
                    else if (field == "journal")
                        currentEntry.setJournal(value);
                    else if (field == "volume")
                        currentEntry.setVolume(value);
                    else if (field == "booktitle")
                        currentEntry.setBooktitle(value);
                    else if (field == "publisher")
                        currentEntry.setPublisher(value);
                    else if (field == "pages")
                        currentEntry.setPages(value);
                    else if (field == "year")
                        currentEntry.setYear(value);
                }
            }
        }
    }
    
    if (inEntry)
        entries.push_back(currentEntry);

    string criteria;

    cout << "Please enter the sorting criteria (type, id, author, year): ";
    cin >> criteria;
    transform(criteria.begin(), criteria.end(), criteria.begin(), ::toupper);

    while (criteria != "TYPE" && criteria != "ID" && criteria != "AUTHOR" && criteria != "YEAR") {
        system("cls");
        cout << "Error during input. Please enter the first sorting criteria again (type, id, author, year): ";
        cin >> criteria;
        transform(criteria.begin(), criteria.end(), criteria.begin(), ::toupper);
    }

    // Ταξινόμηση
    function<bool(const BibElement&, const BibElement&)> comp = [&](const BibElement& a, const BibElement& b) {
        if (criteria == "TYPE") {
            if (a.getType() != b.getType())
                return a.getType() < b.getType();
        }
        else if (criteria == "ID") {
            if (a.getId() != b.getId())
                return a.getId() < b.getId();
        }
        else if (criteria == "AUTHOR") {
            if (a.getAuthor() != b.getAuthor())
                return a.getAuthor() < b.getAuthor();
        }
        else if (criteria == "YEAR") {
            if (a.getYear() != b.getYear())
                return a.getYear() < b.getYear();
        }
        return false;
    };

    quickSort(entries, 0, entries.size() - 1, comp);
    
    // Εκτύπωση
    for (const auto &entry : entries)
        entry.print();

    // Εγγραφή output.bib
    ofstream outfile("output.bib");
    for (const auto &entry : entries) {
        entry.exportBibElement(outfile);
    }

    cout << "Exporting to output.bib! Please press ENTER to complete.";
    cin.get();

    return 0;
}