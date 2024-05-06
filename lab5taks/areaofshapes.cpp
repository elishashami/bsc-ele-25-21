#include <iostream>

using namespace std;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    cout << "Welcome to the shape area calculator!" << endl;
    
    while (true) {
        cout << "Select the shape you want to calculate the area for:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout << "Enter your choice (1, 2, 3, or 4): ";
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting program. goodbye" << endl;
            break;
        }

        double area;
        switch (choice) {
            case 1: {
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = calculateTriangleArea(base, height);
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = calculateRectangleArea(length, width);
                break;
            }
            case 3: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                area = calculateSquareArea(side);
                break;
            }
            default:
                cout << "Invalid input! Please enter a valid choice." << endl;
                continue;
        }

        cout << "The area is: " << area << endl;
    }

    return 0;
}