#include <iostream>

using namespace std;

void swap(int& ra, int& rb)
{
    ra ^= rb;
    rb ^= ra;
    ra ^= rb;
}

int main(void)
{
    int a = 3, b = 5;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}
