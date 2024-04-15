#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int f(vector<int> &cost, int coins, int idx) {
    if (idx == cost.size()) {
        return 0;
    }

    int take = INT_MIN;
    if (cost[idx] <= coins) {
        take = 1 + f(cost,coins - cost[idx], idx + 1);
    }
    int notTake = f(cost, coins, idx + 1);

    return max(take, notTake);

}

int main () {

    int n; cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; i ++) {
        cin>>v[i];
    }

    int coins;cin>>coins;

    cout<<f(v,coins,0);

    return 0;
}  