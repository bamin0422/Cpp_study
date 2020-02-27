#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "정수1 입력: ";
    cin >> num1;

    cout << "정수2 입력: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    return 0;
}