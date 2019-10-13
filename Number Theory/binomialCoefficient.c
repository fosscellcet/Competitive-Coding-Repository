#include<stdio.h>
long long unsigned int calc(int n,int k)
{
	long long unsigned int r=1;
	if(k>n-k)
		k=n-k;
	for(int i=0;i<k;i++)
	{
		r=r*(n-i);
		r=r/(i+1);
	}
	return r;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%llu\n",calc(n,k));
	return 0;
}
