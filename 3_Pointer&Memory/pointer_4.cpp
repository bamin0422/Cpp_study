#include <iostream>
using namespace std;

int main()
{
    int *pi, i = 100;
    pi = &i;
    cout << "pi = " << pi << "\tpi + 1 = " << pi + 1 << endl;
    return 0;
}