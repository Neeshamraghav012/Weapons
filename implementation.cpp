#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
// multiset
#include <bitset>
#include <deque>
#include <stack>
#include <queue>
// priority_queue

using namespace std;

int main(){

    // Data Containers: Almost all the data containers in c++ have size(), begin(), end() method.

    string s = "Neesham";

    for (auto l : s){

        cout << l << endl;
    }

    // Set: Can't be access by [], insert, erase, count, find. Set is always sorted!
    set <int> ss = {5, 5, 5, 4, 3};
    cout << "Set count method: " << ss.count(5) << endl;

    for (auto x : ss){

        cout << x << endl;
    }

    // Map: Iterating over a map.
    map <string, int> m;
    for (auto j : m){

        cout << "Key is: " << j.first << " Value is: " << j.second << endl;
    }   

    // Vector: Operations size, push_back, pop_back, back

    vector<int> v = {5, 2, 4, 3};

    // sort(v.begin(), v.end());
    // auto it = v.end(); it--;

    // cout << "vector pointers: " << *it << endl;

    for (auto it = v.begin(); it != v.end(); it++){

        cout << *it << endl;
    }

    auto found = ss.lower_bound(6);

    cout << *found << endl;





}