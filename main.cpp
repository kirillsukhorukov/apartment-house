#include <iostream>
#include <string>

int main() {

    std::cout << "------------Apartment house------------" << std::endl;

    std::string tenants [10];

    for (int i=0; i<10; i++)
    {
        std::cout << "Enter the last name of the tenant living in " << i+1 << " apartment: ";
        std::cin >> tenants[i];
    }

    int n=0, roomNumber;
    do
    {
        std::cout << "Enter apartment number: ";
        std::cin >> roomNumber;
        if (roomNumber>0 && roomNumber<11)
        {
            std::cout << tenants[roomNumber-1] << " lives in apartment number " << roomNumber << std::endl;
            n++;
        } else std::cout << "There is no such apartment number in this house!" << std::endl;

    } while (n<3);

    return 0;
}
