#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;

vector<int> graph[N];
int par[N];


void dfs(int vertex, int p = -1){

    par[vertex] = p;
    for (int child : graph[vertex]){

        if (child == p)continue;

        dfs(child, vertex);
        
    }
}

vector<int> path(int v){

    vector<int> ans;
    while (v != -1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());

    return ans;
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
    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);

    int length = min(path_x.size(), path_y.size());
    int ans = 0;
    for (int i = 0; i < length; i++){

        if (path_x[i] == path_y[i]){
            ans = path_x[i];
        }

    }
    dfs(1, 0);

    cout << ans << endl;

    return 0;


}

// Contributed by Neesham