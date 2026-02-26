#include<stdio.h>
#include<stdlib.h>
int getmax(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	if(a[i]>max)
	max=a[i];
	return max;
	
}
void countingsort(int a[],int n,int pos)
{
	int b[n],i;
	int count[10]={0};
	for(i=0;i<n;i++)
	count[(a[i]/pos)%10]++;
	for(i=1;i<10;i++)
	count[i]+=count[i-1];
	for(i=n-1;i>=0;i--)
	b[--count[(a[i]/pos)%10]]=a[i];
	for(i=0;i<n;i++)
	a[i]=b[i];
}
void radixsort(int a[],int n)
{
	int max=getmax(a,n);
	for(int pos=1;max/pos>0;pos*=10)
	countingsort(a,n,pos);
}
int main()
{
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements into the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	radixsort(a,n);
	printf("after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
