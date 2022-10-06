#include <iostream>
using namespace std;

class sample
{

private:
    int num;

public:
    void getdata();
    void display();
    friend sample operator+(sample, int);
    friend sample operator+(int, sample);
};

void sample::getdata()
{

    cout << "Enter the number ";
    cin >> num;
}

void sample::display()
{

    cout << "the sum is " << num<<endl;
}

sample operator+(sample obj1, int x)
{
    sample temp;
    temp.num = obj1.num + x;
    return temp;
}

sample operator+(int x, sample obj1)
{
    sample temp;
    temp.num = x + obj1.num;
    return temp;
}
int main()
{
    int x;
    sample obj1, obj2;

    obj1.getdata();
    cout << "Enter number x to be added to obj1: ";
    cin >> x;
    cout << "obj2 = obj1 + x "<<endl;
    obj2 = obj1 + x;
    obj2.display();
    cout << "obj2 = x + obj1"<<endl;
    obj2 = x + obj1;
    obj2.display();

    return 0;
}
// OUTPUT
// Enter the number 12
// Enter number x to be added to obj1: 23
// obj2 = obj1 + x 
// the sum is 35
// obj2 = x + obj1
// the sum is 35
