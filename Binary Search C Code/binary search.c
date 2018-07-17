#include<stdio.h>
int BinarySearch(int arr[], int size, int item);
int main()
{
	int i,j,temp,size,item,array[size],in,dex;
	printf("Enter the number of elements\t");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter the array[%d]\t",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if (array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Element in sort order\n");
	for(i=0;i<size;i++)
	printf("\t%d",array[i]);
	
	printf("\nEnter the item to be searched ");
	scanf("%d",&item);
	
	in=BinarySearch(array,size,item);
	dex=in+1;
		
	if(in==-1)
		printf("%d not found in array\n",item);
	else
		printf("%d found at position %d\n",item,dex);
	
	return 0;
}
int BinarySearch(int array[], int size, int item)
{
	int low=0, up=size-1, mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(item > array[mid])
			low=mid+1;
		else if(item<array[mid])
			up=mid-1;
		else
			return mid;
	}
	return -1;
}
