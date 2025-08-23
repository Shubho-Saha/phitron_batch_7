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

class MaxHeap
{
    public:
    vector<int> v;

    MaxHeap() {

    }

    void push(int val) {
        v.push_back(val);

        int crntIdx = v.size() - 1;

        while(crntIdx != 0)
        {
            int prntIdx = (crntIdx - 1) / 2;

            if (v[prntIdx] < v[crntIdx]) {
                swap(v[prntIdx], v[crntIdx]);
                crntIdx = prntIdx;
            } else {
                break;
            }
        }
    }

    void printHeap() {
        for(auto x : v) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    int top() {
        return v.front();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }

    void pop()
    {
        v[0] = v.back();
        v.pop_back();

        int crntIdx = 0;
        int lastIdx = v.size() - 1;

        while(true)
        {
            int leftChildIdx = (crntIdx*2) + 1;
            int rightChildIdx = (crntIdx*2) + 2;

            if (leftChildIdx <= lastIdx && rightChildIdx > lastIdx) {
                if (v[leftChildIdx] > v[crntIdx]) {
                    swap(v[leftChildIdx], v[crntIdx]);
                    crntIdx = leftChildIdx;
                } else break;
            } else if (leftChildIdx <= lastIdx && rightChildIdx <= lastIdx) {

                if (v[leftChildIdx] >= v[rightChildIdx] && v[leftChildIdx] > v[crntIdx]) {
                    swap(v[leftChildIdx], v[crntIdx]);
                    crntIdx = leftChildIdx;
                } else if (v[rightChildIdx] >= v[leftChildIdx] && v[rightChildIdx] > v[crntIdx]) {
                    swap(v[rightChildIdx], v[crntIdx]);
                    crntIdx = rightChildIdx;
                } else break;
            } else break;
        }
    }
};

int main()
{
    fastIO();
    MaxHeap mh;

    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int val;
        cin>>val;
        mh.push(val);
    }

    mh.printHeap();
    mh.pop();
    mh.printHeap();
    mh.pop();
    mh.printHeap();
    mh.pop();
    mh.printHeap();

    
    
    return 0;
}