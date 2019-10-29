#include<stdio.h>
 
void main()
{
    int a[50],i,n,x,flag=0,first,last,mid;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter array elements(ascending order)\n");
 
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
 
    printf("\nEnter the element to search:");
    scanf("%d",&x);
 
    first=0;
    last=n-1;
 
    while(first<=last)
    {
        mid=(first+last)/2;
 
        if(x==a[mid]){
            flag=1;
            break;
        }
        else
            if(x>a[mid])
                first=mid+1;
            else
                last=mid-1;
    }
 
    if(flag==1)
        printf("\nElement found at position %d",mid+1);
    else
        printf("\nElement not found");
 
    
}

