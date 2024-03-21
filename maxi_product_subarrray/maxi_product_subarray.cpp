#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int maxLeft = nums[0];
        int maxRight = nums[0];
        bool zeroPresent =  false;
        for(auto &e:nums){
            prod*=e;
            if(e == 0) {
                zeroPresent = true;
                prod = 1;
                continue;
            }
            maxLeft=max(maxLeft,prod);
        }

        prod=1;

        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            if(nums[i] == 0) {
                zeroPresent = true;
                prod = 1;
                continue;
            }
            maxRight=max(maxRight,prod);
        }

        if(zeroPresent) return max(max(maxLeft,maxRight),0);
        return max(maxLeft,maxRight);
    }
};


int main(){
    int n;cin>>n;
    vector<int> nums(n);
    if(n == 0){
        cout<<0<<'\n';
        return 0;
    }

    for (int i = 0; i < n; i ++) {
        cin>>nums[i];
    }

    int ans = Solution().maxProduct(nums);
    cout<<ans<<'\n';

    return 0;
}