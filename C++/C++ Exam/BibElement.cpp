#include "BibElement.h"

BibElement::BibElement() {
    type = "";
    id = "";
    author = "";
    title = "";
    journal = "";
    volume = "";
    booktitle = "";
    publisher = "";
    pages = "";
    year = "";
}

void BibElement::setType(const string &value) {
    type = value;
}

void BibElement::setId(const string &value) {
    id = value;
}

void BibElement::setAuthor(const string &value) {
    author = value;
}

void BibElement::setTitle(const string &value) {
    title = value;
}

void BibElement::setJournal(const string &value) {
    journal = value;
}

void BibElement::setVolume(const string &value) {
    volume = value;
}

void BibElement::setBooktitle(const string &value) {
    booktitle = value;
}

void BibElement::setPublisher(const string &value) {
    publisher = value;
}

void BibElement::setPages(const string &value) {
    pages = value;
}

void BibElement::setYear(const string &value) {
    year = value;
}

string BibElement::getType() const {
    return type;
}

string BibElement::getId() const {
    return id;
}

string BibElement::getAuthor() const {
    return author;
}

string BibElement::getYear() const {
    return year;
}

void BibElement::print() const {
    if (!type.empty())
        std::cout << "Type: " << type << "\n";
    if (!id.empty())
        std::cout << "ID: " << id << "\n";
    if (!author.empty())
        std::cout << "Author: " << author << "\n";
    if (!title.empty())
        std::cout << "Title: " << title << "\n";
    if (!journal.empty())
        std::cout << "Journal: " << journal << "\n";
    if (!volume.empty())
        std::cout << "Volume: " << volume << "\n";
    if (!booktitle.empty())
        std::cout << "Booktitle: " << booktitle << "\n";
    if (!publisher.empty())
        std::cout << "Publisher: " << publisher << "\n";
    if (!pages.empty())
        std::cout << "Pages: " << pages << "\n";
    if (!year.empty())
        std::cout << "Year: " << year << "\n";
    std::cout << "---------------------------\n";
}

// Μέθοδος Εγγραφής output.bib
void BibElement::exportBibElement(ostream &out) const {
    out << "@" << type << "{" << id << ",\n";
    if (!author.empty())
        out << "  author = {" << author << "},\n";
    if (!title.empty())
        out << "  title = {" << title << "},\n";
    if (!journal.empty())
        out << "  journal = {" << journal << "},\n";
    if (!volume.empty())
        out << "  volume = {" << volume << "},\n";
    if (!booktitle.empty())
        out << "  booktitle = {" << booktitle << "},\n";
    if (!publisher.empty())
        out << "  publisher = {" << publisher << "},\n";
    if (!pages.empty())
        out << "  pages = {" << pages << "},\n";
    if (!year.empty())
        out << "  year = {" << year << "},\n";
    out << "}\n\n";
}