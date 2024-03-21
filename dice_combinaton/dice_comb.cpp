#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e+9+7;
const int N=1e6+10;
ll dp[N];
 
ll comb(ll n){
    if(n<0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1){
        return dp[n];
    }
    ll ans=comb(n-1)+comb(n-2)+comb(n-3)+comb(n-4)+comb(n-5)+comb(n-6);
    dp[n]=ans%M;
    return dp[n];
}
 
 
 
int main(){
    memset(dp,-1,sizeof(dp));    
    dp[0]=1;
    int n;cin>>n;
    ll ans=comb(n);
    cout<<ans<<'\n';
    return 0;
} 