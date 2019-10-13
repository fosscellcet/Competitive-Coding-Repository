#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isPow2(int x ){
  return(!(x&(x-1)));
}

int main(){
int n;
cin>>n;
cout<<isPow2(n);
}
