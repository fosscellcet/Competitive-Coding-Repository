#include<stdio.h>
#include<stdlib.h>
struct node{
	int place;
	struct node *Llink;
	struct node *link;
}*ptr,*now,*header,*pre;
void main()
{
	int i=1,n,carry=0,product;
	printf("INPUT : ");
	scanf("%d",&n);
	now=(struct node*)malloc(sizeof(struct node));
	now->place=1;
	now->link=now->Llink=NULL;
	header=now;
	while(i<=n)
	{
		ptr=header;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		while(ptr!=NULL)
		{
			pre=ptr;
			ptr=ptr->Llink;
	                product=pre->place*i+carry;
        	        carry=product/10;
              		pre->place=product%10;
		}
		while(carry>0)
		{
		        now=(struct node*)malloc(sizeof(struct node));
		        now->place=carry%10;
			now->link=pre;
			pre->Llink=now;
		        now->Llink=NULL;
		        header=now;
			carry/=10;
			pre=now;
		}
		i++;
	}
	ptr=header;
	printf("%d! : ",n);
	while(ptr!=NULL)
	{
		printf("%d",ptr->place);
		ptr=ptr->link;
	}
	printf("\n");
	ptr=header;
	while(ptr!=header)
	{
		pre=ptr;
		ptr=ptr->link;
		free(pre);
	}
	free(pre);
}
