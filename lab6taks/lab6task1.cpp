#include <iostream>
#include <string>
using namespace std;
int main(){
    int var;
    string mystring;
    int *p = nullptr;
 string *h = nullptr;
 
    cout << "enter an integer var  ";
     cin >> var;
   p = new int;
   *p = var;
cout << "dynamically allocated integer is: " << *p << endl;
delete p;
   
    cout << "enter a mystring ";
    cin >> mystring;
   
     h = new string;
     cout << *h;
      *h = mystring;
     cout << "dynamically allocated string is: " << *h;
    
delete h;
return 0;
}
