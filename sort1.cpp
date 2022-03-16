// Sweep Line algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x, y;
    vector<pair<int, char>> points;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        points.push_back(make_pair(x, 's'));
        points.push_back(make_pair(y, 'e'));
    }


    sort(points.begin(), points.end());

    int overlap = -1;
    int best = -1;
    for (int i = 0; i < n; i++){

        if (points[i].second == 's'){

            overlap += 1;

        }

        else if (points[i].second == 'e'){

            overlap -= 1;
        }

        best = max(overlap, best);
    }

    cout << best << endl;

    return 0;
}

// Contributed by Neesham