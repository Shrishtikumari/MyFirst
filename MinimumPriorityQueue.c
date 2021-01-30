/*
Name:Shrishti Kumari
Description:To demonstrtae a program to implement a minimum priority queue using an array.

   Algorithm:
   
       Algorithm Decription:This algorithm is all about how we implement a minimum priority queue using an array.
   
       Globally declared Variable: rear=-1, front=-1
       Input Variable:SIZE,n,choice,p
       Output Variable:queue[30], priority_queue[30]
   
   1.Start
   2.Declare queue[30],priority_queue[30],choice,n,p,t,SIZE
   3.Display "Enter size of array queue:"
   4.Read SIZE
   5.Check while(1)
       5.1 Display "-----------MINIMUM PRIORITY QUEUE------------"
       5.2 Display "Menu:"
       5.3 Display "1.To Enqueue elemement."
       5.4 Display "2.To Dequeue element."
       5.5 Display "3.To Display."
       5.6 Display "4.To Exit."
       5.7 Display "-----------------------------------------------"
       5.8 Display "Enter your choice:"
       5.9 Read choice
       5.10 Construct switch(choice) with user choice of case
            5.10.1 case 1:
                    1.1 Display "Enter element to enqueue:"
                    1.2 Read n
                    1.3 Display "Enter element's priority:"
                    1.4 Read p
                    1.5 Calling function of step 1.6 to perform all the enqueue operations including priority check and all that were asked in it.
                    1.6 enqueue(queue,priority_queue,SIZE,n,p)
                    1.7 break
            5.10.2 case 2:
                    2.1 Calling function of step 2.2 to perform all the dequeue operations that were asked in it.
                    2.2 dequeue(queue,priority_queue)
                    2.3 break
            5.10.3 case 3:
                    3.1 Calling function of step 3.2 to  display  elements with it's priorities by performing all opereations that were asked in it
                    3.2 display(queue,priority_queue)
                    3.3 break
            5.10.4 case 4:
                    4.1 exit(0) terminating out of the program
            5.10.5 default:
                    5.1 Display "You have choosen wrong input."
                    5.2 Display "If you want to continue press 1 ,if not then press 0:"
                    5.3 Read t
                    5.4 Check if(t==0) then go to step 5.4.1 otherwise continue
                        5.4.1 exit(0) terminating out of the program
                    5.5 Display a line.
   6.Stop
*/

#include <stdio.h>//Header file
#include <stdlib.h>//Header file

int rear=-1;//Globally declared variable
int front=-1;//Globally declared variable

//Definning enqueue(queue,priority_queue,SIZE,n,p) function to perform all the operations that were asked in it.
void enqueue(int queue[],int priority_queue[],int SIZE,int n,int p)
{	 	  	 	  	 	   	        	 	
    int i,j;//Declaring
    if(rear==SIZE-1)//if this is true
    {
        printf("Queue is full you can't enter.\n");
    }
    
        else if(front==-1 && rear==-1)//if this is true
        {
            rear++;//Incrementing 
            front++;//Incrementing
            queue[rear]=n;//Computing
            priority_queue[rear]=p;//Computing
        }
        
    else//otherwise
    {
        for(i=front;i<=rear;i++)
        {
            if(priority_queue[i]>p)//Checking priority
            {
                break;//Terminating out of the loop
            }
        }

        for(j=rear;j>=i;j--)
        {
            //Computing according to the priority
            queue[j+1]=queue[j];
            priority_queue[j+1]=priority_queue[j];
        }

        queue[i]=n;
        priority_queue[i]=p;
        rear++;//Incrementing
    }

}	 	  	 	  	 	   	        	 	

//Definning dequeue(queue,priority_queue) function to perform all the operations that were asked in it.
void dequeue(int queue[],int priority_queue[])
{
    if(front==-1 && rear==-1)//If it is empty
    {
        printf("Queue is empty.\n");
    }

    else//If not empty
    {
        int n;
        n=queue[front];
        printf("%d is deleted.\n",n);
        
       if(front==rear)//Checking
        {
            front=rear=-1;
            
        }
        else
        {
            front++;//incrementing
        }
    }
}

//Definning dequeue(queue,priority_queue) function to perform all the operations that were asked in it.
void display(int queue[],int priority_queue[])
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty there is nothing to display.\n");
    }
    else
    {	 	  	 	  	 	   	        	 	
        int i;//Declaring
        
        printf("Queue Elements:\n");
            for(i=front;i<=rear;i++)
            {
                printf("%d \t",queue[i]);//Displaying queue elemnets according to their prioirty
            }
            printf("\n");
        
        printf("Priority of queue elements:\n");
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",priority_queue[i]);//Displaying priority elements
            }
            printf("\n");
    }
}

//Main function
int main()
{
    int queue[30],priority_queue[30],choice,n,p,t,SIZE;//Declaring
    printf("Enter size of array queue:");
    scanf("%d",&SIZE);//Reading SIZE

    //Checking
    while(1)
    {
        printf("\n-------------MINIMUM PRIORITY QUEUE---------------\n");
        printf("Menu:\n");
        printf("1.To Enqueue elemement.\n");
        printf("2.To Dequeue element.\n");
        printf("3.To Display.\n");
        printf("4.To Exit.\n");
        printf("--------------------------------------------------\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);//Reading choice

        //Constructing switch case it will implement functions according to the users choice
        switch(choice)
        {	 	  	 	  	 	   	        	 	
            case 1:
                   printf("Enter element to enqueue:");
                   scanf("%d",&n);//Reading n
                   printf("Enter element's priority:");
                   scanf("%d",&p);//Reading p
                   enqueue(queue,priority_queue,SIZE,n,p);//Calling function to perform all he operations that were asked in it.               
                   break;//Terminating out of the loop
                   
            case 2:
                   dequeue(queue,priority_queue);//Calling function to perform all he operations that were asked in it.
                   break;//Terminating out of the loop
                   
            case 3:
                   display(queue,priority_queue);//Calling function to perform all he operations that were asked in it.
                   break;//Terminating out of the loop

            case 4:
                  exit(0);//Terminating out of the program
                  
            default:
                  printf("You have choosen wrong input.\n");
                  printf("If you want to continue press 1 ,if not then press 0:");
                  scanf("%d",&t);//Reading t according to users choice
                  if(t==0)
                  {
                      exit(0);//Terminating out of the program
                  }
                  printf("\n");
        }
    }
    return 0;//As return type is int.
}
	 	  	 	  	 	   	        	 	
