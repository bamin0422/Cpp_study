#include <iostream>
#define TEST
using namespace std;

int main()
{
    cout << "*******************" << endl;
#ifdef TEST
    cout << "TESTTESTTESTTESTTEST" << endl;
#else
    cout << "*********************" << endl;
#endif
    return 0;
}