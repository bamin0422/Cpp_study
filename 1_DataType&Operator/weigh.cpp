#include <iostream>
using namespace std;

int main()
{
    int height, weight;
    float std_weight;

    cout << "height: ";
    cin >> height;

    cout << "weight: ";
    cin >> weight;

    std_weight = (height - 100) * 0.9f;

    cout << "ave weight: " << std_weight << endl;

    return 0;
}