#include <iostream>
#include <math.h>
using namespace std;
int binToDec(int n)
{
    int bit, ans = 0, i = 0;
    while (n != 0)
    {
        bit = n % 10;
        if (bit == 1)
            ans = (bit * pow(2, i)) + ans;
        n /= 10;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter The Number in Binary to convert in Decimal:";
    cin >> n;
    cout << binToDec(n);
    return 0;
}
