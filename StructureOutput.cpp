#include <iostream>
#include <Windows.h>

struct address
{
    std::string city_address;
    std::string street_address;
    int house_address;
    int flat_address;
    int index_address;
};

void displayData(address);
address getData(address profile);

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    address profile;
    profile = getData(profile);
    displayData(profile);

    return 0;
}

void displayData(address profile)
{ 
    std::cout << "Город: " << profile.city_address << std::endl;
    std::cout << "Улица: " << profile.street_address << std::endl;
    std::cout << "Номер дома: " << profile.house_address << std::endl;
    std::cout << "Номер квартиры: " << profile.flat_address << std::endl;
    std::cout << "Индекс: " << profile.index_address << std::endl;
    std::cout << std::endl;
}

address getData(address profile)
{ 
    std::cout << "Город: ";
    std::cin >> profile.city_address;
    std::cout << "Улица: ";
    std::cin >> profile.street_address;
    std::cout << "Номер дома: ";
    std::cin >> profile.house_address;
    std::cout << "Номер квартиры: ";
    std::cin >> profile.flat_address;
    std::cout << "Индекс: ";
    std::cin >> profile.index_address;
    std::cout << std::endl;
    return profile;
}