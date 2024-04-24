#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int numSubmat(vector<vector<int>> &m) {
	int out{};
	for(int I{}; I<size(m); ++I)
		for(int J{}; J<size(m[0]); ++J)
			for(int j{J}, i{-1}, h{-1}; j>=0 and m[I][j]; --j, h=i)
				for(i=I; i>h and m[i][j]; --i)
					out++;
	return out;
}

int main(){
    
    int n;cin>>n;

    vector<vector<int>> grid(n, vector<int> (n,0));

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            cin>>grid[i][j];
        }
    }

    cout<<numSubmat(grid);

    return 0;
}