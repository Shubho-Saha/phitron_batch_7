#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, x, y;
	cin>>n>>x>>y;
	
	int a = y/x;
	
	int res = ceil((1.0*n)/a);
	
	cout<<res<<endl;

}
