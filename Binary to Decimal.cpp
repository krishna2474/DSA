#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int decToBin(int n)
{
    int ans = 0, i = 0;
    while (n)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a Number to Convert into Binary:";
    cin >> n;
    cout << decToBin(n);
    return 0;
}
