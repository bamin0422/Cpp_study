#include <iostream>
using namespace std;

int main()
{
    int kor, math, eng, sum;
    float average;
    ;

    kor = 100;
    math = 98;
    eng = 79;

    cout << "총점: " << kor + math + eng << endl;
    cout << "평균: " << (kor + math + eng) / (float)3 << endl;
    return 0;
}