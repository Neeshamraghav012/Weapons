#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000001
// #define mod 1000000007

int dp[MAXN];

int partition(int money, int n, int coins[]){

    if (dp[money] != 0){
        return dp[money];
    }

    for (int i = 0; i < n; i++){

        if (money - coins[i] >= 0){
            dp[money] += partition(money - coins[i], n, coins);

        }
    }

    return dp[n];
}

int main()
{
    int n, money;
    cin >> n >> money;

    int coins[n];

    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
    dp[0] = 1;
    int ans = partition(money, n, coins);

    cout << ans << endl;
    return 0;
}