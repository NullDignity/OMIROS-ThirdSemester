#include "Student.h"

Student::Student(string first_name, string last_name, float grade) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->grade = grade;
}

string Student::getFirstName() const {
    return this->first_name;
}

string Student::getLastName() const {
    return this->last_name;
}

float Student::getGrade() const {
    return this->grade;
}

void Student::SetAll(string first_name, string last_name, float grade) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->grade = grade;
}

void Student::SetFirstName(string first_name) {
    this->first_name = first_name;
}

void Student::SetLastName(string last_name) {
    this->last_name = last_name;
}

void Student::SetGrade(float grade) {
    this->grade = grade;
}

Student::~Student() {
    // average destructor behaviour
}