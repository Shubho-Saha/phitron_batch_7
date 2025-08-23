#include <bits/stdc++.h>
using namespace std;

vector<int> adList[1005];
bool visited[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        for(int child : adList[current]) {
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;

    while(e--)
    {
        int a, b;
        cin>>a>>b;
        adList[a].push_back(b);
        adList[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    int src, destinition;
    cin>>src>>destinition;
    bfs(src);

    //checking if the destinition node can be visited or not
    if(visited[destinition] == true) {
        cout<<"Can be visited"<<endl;
    } else {
        cout<<"Can not be visited"<<endl;
    }


    return 0;
}