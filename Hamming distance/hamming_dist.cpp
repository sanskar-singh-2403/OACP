#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int totalHammingDistance(vector<int>& nums) {
    int hammingdistance=0;
    for(int bitpos=0;bitpos<32;bitpos++){
    int setbits=0 ;
        for(int i = 0 ;i<nums.size();i++){
            setbits+=(nums[i]>>bitpos)&1;
        }
        hammingdistance+=setbits * (nums.size()-setbits);
    }
    return hammingdistance;
}

int main(){
    int n; cin>>n;
    vector<int> nums(n);

    for (int i = 0; i < n; i ++) {
        cin>>nums[i];
    }

    cout << totalHammingDistance(nums);

    return 0;
}
