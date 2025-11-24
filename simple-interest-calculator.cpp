#include <iostream>


int main(){

    double principal;
    double interest;
    int year;
    double simple_interest;
    double total_amount;
    char currency;
    
    std::cout << "****** SIMPLE INTEREST CALCULATOR ******" << "\n\n";


    std::cout << "Enter currency: ";
    std::cin >> currency;

    std::cout << "Enter initial amount of money: ";
    std::cin >> principal;

    std::cout << "Enter the interest rate (in %): ";
    std::cin >> interest;

    std::cout << "Enter the number of years: ";
    std::cin >> year;

    simple_interest = principal * (interest / 100) * year;
    
    total_amount = simple_interest + principal;

    std::cout << std::endl;
    std::cout << "After " << year << " years, the amount of interest accumulated is: " << currency << simple_interest << std::endl;
    std::cout << "Total amount (including interest): " << currency << total_amount << std::endl;
    std::cout << "\nThanks for using the calculator, have a nice day!";   

    return 0;
}