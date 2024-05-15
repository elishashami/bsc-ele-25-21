#include <iostream>
#include <limits>

using namespace std;

int main() {
    int input;

    
    cout << "Please enter an integer value between 5 and 10: ";
    
    
    while (!(cin >> input) || input < 5 || input > 10) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "sorry you have entered invalid number try again zikomo ";
    }

    
    cout << "Thank you! Your input value " << input << " has been accepted." << endl;

    return 0;
}