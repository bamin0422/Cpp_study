#include <iostream>
using namespace std;

namespace NS_1
{
int a = 200;
}

int main()
{
    int a = 100;
    cout << "Range of main()." << endl;
    for (int i = 1; i < 3; i++)
    {
        cout << "Range of iteration." << endl;
        cout << "i = " << i << endl;
        cout << "namespace NS_1's a = " << NS_1::a << endl;
        cout << "a = " << a << endl;
    }

    cout << "namespace NS_1's a = " << NS_1::a << endl;
    cout << "a = " << a << endl;
    cout << "Turn off program" << endl;
    return 0;
}