#ifndef BIBELEMENT_H
    #define BIBELEMENT_H

    #include <iostream>
    #include <fstream>
    #include <string>
    // Η χρήση των ακόλουθων βιβλιοθηκών έγινε με σκοπό την απλοποίηση του προγράμματος. 
    // Δεν τις έχουμε κάνει στο μάθημα.
    #include <sstream> // Για χρήση stringstream
    #include <vector> // Για dynamic arrays
    #include <algorithm> // Για isspace κτλ
    #include <functional> // Για Quicksort Implementation
    using namespace std;

    class BibElement {

        private:
            string type, id, author, title, journal, volume, booktitle, publisher, pages, year;

        public:
            // Constructor
            BibElement();
            // Setters
            void setType(const string&);
            void setId(const string&);
            void setAuthor(const string&);
            void setTitle(const string&);
            void setJournal(const string&);
            void setVolume(const string&);
            void setBooktitle(const string&);
            void setPublisher(const string&);
            void setPages(const string&);
            void setYear(const string&);
            // Getters (Μόνο για Sorting)
            string getType() const;
            string getId() const;
            string getAuthor() const;
            string getYear() const;
            // Methods
            void print() const;
            void exportBibElement(ostream &out) const;
    };

#endif