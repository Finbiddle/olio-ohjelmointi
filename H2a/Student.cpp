#include "Student.h"


void Student::setName(const std::string& n) { name = n; }
void Student::setStudentNumber(int n) { studentNumber = n; }
void Student::setAverage(double a) { average = a; }


std::string Student::getName() const { return name; }
int Student::getStudentNumber() const { return studentNumber; }
double Student::getAverage() const { return average; }
