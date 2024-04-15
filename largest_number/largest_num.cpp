#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
int main () {
    int n;cin>>n;
    vector<int> v(n);

    for (int i = 0; i < n; i ++) {
        cin>>v[i];
    }

    sort(v.begin(),v.end(),cmp);
    
    string ans = "";

    for(int i = 0;i<v.size();i++){
        ans+=to_string(v[i]);
    }

    cout<<ans<<'\n';
    return 0;
}  