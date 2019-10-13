#include<iostream>

using namespace std;

void subSet(int a[],int n){
   int pn = 1<<n;
   cout<<pn<<"\n";   
  for(int i=0;i<pn;i++){
    for(int j=0;j<n;j++){
      if((1<<j)&i)
        cout<<a[j];
    }
    cout<<"\n";
  }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
	  cin>>a[i];
  subSet(a,n);  
}
