#include <iostream>
#include <string>

using namespace std;

void boring()
{
    string digit;
    cin >> digit;
    int to_int = 0, str_size = digit.size(), sum = 0;;
    to_int = digit.front() - '0';
    sum = (1+2+3+4)*(to_int-1);

    switch (str_size)
    {
    case 1:
        sum+=1;
        break;
    case 2:
        sum+=3;
        break;
    case 3:
        sum+=6;
        break;
    case 4:
        sum+=10;
        break;
    }
    cout << sum << endl;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        boring();
    }
    return 0;
}

