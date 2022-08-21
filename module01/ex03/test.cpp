#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        const std::string& getType()
        {
            return type;
        }
        void    setType(std::string name)
        {
            type = name;
        }
};

int main()
{ 
    Weapon te;

    te.setType("booomb");
    std::cout << te.getType() << std::endl;
}