#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(std::string b, std::string m, int y)
        : brand(b), model(m), yearModel(y) {}

    void printData() const {
        std::cout << "Brand: " << brand
                  << ", Model: " << model
                  << ", Year: " << yearModel << std::endl;
    }
};

int main() {
    std::vector<Car> carList;

    carList.emplace_back("Honda", "Accord", 2009);
    carList.emplace_back("Nissan", "Micra", 2018);
    carList.emplace_back("Mercedes-Benz", "C300e", 2023);

    std::cout << "Second car in the list:" << std::endl;
    carList[1].printData();

    std::cout << "\nAll cars in the list:" << std::endl;
    for (const auto &car : carList) {
        car.printData();
    }

    return 0;
}
