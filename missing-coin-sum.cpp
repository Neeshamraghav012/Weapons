#include <bits/stdc++.h>
using namespace std;

int missing_sum(int arr[], int n){

    int missing = 1;

    for (int i = 0; i < n; i++){

        if (arr[i] <= missing) missing += arr[i];
        else{
            return missing;
        }
    }
    return missing;

}

int main()
{
    int n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    
    int ans = missing_sum(arr, n);
    cout << ans << endl;

    return 0;
}