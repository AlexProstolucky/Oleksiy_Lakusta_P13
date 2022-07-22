#include <iostream>
using namespace std;

unsigned int greatest_common_divisor(unsigned int a, unsigned int b) {
    if (a == b)
        return a;
    if (a > b)
        return greatest_common_divisor(a - b, b);
    return greatest_common_divisor(a, b - a);
}
unsigned int NCK(unsigned int a, unsigned int b) 
{
    if (a % 2 == 0 && b % 2 == 0) return 2;
    if (a % 3 == 0 && b % 3 == 0) return 3;
    if (a % 5 == 0 && b % 5 == 0) return 5;
    return 1;
}


int main()
{
    int a = 10, b = 9;
    cout << greatest_common_divisor(a, b) << endl;
    cout << NCK(a, b);
    return 0;
}
