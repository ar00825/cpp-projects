#include <iostream>
#include <cmath>
#include <iomanip>


int main(){

    double bill;
    double roundBillSplit;
    int people;
    double billSplit;
    char currency;
    double remainder;


    std::cout << "------ BILL SPLIT CALCULATOR ------\n";

    std::cout << "Enter the currency: ";
    std::cin >> currency;


    do{
        std::cout << "Enter your bill: ";
        std::cin >> bill;
    }while(bill <= 0);


    do{
        std::cout << "Enter the number of people you would like to split the bill with: ";
        std::cin >> people;
    }while(people <= 1);


    billSplit = bill / people;

    std::cout << "---------------------------------------------------";

    std::cout << "\nThe bill has been split\nEach person needs to pay: " << currency << std::fixed << std::setprecision(2) << billSplit << std::endl;

    std::cout << "\nThanks, have a nice day!";

    return 0;
}