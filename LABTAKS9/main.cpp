#include<iostream>
#include "Rectangle.h"/*the derived class from Polygon */
#include "Triangle.h" /*the derived class from Polygon */

using namespace std;

int main(){
    Rectangle rect;
    Triangle trg1;
    rect.SetValues(4,5);/*accessor method setting values of rectangle*/
    trg1.SetValues(4,5); /*accessor method setting values of triangle*/

    cout << rect.Area() << '\n';
    cout << trg1.Area() << '\n';
    return 0;
    
}