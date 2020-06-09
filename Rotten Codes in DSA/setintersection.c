#include<stdio.h>
int main()
{	int a[15],b[10],c[10],d[15];
	int i,j,k=0,l;
	printf("enter the first set");
	for(i=0;i<15;i++)
	{	scanf("%d",a[i]);
	}
	printf("enter the second set");
	for(j=0;j<10;j++)
	{	scanf("%d",b[j]);
	}
	printf("the intersection between 2 sets is");
	for(i=0;i<15;i++)
	{	for(j=0;j<10;j++)
		{	if(b[j]=a[i])
			{	c[k]=a[i];
				k++;
			}
			else
			{	continue;
			}
		}
	}
	for(l=0;l<k;l++)
	{	printf("%d\n",c[l]);
	}
	
}
