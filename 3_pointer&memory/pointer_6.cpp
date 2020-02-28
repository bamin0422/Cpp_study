/*
    동적할당 -> 프로그램 실행 중에 필요한 만큼 기억장소를 요청
    형식 : 자료형 *포인터변수 = new 자료형[개수];
    해제 : delete [] 포인터변수;
    할당장소: Heap
*/

#include <iostream>
using namespace std;

int main()
{
    int *pi = new int;
    *pi = 100;
    cout << *pi << endl;
    delete pi;
    int *pj = new int[3];
    int i;
    pj[0] = 10;
    pj[1] = 20;
    pj[2] = 30;
    for (i = 0; i < 3; i++)
        cout << pj[i] << endl;
    delete[] pj;
    return 0;
}