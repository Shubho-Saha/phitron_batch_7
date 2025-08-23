#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

class Student
{
    public:
    char name[100];
    int roll;
};

int main()
{
    fastIO();
    Student a;
    char tmp[100] = "hasan ali";
    strcpy(a.name,tmp);
    a.roll = 9;

    cout<<a.name<<" "<<a.roll<<nl;
    
    return 0;
}