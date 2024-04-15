#include<iostream>
#include<vector>
using namespace std;

#define ll long long

int main () {

    int sz;cin>>sz;
    vector<int> nums(sz, 0);

    for (auto &x:nums) {
        cin>>x;
    }
    for (auto &e:nums) {
        cout<<e<<'\n';
    }

    int n;cin>>n;

    ll mxr=0;
    int ans=0;
    for(int i=0;i<sz;i++){
        while(nums[i]>(mxr+1)){
            mxr=2*mxr+1;
            ans++;
            if(mxr>=n){
                cout<<ans<<'\n';
                return 0;
            }
        }
        mxr+=nums[i];
        if(mxr>=n){
            cout<<ans<<'\n';
            return 0;
        }
    }
    while(mxr<n){
        mxr=2*mxr+1;
        ans++;
    }
    cout<<ans<<'\n';
    return 0;
}  