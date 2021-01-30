/*
Name:Shrishti Kumari
Program Description:To demonstrate a program to implement following operation of Circular Queue (represented using an array on integers):
                    1. Enqueue
                    2. Dequeue
                    3. Display
Date:18/09/2020

Algorithm:

        Algoritm Description:This algorithm is all about operation of Circular Queue 1.Enqueue 2.Dequeue 3.Display.
        
        Globally declared Variable:front=-1, rear=-1
        Input Variables:SIZE,choice,n,circular_queue[30]
        Output Variables:circular_queue[30]
        
    1.Start
    2.Declare  circular_queue[30],i,j,n,choice,SIZE=0,t
    3.Display "Enter Size of a queue array:"
    4.Read SIZE
    5.Check while(1) otherwise go to step 6.
       5.1 Display "*************************************************************"
       5.2 Display "MENU"
       5.3 Display "1.To Enqueue."
       5.4 Display "2.To Dequeue."
       5.5 Display "3.To Display."
       5.6 Display "4.To Exit."
       5.7 Display "Enter your choice:"
       5.7 Read choice
       5.8 Construct  switch(choice)
          5.8.1 case 1:
               1.1 Calling function circular_Enqueue(n,circular_queue,SIZE) to perform all the operations that were asked in it.
               1.2 break

          5.8.2 case 2:
               2.1 Calling function dequeue(circular_queue,SIZE) to perform all the operations that were asked in it.
               2.2 break
          
          5.8.3 case 3:
                3.1 Calling function display(i,circular_queue,SIZE) to perform all the operations that were asked in it.
                3.3 break

          5.8.4 case 4:
                4.1 Calling function Display "Exiting." to perform all the operations that were asked in it.
                4.2 exit(0)

          5.8.5 default:
                5.1 Display "You have entered wrong choice."
                5.2 Display "**If you want to contine press 1 if not then press 0:"
                5.3 Read t
                5.4 Display a line
                5.5 check if(t==0) otherwise continue
                  5.5.1 exit(0)
    6.Stop              
*/

#include <stdio.h>//Header file
#include <stdlib.h>//Header file for exit

int front=-1;//Globally declared variable
int rear=-1;//Globally declared variable

//Defining function circular_Enqueue(n,circular_queue[],SIZE) to perform all the operation to enqueue element.
void circular_Enqueue(int n,int circular_queue[],int SIZE)
{	 	  	 	  	 	   	        	 	
    if(front==(rear+1)%SIZE)//Checking is it full or not.
    {
        printf("Queue if full.\n");
    }
    
    else
    {
        printf("Enter element to enqueue:");
        scanf("%d",&n);//Reading n
        
        if(front==-1)
        {
            front=0;//Initialize
            rear=0;//Initialize
        }

            else
            {
                rear=(rear+1)%SIZE;
            }
            circular_queue[rear]=n;//Computing
            printf("Enqueue element is: %d\n",n);//Displaying
    }
}

//Defining function dequeue(n,circular_queue[],SIZE) to perform all the operation to dequeue element.
void dequeue(int n,int circular_queue[],int SIZE)
{
    //Checking is it empty or not
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }

       //If not empty then we perform these operations
        else
        {	 	  	 	  	 	   	        	 	
            n=circular_queue[front];
            printf("Deleted element is: %d\n",n);
    
            if(front==rear)
            {
                front=-1;//Initialize
                rear=-1;//Initialize
            }
                else
                {
                    front=(front+1)%SIZE;
                }
        }
}

//Defining function display(i,circular_queue[],SIZE) to perform all the operation to enqueue element.
void display(int i,int circular_queue[],int SIZE)
{
    if(front==-1)//If vaccant then perform these operation 
    {
        printf("Queue is vaccant, nothing to display.\n");
    }

   //If not vaccant then perform these 
    else
    {
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("Element at circular_queue[%d] is: %d\n",i+1,circular_queue[i]);//Displaying
            }
        }
        
        else
        {	 	  	 	  	 	   	        	 	
            for(i=front;i<=(SIZE-1);i++)
            {
               printf("Element at circular_queue[%d] is: %d\n",i+1,circular_queue[i]);//Displaying
            }

            for(i=0;i<=rear;i++)
            {
                printf("Element at circular_queue[%d] is: %d\n",i+1,circular_queue[i]);//Displaying
            }
        }
    }
}

//Main function
int main()
{
    int circular_queue[30],i,n,choice,t,SIZE=0;//Declaring and initializing
    printf("\nEnter size of a queue array: ");
    scanf("%d",&SIZE);//Reading 

    //Infinite loop
    while(1)
    {
        printf("\n*****************************************************\n");
        printf("MENU:\n");
        printf("1.To Enqueue.\n");
        printf("2.To Dequeue.\n");
        printf("3.To Display.\n");
        printf("4.To Exit.\n");

        printf("\nEnter your choice:");
        scanf("%d",&choice);//Reading choice

        //Constructing switch case
        switch(choice)
        {	 	  	 	  	 	   	        	 	
            case 1:
                circular_Enqueue(n,circular_queue,SIZE);//Calling function to perform operations that were asked in it.
                break;//terminate out of the loop
    
            case 2:
                dequeue(n,circular_queue,SIZE);//Calling function to perform operations that were asked in it.
                break;//terminate out of the loop
    
            case 3:
                display(i,circular_queue,SIZE);//Calling function to perform operations that were asked in it.
                break;//terminate out of the loop
    
            case 4:
                printf("Exiting!!!\n");
                exit(0);//terminate out of the code
    
            default:
                printf("You have entered wrong choice.\n");
                printf("Tf you want to continue press 1,if not then press 0: ");
                scanf("%d",&t);//Reading choice
                if(t==0)
                {
                    exit(0);//terminate out of the code
                }
        }
    }
    return 0;//As return type is int.
 }
	 	  	 	  	 	   	        	 	
