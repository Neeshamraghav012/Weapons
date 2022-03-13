#include <bits/stdc++.h>
using namespace std;
const int N =  1000000;

// Memoization
int qb[N];

// Calculating Fibonacci series using dp.
int fibMemoized(int n, int qb[]){

    if (n == 0 || n == 1) return n;

    if (qb[n] != 0) return qb[n];

    int fib1 = fibMemoized(n - 1, qb);
    int fib2 = fibMemoized(n - 2, qb);
    int fibn = fib1 + fib2;
    qb[n] = fibn;
    return qb[n];

}

int main()
{
    int ans = fibMemoized(10, qb);
    cout << ans << endl;
    return 0;
}