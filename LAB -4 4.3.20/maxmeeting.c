#include<stdio.h>
#include<time.h>


void insertionsort(int *, int n);

void meeting()
{
	int si[100],fi[100],i,j,n,count,s;
	printf("Enter no. of meetings");
	scanf("%d",&n);
	printf("Enter the start times of all the  meetings");
	for(i=0 ; i < n ; i++)
	{
		printf("  ");
		scanf("%d",&si[i]);
	}
	printf("Enter the end time of all the meetings");
	for(i=0 ; i < n ; i++)
	{
		printf("  ");
		scanf("%d",&fi[i]);
	}
	
	insertionsort(fi,n);
	printf("Meeting (%d,%d) is selected  ",si[0],fi[0]);
	s = fi[0];
	count = 1;
	for(j=1 ; j<n ; j++)
	{
		if(si[j] >= s && si[j]<fi[j])
		{
			printf("Meeting (%d,%d) is selected  \n  ",si[j],fi[j]);
			count++;
			s = fi[j];
		}
	}		
	printf("\nThe max no. of meetings is : %d",count);
}
void insertionsort(int fi[],int n)
{
	int i,j,item;
	

	for(i=1 ; i < n ; i++)
	{
		item = fi[i];
		j = i-1;
		while(j>=0 && fi[j]>item)
		{
			fi[j+1] = fi[j]; 
      		j = j-1;
        }	
        		
        fi[j+1] = item;	
        	
	}
	
}
		
int main()
{
	clock_t start,end; 
    start = clock(); 
    meeting(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("\nmeeting() took %f seconds to execute \n", time_taken); 
    return 0; 
}
