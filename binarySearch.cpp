#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int value;
    int array[] = {1, 2, 4, 4, 4, 5};



    auto l = lower_bound(array, array + n, 4);
    auto r = upper_bound(array, array + n, 4);

    cout << (r - l) << endl;

    return 0;
}

int binarySearch(int array[], int n, int value){

    int a = 0, b = n-1;

    while (a <= b) {

        int k = (a + b) / 2;

        if (array[k] == value) {
            
            return k;
        }

        if (array[k] > value) b = k-1;
        else a = k+1;

    }

    return -1;


}