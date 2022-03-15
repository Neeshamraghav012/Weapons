#include <bits/stdc++.h>
using namespace std;

int predicate(int arr[], int n){

    int a = 0, b = n - 1;
    int mid = 0;

    for (int i = 0; i < n; i++){
        
        mid = (a + b) / 2;

        if (arr[mid]) return mid;

        else{
            a = mid;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1};

    int ans = predicate(arr, 6);
    cout << ans << endl;
    return 0;
}