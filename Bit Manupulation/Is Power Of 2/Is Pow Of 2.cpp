#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPow2(int x){
  return(!(x&(x-1)));//(100)&(011)=0; (111)&(110)!=0;we return !(result); hence we get 1 when we have a power of two;
}

int main(){
  int n;
  cin>>n;
  cout<<isPow2(n);
}
