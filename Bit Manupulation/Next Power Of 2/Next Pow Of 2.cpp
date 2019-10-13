#include<iostream>
using namespace std;

void largest(int n){
  n = n|(n>>1);
  n = n|(n>>2);
  n = n|(n>>4);
  n = n|(n>>8);
  n = n|(n>>16);
  cout<<n+1;
}

int main(){
  int n;
  cin>>n;
  largest(n);
}
