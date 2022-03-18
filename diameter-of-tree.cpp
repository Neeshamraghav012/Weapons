#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;

vector<int> graph[N];
int depth[N];

void dfs(int vertex, int par=-1){

    for (int child : graph[vertex]){

        if (child == par)continue;

        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);

        
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

    dfs(1);
    int mx_depth = -1;
    int mx_d_node;

    for (int i = 0; i < n; i++){
        
        if (mx_depth < depth[i]){
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;

    }

    dfs(mx_d_node);
    mx_depth = -1;

    for (int i = 0; i < n; i++){
        
        if (mx_depth < depth[i]){
            mx_depth = depth[i];
        }

    }

    cout << mx_depth << endl;

    return 0;


}

// Contributed by Neesham