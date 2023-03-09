#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Eh, what world is there to greet?" << std::endl;

    std::cin >> s;

    std::cout << "\nSo, " << s << " is out there? I will greet it, then.\n" << std::endl;
    std::cout << "Hello, World." << std::endl;

    return 0;
}
