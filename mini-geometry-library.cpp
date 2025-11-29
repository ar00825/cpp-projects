#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

namespace geometryLibrary {
    namespace twoD{
        double areaCircle(double radius){
            double result = PI * radius * radius;
            return result;
        };
        double areaRectangle(double length, double width){
            return length * width;
        };
        double areaTriangle(int height, int width){
            return (height * width) / 2;
        };
        double perimeterCircle(double radius){
            return 2 * PI * radius;
        };
        double perimeterRectangle(double length, double width){
            return 2 * (length * width);
        };
    }

    namespace threeD{
        double volumeSphere(double radius){
            return (4.0 / 3.0) * PI * pow(radius, 3);
        };
        double volumeCyclinder(double height, double radius){
            return PI * pow(radius, 2) * height;
        };
        double surfaceAreaCube(double edge){
            return 6 * pow(edge, 2);
        };
    }
}

int main(){

    double num1;
    double num2;
    double radius;
    double result;
    double length;
    double width;
    double height;
    double edge;
    int option;
    int twoD_option;
    int threeD_option;
    std::string geometryOperation;


    do{
        std::cout << "\n 1. 2D \n 2. 3D \n Select 1 of the two options: ";
        std::cin >> option;
    }while(option != 1 && option != 2);


    if(option == 1){
        std::cout << "\n Here are the following options to peform: ";
        std::cout << "\n 1. Area of circle \n 2. Area of rectangle \n 3. Area of triangle \n 4. Perimeter of circle \n 5. Perimeter of rectangle\n";
        
        do{
            std::cout << "\nEnter the option # you would like to perform (1-5): ";
            std::cin >> std::ws;
            std::cin >> twoD_option;           
        }while(!(twoD_option >= 1 && twoD_option <= 5));

        switch(twoD_option){
            case 1:
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                std::cout << "\nThe radius of the circle is: " << geometryLibrary::twoD::areaCircle(radius) << std::endl;
                break;
            case 2:
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the circle: ";
                std::cin >> width;
                std::cout << "\nThe area of the rectangle is: " << geometryLibrary::twoD::areaRectangle(length, width) << std::endl;
                break;
            case 3:
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Enter the width of the triangle: ";
                std::cin >> width;
                std::cout << "\nThe area of the triangle is: " << geometryLibrary::twoD::areaTriangle(height, width) << std::endl;
                break;
            case 4:
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                std::cout << "\nThe perimeter of the circle is: " << geometryLibrary::twoD::perimeterCircle(radius) << std::endl;
                break;
            case 5:
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "\nThe perimeter of the rectangle is: " << geometryLibrary::twoD::perimeterRectangle(length, width) << std::endl;
                break;
            default:
                std::cout << "\nInvalid Option!" << std::endl;
                break;
        }
    }
    else if(option == 2){
        std::cout << "\n Here are the following options to peform: ";
        std::cout << "\n 1. Volume of sphere \n 2. Volume of cyclinder \n 3. Surface area of cube\n";
        
        do{
            std::cout << "\nEnter the option # you would like to perform (1-3): ";
            std::cin >> std::ws;
            std::cin >> threeD_option;
        }while(!(threeD_option >= 1 && threeD_option <= 3));

        switch(threeD_option){
            case 1:
                std::cout << "Enter the radius of the sphere: ";
                std::cin >> radius;
                std::cout << "\nThe volume of the sphere is: " << geometryLibrary::threeD::volumeSphere(radius) << std::endl;
                break;
            case 2:
                std::cout << "Enter the height of the cyclinder: ";
                std::cin >> height;
                std::cout << "Enter the radius of the cyclinder: ";
                std::cin >> radius;
                std::cout << "\nThe volume of the cyclinder is: " << geometryLibrary::threeD::volumeCyclinder(height, radius) << std::endl;
                break;
            case 3:
                std::cout << "Enter the edge of the cube: ";
                std::cin >> edge;
                std::cout << "\nThe surface area of the cube is: " << geometryLibrary::threeD::surfaceAreaCube(edge) << std::endl;
                break;
            default:
                std::cout << "\nInvalid Option!" << std::endl;
                break;
        }
    }


    return 0;
    
}