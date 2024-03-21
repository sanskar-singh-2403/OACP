#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int M = 1e9+7;
 
vector<vector<int>> dp(1005,vector<int>(1005,-1)); 
 
bool isValid(int i,int j,int n){
    return (i <n && i >=0 && j <n && j>=0);
}
 
int f(int i,int j,vector<vector<char>> &grid){
 
    int n = grid.size();
    if(i == 0 && j ==0 ){
        if(grid[0][0] == '*'){
            return 0;
        }
        return 1;
    }
 
    if(!isValid(i,j,n) || grid[i][j] == '*'){
        return 0;
    }
 
    if(dp[i][j] != -1){
        return dp[i][j];
    }
 
    int up = 0;
    int left = 0;
 
    up = f(i-1,j,grid) % M;
    left = f(i,j-1,grid) % M;
 
    return dp[i][j] = (up + left) % M;
 
}
 
int main(){
 
    int n;cin>>n;
 
    vector<vector<char>> grid(n,vector<char>(n,'#'));
 
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n ; j++){
            cin>>grid[i][j];
        }
    }
 
    int ans = f(n-1,n-1,grid) < 0 ? 0 : f(n-1,n-1,grid);
 
    cout<<ans;
 
    return 0;
} 