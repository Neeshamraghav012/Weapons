#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000001
#define mod 1000000007

int dp[MAXN];

int partition(int n){

    if (dp[n] != 0){
        return dp[n];
    }

    for (int i = 1; i <= 6; i++){

        if (n - i >= 0){
            dp[n] += partition(n - i);
            dp[n] %= mod;
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    dp[0] = 1;
    int ans = partition(n);
    cout << ans << endl;
    return 0;
}