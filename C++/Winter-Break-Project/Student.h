#ifndef STUDENT_H
    #define STUDENT_H

    #include <iostream>
    using namespace std;

    class Student {

        private:
            string first_name;
            string last_name;
            float grade;

        public:
            // constructor
            Student(string, string, float);
            // getters
            string getFirstName() const;
            string getLastName() const;
            float getGrade() const;
            // setters
            void SetAll(string, string, float);
            void SetFirstName(string);
            void SetLastName(string);
            void SetGrade(float);
            // destructor
            ~Student();

    };
#endif