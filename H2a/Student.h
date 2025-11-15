#ifndef STUDENT_H
#define STUDENT_H


#include <string>


class Student {
private:
    std::string name;
    int studentNumber{};
    double average{};


public:
    // Setterit
    void setName(const std::string& n);
    void setStudentNumber(int n);
    void setAverage(double a);


    // Getterit
    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};


#endif // STUDENT_H
