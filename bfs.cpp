#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int visited[N];
vector<int> graph[N];

int bfs(int source){

    queue<int> q;
    visited[source] = 1;
    q.push(source);

    while (!q.empty()){

        int foo = q.front();
        q.pop();
        
        for (int child : graph[foo]){

            if (visited[child])continue;
            q.push(child);
            visited[child] = 1;
        }
    }
}

int main()
{
    return 0;
}