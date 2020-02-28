#include <iostream>
using namespace std;

int main()
{
    int jumsu;

    cout << "정수 입력: ";
    cin >> jumsu;

    if (jumsu <= 100 && jumsu >= 90)
        cout << "Your grade is A" << endl;
    else if (jumsu <= 89 && jumsu >= 80)
        cout << "Your grade is B" << endl;
    else if (jumsu <= 79 && jumsu >= 70)
        cout << "Your grade is C" << endl;
    else if (jumsu <= 69 && jumsu >= 60)
        cout << "Your grade is D" << endl;
    else
        cout << "Your grade is F" << endl;
    return 0;
}