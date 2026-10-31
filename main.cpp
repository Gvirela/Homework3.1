#include <iostream>

int main()
{
    std::cout<< "Operator: ||" << std::endl;
    bool variable1{ true };
    bool variable2 {false};
    std::cout << std::boolalpha;
    std::cout<< variable1 << " " << variable1 << " " << (variable1 || variable1) << std::endl;
    std::cout<< variable2 << " " << variable1 << " " << (variable2 || variable1) << std::endl;
    std::cout<< variable1 << " " << variable2 << " " << (variable1 || variable2) << std::endl;
    std::cout<< variable2 << " " << variable2 << " " << (variable2 || variable2) << std::endl;
    std::cout<< "\n";
    std::cout<< "Operator: ||" << std::endl;
    std::cout<< variable1 << " " << variable1 << " " << (variable1 && variable1) << std::endl;
    std::cout<< variable2 << " " << variable1 << " " << (variable2 && variable1) << std::endl;
    std::cout<< variable1 << " " << variable2 << " " << (variable1 && variable2) << std::endl;
    std::cout<< variable2 << " " << variable2 << " " << (variable2 && variable2) << std::endl;
    return EXIT_SUCCESS;

}