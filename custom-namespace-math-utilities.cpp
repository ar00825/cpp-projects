#include <iostream>
#include <cmath>

namespace math_utils {

    double add(double num1, double num2){
        double result = num1 + num2;

        return result;
    };

    double subtract(double num1, double num2){
        double result = num1 - num2;

        return result;
        
    };

    double multiply(double num1, double num2){
        double result = num1 * num2;

        return result;
    };

    double divide(double num1, double num2){
        double result = num1 / num2;

        return result;
    };

    double square(double num){
        return num * num;
    };

    double power(double num1, double num2){

        double result = pow(num1, num2);

        return result;
    };
}


int main(){

    std::string operation;
    double result;
    double num1;
    double num2;

    std::cout << "********** MATH UTILITIES PROGRAM **********";
    std::cout << "\n 1. Add\n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Square \n 6. Power" << '\n';
    std::cout << "\nEnter what operation you would like to perform: ";
    std::cin >> operation;


    if(operation == "Add"){
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        result = math_utils::add(num1, num2);

        std::cout << "Result = " << result << std::endl;
    }
    else if(operation == "Subtraction"){
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        result = math_utils::subtract(num1, num2);

        std::cout << "Result = " << result << std::endl;

    }
    else if(operation == "Multiplication"){
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        result = math_utils::multiply(num1, num2);

        std::cout << "Result = " << result << std::endl;

    }
    else if(operation == "Division"){
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        result = math_utils::divide(num1, num2);

        std::cout << "Result = " << result << std::endl;

    }
    else if(operation == "Square"){
        std::cout << "Enter a number: ";
        std::cin >> num1;
        
        result = math_utils::square(num1);

        std::cout << "Result = " << result << std::endl;
    }
    else if(operation == "Power"){
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        result = math_utils::power(num1, num2);

        std::cout << "Result = " << result << std::endl;
    }
    else{
        std::cout << "Invalid Operation! Try again" << std::endl;
    }

    
    return 0;

}