#include <iostream>
#include <math.h>

using namespace std;

void ban()
{
    int n = 0;
    cin >> n;
    int total = 0, uno = 1, last = 3*n, temp_n = round((float)n/2);
    if (n==1)
    {
        cout << 1 << endl;
        cout << 1 << " " << 3 << endl;
        n = 0;
    }
    else
    {
        cout << temp_n << endl;
        while(temp_n--)
        {
            cout << uno << " " << last << endl;
            uno += 3;
            last -= 3;
        }
    }
}

int main()
{
    int tests;
    cin >> tests;
    while(tests--)
    {
        ban();
    }
}

