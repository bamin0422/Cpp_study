#include "rect.h"

int main()
{
    int r_width = 10, r_height = 35, r_area;
    int t_base = 5, t_height = 5;
    double t_area;
    r_area = RectArea(r_width, r_height);
    t_area = TriangleArea(t_base, t_height);

    cout << "RectArea = " << r_area << endl;
    cout << "TriangleArea = " << t_area << endl;

    return 0;
}