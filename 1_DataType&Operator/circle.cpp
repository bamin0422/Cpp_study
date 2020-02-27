#include <iostream>
using namespace std;

int main()
{
    int r;
    float CArea, Cference;

    cout << "반지름 입력: ";
    cin >> r;
    CArea = 2 * (float)3.14 * r;
    Cference = r * r * (float)3.14;

    cout << "원의 원주: " << CArea << endl;
    cout << "원의 넓이: " << Cference << endl;

    return 0;
}