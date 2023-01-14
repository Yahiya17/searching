#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],i,n,mid,l,h,k=0,f;
	printf("Enter size of array ");
	scanf("%d",&n);
	l=0,h=n-1;
	for(i=0;i<n;i++)
	{
		printf("Enter data ");
		scanf("%d",&a[i]);
	}

	printf("\n Enter element to search \n");
	scanf("%d",&f);
	while(l<=h)
	{
		
	
		mid=(l+h)/2;
		if(f==a[mid])
		{
			printf("Element is present ");
			k++;
			break;
		}
		else if(f>a[mid])
		{
			l=mid+1;
		}
		else if(f<a[mid])
		{
			h=mid-1;
		}
	}
	if(k==0)
	{
		printf("%d is not present ",f);
	}
	getch();
}
