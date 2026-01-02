#include <iostream>

// Define a namesapce
namespace MyNamespace {
    int age = 21;
    char name[] = "achraf";
    void Printinfo()
    {
        std::cout << "Name :" << name << std::endl << "He Love Coding!" << "\n";
    }
}

int main()
{
    // Access namespace members
    std::cout << "Age: " << MyNamespace::age << std::endl;
    MyNamespace::Printinfo();

    // Or use 'using' directive
    using namespace MyNamespace;
    Printinfo();
    return 0;
}