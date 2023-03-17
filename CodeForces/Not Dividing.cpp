#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void dividing()
{
    int leng = 0,len = 0;
    cin >> leng;
    vector <int> array1;
    int temp=0, count1=0;
    while(count1<leng)
    {
        cin >> temp;
        array1.push_back(temp);
        count1++;
    }
    len = 0;
    while(len<leng)
    {
        if(array1[len-1]==1)
            {
            array1[len-1]+=1;
            }
        len +=1;
    }
    len=0;
    while(len<leng)
    {
        if (array1[len]%array1[len-1]==0)
            {
             array1[len]+=1;
             len-=1;
            }
        len +=1;
    }
    count1=0;
    while (count1<leng)
    {
        cout << array1[count1]<< " ";
        count1++;
    }
    cout << endl;
}


int main()
{
    int tests;
    cin >> tests;
    while(tests--)
    {
        dividing();
    }
    return 0;
}