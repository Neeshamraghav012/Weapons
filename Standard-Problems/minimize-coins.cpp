#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, money;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int dp[money + 1];
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = arr[i]; j <= money; j++){

            dp[j] += dp[j - arr[i]];


        }
    }
    cout << dp[money] << endl;
    return 0;
}