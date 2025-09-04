#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
using namespace std;

void fun(int n, int k) {
    int z = (n*2)+k;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int x = 99;
    cout<<x<<endl;

    fun(n, k);
    //x er value ta ekhane
    cout<<x<<endl;

    if (x % 2 == 0) {
        for(int i=0; i<=x; i+=2) {
            cout<<i<<" ";
        }
    } else {
        for(int i=1; i<=x; i+=2) {
            cout<<i<<" ";
        }
    }
    
    
    return 0;
}