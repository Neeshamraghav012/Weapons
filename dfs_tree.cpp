
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int subtree_sum[N];
bool visited[N];
vector<int> graph[N];


void dfs(int vertex){

    visited[vertex] = true;
    subtree_sum[vertex] += vertex;

    for (int child : graph[vertex]){

        // if (visited[child])continue;

        dfs(child);

        subtree_sum[vertex] += subtree_sum[child];
    }


}

int main(){

    int n, e;

    cin >> n >> e;

    for (int i = 0; i < e; i++){

        int x, y;
        cin >> x>> y;

        graph[x].push_back(y);
        graph[y].push_back(x);


    }

    int q;
    cin>>q;

    while (q--){

        int v;
        cin>>v;

        cout << subtree_sum[v] << endl;
    }
    
}

// Contributed by Neesham