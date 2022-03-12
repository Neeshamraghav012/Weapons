#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

bool visited[N];
vector<int> graph[N];

vector <vector<int>> connected_component;
vector <int> current_connected_component;

void dfs(int vertex){

    visited[vertex] = true;
    current_connected_component.push_back(vertex);
    for (int child : graph[vertex]){

        if (visited[child])continue;

        dfs(child);
    }


}

int main()
{
    
    int n, e;

    cin >> n >> e;

    for (int i = 0; i < e; i++){

        int x, y;
        cin >> x>> y;

        graph[x].push_back(y);
        graph[y].push_back(x);


    }

    int cnt = 0;

    for (int i = 0; i <= n; i++){

        if (visited[i])continue;
        current_connected_component.clear();
        dfs(i);
        connected_component.push_back(current_connected_component);
        cnt++;
    }

    return 0;


}