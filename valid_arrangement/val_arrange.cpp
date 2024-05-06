#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void euler(unordered_map<int, stack<int>>& adj, vector<vector<int>>& ans, int curr) {
    auto& stk = adj[curr];
    while (!stk.empty()) {
        int nei = stk.top();
        stk.pop();
        euler(adj, ans, nei);
        ans.push_back({curr, nei});
    }
}

vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
    int m = pairs.size();
    unordered_map<int, stack<int>> adj;
    unordered_map<int, int> in;
    unordered_map<int, int> out;
    adj.reserve(m);
    in.reserve(m);
    out.reserve(m);
    for (int i = 0; i < m; i++) {
        int u = pairs[i][0], v = pairs[i][1];
        in[v]++;
        out[u]++;
        adj[u].push(v);
    }
    int start = -1;
    for (auto& p : adj) {
        int i = p.first;
        if (out[i] - in[i] == 1) start = i;
    }
    if (start == -1) {
        start = adj.begin()->first;
    }
    vector<vector<int>> ans;
    euler(adj, ans, start);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;cin>>n;

    vector<vector<int>> pairs;
    for(int i=0;i<n;i++){
        vector<int> temp;
        int a,b;
        cin>>a>>b;
        pairs.push_back({a,b});
    }

    vector<vector<int>> ans = validArrangement(pairs);
    for(auto x:ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }

    return 0;
}