
/*
     Name:Shrishti Kumari
     Description:To demonstrate a program to implement a menu driven program to perform push,pop,peek,display.
     Algorithm:
                Algorithm Description: This algorithm is about how we make a menu driven program to implement push, pop, display, peek functions.
                
                Globally declared  and initialized Variable: SIZE 10,arr[SIZE], top=-1
                Input Variables:choice,n
                Output Variables:func1(), func2()

    1.Start
    2.Declare choice,n 
    3.Display "****************************************"
    4.Set while(1) then go to step 4
    5.Display "MENU:"
    6.Display "1.Want to Push element."
    7.Display "2.Want to Pop element."
    8.Display "3.Want to Display element."
    9.Display "4.Want to Peek element."
   10.Display "5.Want to exit from loop.""
   11.Display "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"
   12.Display "Enter your choice:"
   13.Read choice
   14.Construct switch(choice)
   15.1:Case 1: 
      15.1.1: Display "Enter the no to push:""
      15.1.2: Read n
      15.1.3: push(n)
      15.1.4 break;
    15.2:Case 2:
      15.2.1:pop()
      15.2.2:break;
    15.3:Case 3:
      15.3.1:display()
      15.3.2:break;
    15.4:Case 4:
      15.4.1:peek()
      15.4.2:break;
    15.5:Case 5:
      15.5.1:return 0;
      15.5.2:break;
    15.6:default:
      15.6.1:Display "Your input is not valid kindly enter another option."
      
    16.Stop 
     
*/
#include<stdio.h>//Header file
#define SIZE 10//Declaration

//Globally declared Variable
int arr[SIZE];
int top=-1;

//Defining push function
void PUSH(int n)
{	 	  	 	  	 	   	        	 	
    if(top==SIZE-1)
    {
        printf("\n•Stack Overflow.\n");//If stack is full then this statement will print
        
    }
    else
    {
        top++;//Incrementing top
        arr[top]=n;//Then initializing
        printf("\n•The pushed element is %d.\n",n);//This will show pushed element.
    }
}

//Defining pop function
void POP()
{
    
    if(top==-1)
    {
        printf("\n•Stack Underflow.\n");//If it is vaccant
        
    }
    else
    {
        printf("\n•Popped element is %d.\n",arr[top]);//This will show popped element at index top
        top--;//Decrementing top
    }
}

//Defining display function
void DISPLAY()
{
    int i;//Declaring 
    if(top==-1)
    {
        printf("\n•No elements were present in stack list.\n");//if it  is vaccant
    }	 	  	 	  	 	   	        	 	
    else
    {
        printf("\n•Elements in the Stack are:\n");
    
                for(i=top;i>=0;i--)
                {
                    printf("%d ",arr[i]);//To display all the element in the stack
                }
                printf("\n");
    }
}

//To check true or false
void PEEK()
{
    if(top==-1)
    {
        printf("\n•The stack is empty.\n");//This displays when there is no element in the stack
    }
    else
    {
        printf("\n•Top element of the stack is %d.\n",arr[top]);//If topmost element is present
    }
}



 //main function
int main()
{
    int choice,n;//Declaring
    
    //Infinite loop if true
    while(1)
    {
        printf("\n**************************************\n");//This is to show differences
        //Menu driven program options
        printf("MENU: \n");
        printf("1.Want to Push element. \n");//Displaying To push
        printf("2.Want to Pop element. \n");//Displaying To pop
        printf("3.Want to Display element. \n");//Displaying To display
        printf("4.Want to Peek element. \n");//Displaying To peek
        printf("5.Want to exit from loop.\n");//Displaying To exit
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");//This is printed to show difference
        
        printf("Enter your choice:\n");//Your choice
        scanf("%d",&choice);//Reading choice for switch case
            
            //Switching case for the following operations
            switch(choice)
            {	 	  	 	  	 	   	        	 	
                case 1:
                    printf("Enter the no to push:\n");
                    scanf("%d",&n);//Reading element to push
                    PUSH(n);//Calling function to push element
                    break;//Terminating out from the loop
                    
                case 2:
                    POP();//Calling function to pop topmost element in the stack
                    break;//Terminating out from the loop
                    
                case 3:
                    DISPLAY();//Calling function to display elements in the stack
                    break;//Terminating out from the loop
                    
                case 4:
                    PEEK();//Calling function to peek elements in the stack ...it wil display topmost element
                    break;//Terminating out from the loop
                    
                case 5:
                    return 0;//Exit out
                    break;//Terminating out from the loop
                    
                default://Other case
                    printf("->Your input is not valid kindly enter another option.\n");
                    
        
            }
    }
    return 0;
}	 	  	 	  	 	   	        	 	
