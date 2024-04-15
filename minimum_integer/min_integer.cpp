#include<vector>
#include<iostream>
#include<string>
using namespace std;

int main () {

    string num;cin>>num;
    int k;cin>>k;

    string ans;
    vector<char> stack;

    for (int i = 0; i < num.length(); ++i) {
        while (k > 0 && !stack.empty() && stack.back() > num[i]) {
            stack.pop_back();
            --k;
        }
        stack.push_back(num[i]);
    }

    while (k-- > 0) {
        stack.pop_back();
    }

    for (const char c : stack) {
        if (c == '0' && ans.empty()){
            continue;
        }
        ans += c;
    }

    string ret = ans.empty() ? "0" : ans; 

    cout<<ans<<'\n';

    return 0;
}  