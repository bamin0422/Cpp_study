#include <iostream>
using namespace std;

int main()
{
    struct POINT
    {
        int x;
        int y;
    };

    struct RECT
    {
        struct POINT LeftTop;
        struct POINT RightBottom;
    };

    struct RECT a;

    a.LeftTop.x = 10;
    a.LeftTop.y = 100;

    a.RightBottom.x = 50;
    a.RightBottom.y = 15;

    cout << "sizeOf RECT = " << (a.RightBottom.x - a.LeftTop.x) * (a.LeftTop.y - a.RightBottom.y) << endl;

    return 0;
}