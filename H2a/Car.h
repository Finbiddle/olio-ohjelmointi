#ifndef CAR_H
#define CAR_H


#include <string>


class Car {
private:
    std::string brand;
    std::string model;
    int yearModel{};


public:
    void setBrand(const std::string& b);
    void setModel(const std::string& m);
    void setYearModel(int y);


    void printData() const;
};


#endif // CAR_H
