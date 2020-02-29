#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int *pa;
    pa = &a;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "***************************************" << endl;
    cout << "a = " << *pa << endl;
    cout << "&a = " << pa << endl;
    return 0;
}