int quicksort(int a[],int i,int j)
{
	int pos;
	if(i<j)
	{
		pos=partition(a,i,j);
		quicksort(a,i,pos-1);
		quicksort(a,pos+1,j);
	}
}int quicksort(int a[],int i,int j)
{
	int pos;
	if(i<j)
	{
		pos=partition(a,i,j);
		quicksort(a,i,pos-1);
		quicksort(a,pos+1,j);
	}
}
}
}
