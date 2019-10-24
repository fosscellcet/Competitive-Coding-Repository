/* Author Prajawal Kumar Pandey
 * prajwalkpandey@github.com
 * Dated 24 October 2019
 * Finding the Longest Common Subsequence in 3 Strings using 3d DP 
 * */

#include<bits/stdc++.h>

using namespace std;

string func(string x,string y,string z){
    int dp[1010][1010][1010]={0};

    for(unsigned int i=1;i<=x.length();i++)
    for(unsigned int j=1;j<=y.length();j++)
	for(unsigned int k=1;k<=z.length();k++){
        if(x[i-1]==y[j-1]&&y[j-1]==z[k-1])
        dp[i][j][k]=1+dp[i-1][j-1][k-1];
        else
        dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
    }

    string xx="";
    int i=x.length(),j=y.length(),k=z.length();
    while(i>0&&j>0&&k>0){
        if(dp[i][j-1][k]==dp[i-1][j][k]&&dp[i][j][k-1]==dp[i-1][j][k]&&dp[i][j][k]>dp[i-1][j][k]){
            xx+=x[i-1];
            i--;j--;k--;
        }else{
            if(dp[i-1][j][k]==dp[i][j][k])
            i--;
            else if(dp[i][j-1][k]==dp[i][j][k])
            j--;
			else
			k--;
        }
    }
    reverse(xx.begin(),xx.end());
    return xx;
}

int main(){

    string x,y,z;
    cin>>x>>y>>z;

    string ss=func(x,y,z);
	cout<<ss.length()<<endl;

    return 0;
}
