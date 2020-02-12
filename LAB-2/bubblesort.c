#include<stdio.h>
#include<time.h>

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void bubblesort()
{
	int arr[100],i,j,n,temp;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i < n-1 ; i++)
	{
		for(j=0 ; j < n-i-1 ; j++)
		{
			if (arr[j] > arr[j+1]) 
      		{
        		swap(&arr[j],&arr[j+1]);
        	}
        }
	}
	printf("The sorted array is");
	for(i=0 ; i<n ; i++)
	{
		printf("%d -> ",arr[i]);
	}
}
		
int main()
{
	clock_t start,end; 
    start = clock(); 
    bubblesort(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("bubblesort() took %f seconds to execute \n", time_taken); 
    return 0; 
}
