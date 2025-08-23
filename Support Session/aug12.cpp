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
    int id;
    string name;
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }
};

int main()
{
    fastIO();
    int x = 10;

    cout<<x<<endl;
    cout<<*(&x)<<endl;

    Student rahim(8, "rahim");

    cout<<rahim.name<<" "<<rahim.id<<endl;

    Student* sakib = new Student(2, "Sakib");
    cout<<sakib->name<<" "<<(*sakib).id<<endl;


    
    return 0;
}