#include <bits/stdc++.h>
using namespace std;

int predicate(int arr[], int n){

    int a = 0, b = n - 1;
    int mid = 0;

    while (a <= b) {
        
        mid = (a + b) / 2;

        if (arr[mid]) return mid;

        else{
            a = mid;
        }
    }

    return -1;
}

int predicate1(int arr[], int n){

    int x = -1;
    for (int b = n; b >= 1; b /= 2) {
        
        while (!arr[x + b]) x += b;
    }

    int k = x + 1;

    return k;

}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1};

    int ans = predicate(arr, 6);
    cout << ans << endl;
    return 0;
}