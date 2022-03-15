// Climing stairs

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int qb[N];

int climbStairsMem(int n, int qb[]){

    if (n < 0) return 0;
    if (n == 0) return 1;
    if (qb[n] > 0) return qb[n];
    
    int x = (climbStairsMem(n - 1, qb) + climbStairsMem(n - 2, qb) + climbStairsMem(n - 3, qb));
    return x;
    qb[n] = x;
}

int climbStairsTab(int n){

    int dp[n + 1];

    for (int i = 0; i <= n; i++){
        dp[i] = 0;
    }

    dp[0] = 1;

    for (int i = 1; i <= n; i++){
        if (i == 1){

            dp[i] += dp[i - 1];


        }
        else if (i == 2){

            dp[i] += dp[i - 1] + dp[i - 2];


        }
        else{

            dp[i] += dp[i - 1] + dp[i - 2] + dp[i - 3];


        }
    }

    return dp[n];

}

int main()
{
    int ans1 = climbStairsMem(10, qb);
    cout << ans1 << endl;

    int ans2 = climbStairsTab(10);
    cout << ans2 << endl;

    return 0;
}