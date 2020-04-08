#include <iostream>
#include <string>

void readAndConvert() 
{
int i = 0;
    int limit;
    std::string company;
    std::string description;
    // std::cout << "enter limit" <<std::endl;
    std::cin>>limit;
    std::cin.ignore(1);
    // std::cout << "enter companyt" <<std::endl;
    getline(std::cin,company);
    // std::cout << "enter descitpoin" <<std::endl;
    getline(std::cin,description);
    int amount;
    double price;
    std::string st_name;
    std::cout << description << " (" << company << ")" << std::endl;
    while (i<limit)
    {
        std::cin >> amount >> price >> st_name;
        i++;
        std::cout << st_name << ": " << floor(amount*price) << std::endl;
    }
}


