#include "header.hpp"

int main()
{
    PhoneBook *phone;
    std::string str;

    //int *t;

    while (1337)
    {
        std::cout << "Enter : ";
        getline(std::cin, str);
        if (str == "ADD")
        {
            phone = new PhoneBook;
            std::cout << "Enter First name : ";
            getline(std::cin, phone->test.first_name);
            std::cout << "Enter Last name : ";
            getline(std::cin, phone->test.last_name);
            std::cout << "Enter nick name : ";
            getline(std::cin, phone->test.nick_name);
            std::cout << "Enter number phone : ";
            getline(std::cin, phone->test.number_phone);
        }
        if (str == "SEARCH")
        {
            std::cout << phone->test.first_name << "\n";
            std::cout << phone->test.last_name << "\n" ;
            std::cout << phone->test.nick_name << "\n" ; 
            std::cout << phone->test.number_phone << "\n";
        }
        if (str == "EXIT")
        {
            std::cout << "Good bye\n";
            return 0;
        }
    }
}