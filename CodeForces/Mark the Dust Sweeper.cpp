#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;


void mark()
{
    int n = 0;
    ll ans = 0;
    cin >> n;
    vector<int> a;
    int temp = 0;
    for (int i = 0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int zeroes = 0;
    while(zeroes<n && a[zeroes]==0)
    {
        zeroes++;
    }
    for(int i=zeroes;i<n-1;i++)
    {
        if(a[i]==0)
        {
            ans++;
        }
        else
        {
            ans += a[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    cin.tie(0);
    int tests;
    cin>>tests;
    while (tests--)
    {
        mark();
    }
}