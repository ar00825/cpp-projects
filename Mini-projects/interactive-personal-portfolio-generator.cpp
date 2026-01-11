#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age = 0;
    double height = 0;
    int favouriteNumber = 0;
    bool likes_programming = 0;

    std::cout << "What your name?: ";
    std::getline(std::cin, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your height? (in metres): ";
    std::cin >> height;

    std::cout << "What is your favourite number?: ";
    std::cin >> favouriteNumber;

    std::cout << "Do you like programming? (1 for Yes | 0 for No): ";
    std::cin >> likes_programming;

    std::cout << std::boolalpha;
    std::cout << "\n";

    std::cout << "----- User Profile -----" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " metres" << std::endl;
    std::cout << "Likes programming: " << likes_programming << std::endl;
    std::cout << std::endl;
    std::cout << "In 5 years, you will be " << age + 5 << " years old" << std::endl;
    std::cout << "Your favourite number double is: " << favouriteNumber * 2 << std::endl;

    return 0;
}
