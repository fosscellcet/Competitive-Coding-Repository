#include<iostream>
using namespace std;

bool check(int n,int i){
	return(n&(1<<(i-1)));
}

int main(){
	int n,i;
	cin>>n>>i;
	cout<<check(n,i);

	
}
