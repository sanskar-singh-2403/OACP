#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int sum = 0, prev = 0, mx = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums [i];
            prev += i * nums [i];
        }
        vector<int> dp(nums.size(), -1);
        dp [0] = prev;
        mx = dp [0];
        for (int i = 1; i < nums.size(); i++) {
            dp [i] = dp [i-1] + sum - nums.size() * nums[nums.size() - i];
            mx = max(mx, dp [i]);
        }
        return mx;
    }
};

int main(){
    int n;cin>>n;
    if (n == 0) {
        cout<<0<<'\n';
        return 0;
    }

    vector<int> v(n);

    for (int i = 0; i < n; i ++) {
        cin>>v[i];
    }

    cout<<Solution().maxRotateFunction(v);
    return 0;
}