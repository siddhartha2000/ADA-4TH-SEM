import java.util.*;

import java.util.concurrent.TimeUnit;
class BubbleSort
{
    void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n-1; i++)
            for (int j = 0; j < n-i-1; j++)
                if (arr[j] > arr[j+1])
                {
                    
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
    }
 
    
    void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
 
    
    public static void bubblesort()
    {
        Scanner s1 = new Scanner(System.in);
        BubbleSort ob = new BubbleSort();
        int arr[] = {0,0,0,0,0};
        System.out.println("enter array size");
        int n = s1.nextInt();
        System.out.println("enter array elements");
        for (int i=0; i<n; i++)
            arr[i] = s1.nextInt();
        ob.bubbleSort(arr);
        System.out.println("Sorted array");
        ob.printArray(arr);
    }
    
    public static void main(String[] args) 
    {
    	 long startTime = System.nanoTime();
 
   			bubblesort();
 
    	 long endTime = System.nanoTime();
 
    	long durationInNano = (endTime - startTime);  
     
   		 long durationInMillis = TimeUnit.NANOSECONDS.toMillis(durationInNano);
     
   	 	System.out.println(durationInNano);
    	System.out.println(durationInMillis);
    	long timeElapsed = durationInMillis/1000;
    	System.out.println("The execution time in seconds is" +  timeElapsed);
 
	}
}
