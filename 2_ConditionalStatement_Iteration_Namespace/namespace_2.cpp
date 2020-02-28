#include <iostream>
using namespace std;

namespace SAM_1
{
int a = 100;
}

namespace SAM_2
{
int b = 200;
}

int main()
{
    using namespace SAM_1;
    using namespace SAM_2;

    cout << "SAM_1's a = " << a << endl;
    cout << "SAM_2's b = " << b << endl;
    return 0;
}
