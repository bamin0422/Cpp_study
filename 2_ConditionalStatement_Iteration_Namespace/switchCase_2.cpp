#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Score: ";
    cin >> score;

    switch (score / 10)
    {
    case 10:
    case 9:
        cout << "Your grade is A." << endl;
        break;
    case 8:
        cout << "Your grade is B." << endl;
        break;
    case 7:
        cout << "Your grade is C." << endl;
        break;
    case 6:
        cout << "Your grade is D." << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Your grade is F." << endl;
        break;
    default:
        cout << "Warning!" << endl;
        break;
    }
    return 0;
}