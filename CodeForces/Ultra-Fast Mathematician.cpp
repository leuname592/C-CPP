#include <stdio.h>
#include <iostream>
using namespace std;

void ultra()
{
string d1,d2;
cin >> d1 >> d2;
int i;
int str_size = d1.size();
for(i = 0; i<str_size; i++)
{
    if (d1[i] != d2[i])
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}
}

int main()
{
    ultra();
    return 0;
}
