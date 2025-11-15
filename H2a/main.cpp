#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"


int main() {
    Car c;
    c.setBrand("Nissan");
    c.setModel("Micra");
    c.setYearModel(2018);
    c.printData();


    Rectangle* r = new Rectangle();
    r->setWidth(4.5);
    r->setHeight(2.0);
    std::cout << "Rectangle area: " << r->getArea() << '\n';
    std::cout << "Rectangle circum: " << r->getCircum() << '\n';
    delete r;


    std::unique_ptr<Student> s = std::make_unique<Student>();
    s->setName("Hilma Onninen");
    s->setStudentNumber(123456);
    s->setAverage(4.7);


    std::cout << "Student name: " << s->getName() << '\n';
    std::cout << "Student number: " << s->getStudentNumber() << '\n';
    std::cout << "Student average: " << s->getAverage() << '\n';


    return 0;
}
