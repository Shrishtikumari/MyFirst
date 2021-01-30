/*
Program description:To demostrate a program to implement Binary Search.
Algorithm:
   Function:sorting(int *,int ,int);  return type-int;
         search(int *,int ,int);  return type-void;

      Algorithm description:This algorithm is used to seacrch element from the list and check whwther it is present in the list or not.            

       Input Variables:i,n,s
       Output Variables:mid
       
1.Start
2.Take array:a and size:n as an input
3.Initialize flag=0
4.Display "Enter no of value do u want:"
5.Read n
6.Display "Enter n elements:"
7.Set i to 0
8.if i>n then go to step 12
9.Read a[i]
10.Set i to i+1
11.Go to step 8
12.sorting(a,n,t)
13.Then arrange  elements into ascending order type and return n
14.Dispaly elements after sorting
15.Display "Enter element to search:"
16.Read s
17.search(a,n,s)
18.Initialize low=0,high=n-1
19.while(low<=high)
20.Calculate mid
21.if s=a[i] then go to step 23
22.Go to step 20.
23.Display "Element s found at index mid+1." and go to step 25
24.Display "Element not found."
25.Stop

*/
#include <stdio.h>

int i;
int sorting(int *,int ,int);
void search(int *,int ,int);

int main()
{	 	  	 	  	 	   	        	 	
    int a[100],n,s,flag=0,t,mid;
            printf("Enter no of value do u want:\n");
            scanf("%d",&n);
    
    printf("Enter %d elements.\n",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sorting(a,n,t);//Calling function to do sorting
    
    printf("After sorting in ascending order elements are:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n");
         printf("Element to search:\n");//Searching element
         scanf("%d",&s);
         
    search(a,n,s);//Calling function to check element is there in the list or not.


    return 0;
}
//To sort the elements in ascending order type.
int sorting(int *a,int n,int t)
{
    int j;
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {	 	  	 	  	 	   	        	 	

            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    return n;
}
//check searched input is present in the list or not.
void search(int *a,int n,int s)
{
    int low=0,high,mid,flag=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(s==a[mid])
        {
            flag=1;
            break;
        }
                    else if(s>a[mid])
                     {
                        low=mid+1;
                     }
                               else if(s<a[mid])
                               {
                                   high=mid-1;
                               }
    }
    if(flag==0)
    {
        printf("Element not found.");
    }	 	  	 	  	 	   	        	 	
    else
    {
        printf("Element %d found at index %d.",s,mid+1);
    }

}
