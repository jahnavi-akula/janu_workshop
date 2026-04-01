#include<stdio.h>
int binarySearchIterative(int arr[],int n,int key)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (arr[mid]==key)
		return mid;
		else if(key<arr[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}
int main()
{
	int n,key,i,result;
	printf("enter no:of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d sorted elements(ascending order):\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter key to search:");
	scanf("%d",&key);
	result=binarySearchIterative(arr,n,key);
	if(result!=-1)
	printf("element found at position index:%d\n",result);
	else
	printf("element not found:\n");
	return 0;
}
