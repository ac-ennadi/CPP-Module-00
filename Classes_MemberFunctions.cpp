#include <iostream>
#include <string>

class Someone 
{
//i can only use it in side this class 
    private:
        std::string _name;
        int _age;
// you can use it out side the class
    public:

        Someone (std::string name, int age)
        {
            _name = name;
            _age =  age;
        }

        void hi()
        {
            std::cout << "Name: " << _name << std::endl << "age: " << _age << std::endl;
        }
};

int main()
{
    Someone student("hello", 11);
    student.hi();
    std::cout << "Working!" << std::endl;
    return (0);
}