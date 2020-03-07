#include<stdio.h>
#include<time.h>

void insertionsort(int *,int start,int n);

void insert(int *,int start);

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void insertionsort(int a[],int start,int n) //sort array from start to n-1
{

    if(start>n-1)
        return ;
	
	insert(a,start);
    insertionsort(a,start+1,n);
    return;
}
void insert(int a[],int start)    
{    
    int pos;
    pos = start;
    while(pos>0 && a[pos]<a[pos-1])
    {
        swap(&a[pos],&a[pos-1]);
        pos--;
    }
}
	


void toSort()
{
    int arr[10],n,i;
	printf("\nEnter no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}

    i = 0; 
    insertionsort(arr,i,n);

    printf("\nThe sorted array is : \n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d -> ",arr[i]);
	}
}

int main()
{
	clock_t start,end; 
    start = clock(); 
    toSort(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("Insertion Sort using recursion took  %f seconds to execute \n", time_taken); 
    return 0; 
}