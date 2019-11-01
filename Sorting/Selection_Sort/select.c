/*   Selection Sort  */
#include<stdio.h>
void ssort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
void main()
{
	int a[100],i,n;
	printf("No of Elements : ");
	scanf("%d",&n);
	printf("Enter the Elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ssort(a,n);
	printf("The Sorted Array : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
