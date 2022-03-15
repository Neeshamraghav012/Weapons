#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;

bool visited[N];
vector<int> graph[N];
int depth[N];
int height[N];

void dfs(int vertex, int par){

    for (int child : graph[vertex]){

        if (child == par)continue;

        depth[child] += depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
        
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

    dfs(1, 0);

    for (int i = 0; i < n; i++){
        cout << depth[i] << " " << height[i] << endl;

    }

    return 0;


}

// Contributed by Neesham