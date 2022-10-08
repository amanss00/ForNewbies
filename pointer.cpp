#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *p = &n;

    cout << "Adress of pointer  " << p << "\n";
    cout << "Value of pointer  " << *p << "\n";

    // store value in another pointer
    int *p1 = p;
    cout << "Adress of pointer  " << p1 << "\n";
    cout << "Value of pointer  " << *p1 << "\n";

    // int *p2 = p + p1;   i dont know why it is not working  
    // cout << "Adress of pointer  " << p2 << "\n";
    // cout << "Value of pointer  " << *p2 << "\n";
    
    return 0;
}
