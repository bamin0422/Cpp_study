#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    cout << "정수 입력: ";
    cin >> a;
    if (a > 100)
        cout << a << "는 100보다 크다." << endl;
    return 0;
}