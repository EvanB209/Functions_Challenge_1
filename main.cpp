#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

double calculatePerimeter(double width, double height);

double calculateArea(double radius);

double calculatePerimeter(double radius);

double calculateArea(double width, double height);

int main() {
    bool quit = false;
    int choice = 0;
    do  {
        std::cout << "Pick a Choice:"<< std::endl;
        std::cout << "1. Area of a Circle"<< std::endl;
        std::cout << "2. Perimeter of a Circle"<< std::endl;
        std::cout << "3. Area of a Rectangle"<< std::endl;
        std::cout << "4. Perimeter of a Rectangle"<< std::endl;
        std::cout << "5. Quit"<< std::endl;
        std::cin>> choice;
        switch (choice) {
            case 1: {
                std::cout<< "Enter the Circle's Radius:"<< std::endl;
                double radius;
                std::cout<< "Radius:"<< std::endl;

                std::cin>> radius;
                double area = calculateArea(radius);
                std::cout << "The area of the circle is: " << area << std::endl;
                break;
            }
            case 2:{
            std::cout<< "Enter the Circle's Radius:"<< std::endl;
                double radius2;
                std::cout<< "Radius:"<< std::endl;
                std::cin>> radius2;
                double perimeter = calculatePerimeter(radius2);
                std::cout << "The perimeter of the circle is: " << perimeter << std::endl;
                break;
            }
            case 3: {
                std::cout<< "Enter the Rectangle's Width and Height:"<< std::endl;
                double width;
                double height;
                std::cout<< "Width:"<< std::endl;
                std::cin>> width;
                std::cout<< "Height:"<< std::endl;
                std::cin>> height;
                double area2 = calculateArea(width, height);
                std::cout << "The area of the rectangle is: " << area2 << std::endl;
                break;
            }
            case 4: {
                std::cout<< "Enter the Rectangle's Width and Height:"<< std::endl;
                double width2;
                double height2;
                std::cout<< "Width:"<< std::endl;
                std::cin>> width2;
                std::cout<< "Height:"<< std::endl;
                std::cin>> height2;
                double perimeter2 = calculatePerimeter(width2, height2);
                std::cout << "The perimeter of the rectangle is: " << perimeter2 << std::endl;
                break;
            }
            case 5: {
                quit = true;
                break;
            }
            default: std::cout<<"Incorrect entry"<<std::endl;

        }


    }while (!quit);

    return 0;
   }
double calculatePerimeter(const double width, const double height) {
    return (width*2) + (height*2);
}

double calculateArea(const double radius) {
    const double PI = 3.14159;
    return PI*(radius*radius);
}

double calculatePerimeter(const double radius) {
    const double PI = 3.14159;
    return 2*PI*radius;
}

double calculateArea(const double width, const double height) {
    return width*height;
}