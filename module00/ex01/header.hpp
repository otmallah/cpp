#ifndef HEADER_hpp
#define HEADER_hpp

#include <iostream>
#include <string>
#include <cstring>


class contact {
    public :
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string number_phone;
};

class PhoneBook {
    public :
        contact test;
};


#endif