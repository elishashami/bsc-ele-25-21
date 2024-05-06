#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
   
    srand(time(0));
    
    // Generate a random integer between 0 and 11 for days until expiration
    int daysUntilExpiration = rand() % 12; // Generates a random number between 0 and 11
    
    // Output message based on conditions
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    }
    if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!. Renew now and save 20%!" << endl;
        
    }
    else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days Rew now and save 10%!";
       
    }
    else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}