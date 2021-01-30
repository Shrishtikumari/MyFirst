/*
Program Description:Demonstrate a program to implement linear search. 

Algorithm: 
      Algorithm:search(int *,int,int);  TYPE:void
      Algorithm description: This algorithm is about searching an element from the list and make user to know if it is present or not in the list.
                             If it is present then at which index or position.
      
           Input variables:i,n,s
          
           
                                                 
1.Start
2.Take an array:a as an input and size:n.
3.Declare s,flag and initialize flag=0.
4.Display "Enter no of element do u want".
5.Read n.
6.Display "Enter n elements in the list".
7.Set i to 0
8.if i>n then go to step 12 
9.Read a[i]
10.Set i to i+1
11.Go to step 8
12.Display "Enter value to search.".
13.Read s
14.search(a,n,s)
15.Set i to 0
16.if i>n then go to step 21
17.if s=a[i] then go to step 20
18.Set i to i+1
19.Go to step 16
20.Display "Element found at index i" and go to step 22
21.Display "Not found"
22.Stop
*/
#include<stdio.h>

void search(int *,int,int);
int i,j;

int main()
{	 	  	 	  	 	   	        	 	
    int a[100],flag=0,s,n;
    
       printf("Enter no of element do u want.\n");//Reading size from the use
       scanf("%d",&n);
       
         printf("Enter %d element in the list:\n",n);
         for(i=0;i<n;i++)
         {
             
             scanf("%d",&a[i]);
             
         }
        //Element to search
        printf("Enter value to search:\n");
        scanf("%d",&s);
        search(a,n,s);
         
    return 0;
}

void search(int *a,int n,int s)
{
    int flag=0;
    //Checking process
         for(i=0;i<n;i++)
         {
             if(s==a[i])
             {
                 flag=1;
                 break;
             }
         }
         
    if(flag==0)
    {
      printf("Not founded.");  
    }	 	  	 	  	 	   	        	 	
        else
           {
               printf("Element found at index %d.",i+1);
               
           }
}
