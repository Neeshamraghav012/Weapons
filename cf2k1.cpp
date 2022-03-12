#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int cards[n];

    for (int i = 0; i < n; i++){

        cin>>cards[i];
    }

    int left, right;
    left = 0;
    right = n - 1;

    int sereja, dima;

    for (int j = 0; j < n; j++){

        if ((left > right) || (right < left)){

            break;

        } 

        if ((j % 2) == 0){
            
            if (cards[left] > cards[right]){

                sereja += cards[left];
                left += 1;

            } 
            else{
                sereja += cards[right];
                right -= 1;
            }
        }

        else{
            
            if (cards[left] > cards[right]){

                dima += cards[left];
                left += 1;

            } 
            else{
                dima += cards[right];
                right -= 1;
            }
        }
    }

    cout << sereja << " " << dima << endl;
    return 0;


}