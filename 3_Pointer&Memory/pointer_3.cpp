#include <iostream>
using namespace std;

int main()
{
    int *pi;
    char *pc;
    float *pf;
    double *pd;

    cout << "정수형 포인터 크기: " << sizeof(pi) << endl;
    cout << "문자형 포인터 크기: " << sizeof(pc) << endl;
    cout << "실수형 포인터 크기: " << sizeof(pf) << endl;
    cout << "배정도형 포인터 크기: " << sizeof(pd) << endl;

    return 0;
}