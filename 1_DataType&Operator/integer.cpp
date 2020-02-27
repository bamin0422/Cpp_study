#include <iostream>
using namespace std;

int main()
{
    int a = 23, r = 0;
    r = a + 1;
    cout << a << " + 1 = " << r << endl;

    a = 2147483647;
    r = a + 1;
    cout << a << " + 1 = " << r << endl;
    return 0;
}