#include "bits/stdc++.h"
using namespace std;
int thereAreNoStringsOnMe(string first, string second) {
    int n = first.size(), m =second.size();
    int res[n+1][m+1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i == 0 || j == 0) {
                res[i][j] = 0;
            } else if(first.at(i-1)==second.at(j-1)){
                res[i][j]= 1 + res[i-1][j-1];
            }
            else{
                res[i][j]= max(res[i-1][j],res[i][j-1]);
            }
        }
    }
    return res[n][m];
}

int main() {
    cin.tie(0);
    string first, second;
    while(getline(cin,first)){
        getline(cin,second);
        cout<<thereAreNoStringsOnMe(first,second)<<endl;
    }
    return 0;
}
