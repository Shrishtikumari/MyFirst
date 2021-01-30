/*

Name:Shrishti Kumari 
Program Description:To demonstrate a program to implement following operation of linear Queue (represented using an array on integers):
                    1. Enqueue
                    2. Dequeue
                    3. Display

Algorithm:

        Algoritm Description:This algorithm is all about operation of linear Queue 1.Enqueue 2.Dequeue 3.Display.
        
        Globally declared Variable:front=0,rear=0
        Input Variables:SIZE,choice,n,queue[30]
        Output Variables:queue[30]
        
    1.Start
    2.Declare  queue[30],i,j,n,choice,SIZE=0,t
    3.Display "Enter Size of queue array:"
    4.Read SIZE
    5. Check while(1) otherwise go to step 6.
       5.1 Display "*************************************************************"
       5.2 Display "MENU"
       5.3 Display "1.To Enqueue element."
       5.4 Display "2.To Dequeue element."
       5.5 Display "3.To Display element."
       5.6 Display "4.To exit."
       5.7 Display "Enter your choice:"
       5.7 Read choice
       5.8 Construct  switch(choice)
          5.8.1 case 1:
               1.1 Calling function Enqueue(n,queue,SIZE) to perform all the operations that were asked in it.
               1.2 break

          5.8.2 case 2:
               2.1 Calling function dequeue(queue,SIZE) to perform all the operations that were asked in it.
               2.2 break
          
          5.8.3 case 3:
                3.1 Calling function display(queue,SIZE) to perform all the operations that were asked in it.
                3.3 break

          5.8.4 case 4:
                4.1 Calling function Display "Exiting." to perform all the operations that were asked in it.
                4.2 exit(0)

          5.8.5 default
                5.1 Display "You have entered wrong choice."
                5.2 Display "**If you want to contine press 1 if not then press 0:"
                5.3 Read t
                5.4 Display a line
                5.5 check if(t==0) otherwise continue
                  5.5.1 exit(0)
    6.Stop              
*/

#include <stdio.h>//Header file
#include<stdlib.h>//Header file

int front=0;//Globally declared variable
int rear=0;//Globally declared variable

//Defining function IsEmpty(queue,SIZE) to perform all the operation that were asked in it.
int IsEmpty(int queue[],int SIZE)
{	 	  	 	  	 	   	        	 	
    if((front==0 && rear==0) || front>=rear)
    {
        return 1;//if true
    }
    else
    {
        return 0;//if false
    }
}

//Defining function IsFull(SIZE) to perform all the operation that were asked in it.
int IsFull(int SIZE)
{
    if(SIZE==rear)
    {
        return 1;//if true
    }
    else
    {
        return 0;//if false
    }
}

//Defining function Enqueue(n,queue,SIZE) to perform all the operation that were asked in it.
void Enqueue(int n,int queue[],int SIZE)
{
    if(IsFull(SIZE)==1)//if full
    {
        printf("Queue is Full.\n");
    }
    
        else//if not full perform these operations
        {
            printf("Enter element to enqueue:");
            scanf("%d",&n);//Reading 
            queue[rear]=n;//computing
            printf("Enqueue element is:%d\n",n);
            rear++;//incrementing
        }	 	  	 	  	 	   	        	 	
}

//Defining function dequeue(queue,SIZE) to perform all the operation that were asked in it.
void dequeue(int queue[],int SIZE)
{
    if(IsEmpty(queue,SIZE)==1)
    {
        printf("Queue is Empty.\n");//if empty

    }
    
    else//if not empty perform these operations
    {
        int n;
        n=queue[front];//computing
        printf("%d is deleted.\n",n);
        front++;//incrementing
    }
}

//Defining function display(queue,SIZE) to perform all the operation that were asked in it.
void display(int queue[],int SIZE)
{
    if(IsEmpty(queue,SIZE)!=1)
    {
        for(int i=front;i<=rear-1;i++)
        {
            printf("Element at a[%d]: %d\n",i+1,queue[i]);//Displaying
        }
    }
    else
    {
        printf("Queue is vaccant nothing to display.\n");//if vaccant
    }
}

//main function
int main()
{	 	  	 	  	 	   	        	 	
    int queue[30],i,j,n,choice,SIZE=0,t;//Declaring and initializing
    printf("\nEnter Size of queue array:");
    scanf("%d",&SIZE);//Reading SIZE

      //Infinite loop
        while(1)
      {
        printf("\n*************************************************************\n");
        printf("MENU\n");
        printf("1.To Enqueue element.\n");
        printf("2.To Dequeue element.\n");
        printf("3.To Display element.\n");
        printf("4.To exit.\n");
        
        printf("\nEnter your choice:");
        scanf("%d",&choice);//Reading
        
        //Constructing switch case
        switch(choice)
        {
          case 1:
               Enqueue(n,queue,SIZE);//Calling function to perform all the operations asked in it.
               break;//terminate out of the loop

          case 2:
               dequeue(queue,SIZE);//Calling function to perform all the operations asked in it.
               break;//terminate out of the loop

          case 3:
               display(queue,SIZE);//Calling function to perform all the operations asked in it.
               break;//terminate out of the loop

          case 4:
               printf("Exiting.\n");
               exit(0);//terminate out of the loop

          default:
               printf("You have entered wrong choice.");
               printf("\n**If you want to contine press 1 if not then press 0:");
               scanf("%d",&t);//Reading t
               printf("\n");
                if(t==0)
                {	 	  	 	  	 	   	        	 	
                    exit(0);//terminate out of the code
                }
       }
    }

  return 0;//As return type is int
}


