

/*
    Name: Shrishti Kumari
    Description: To demonstrate a program to implement a doubly linked list to Insert element at the beginning, Insert element at the end, .
                 insert at any specified position, Deletion from beginning ,Deletion from end , Deletion from any position,
                 Display the list.
    Algorithm:

           Algorithm Description: This algorithm is all about how to implement a doubly linked list Insert element at the beginning,
                                 Insert element at the end ,insert at any specified position, Deletion from beginning ,Deletion from end , Deletion
                                 from any position, Display the list.

           Globally Declared and initialized Variable:*head
           Input Variables: n,choice,t,pos
           Output Variable: Functions were giving the output.

      1.Start
      2.In main function
      3.Declaring n,choice,t,pos
      4.Constructing infinite loop
      5.while(1) and performing operations
      6.Display "*****************DOUBLY LINKED LIST********************"
      7.Display "==========================================================="
      8.Display "MENU"
      9.Display "1.To insert element at beginning."
     10.Display "2.To insert element at end."
     11.Display "3.To insert element at any specified position."
     12.Display "4.To delete element from beginning."
     13.Display "5.To delete element from end."
     14.Display "6.To delete element from any specified position."
     15.Display "7.To display."
     16.Display "8.To exit."
     17.Display "==========================================================="
     18.Display "Enter your choice:"
     19.Reading choice
     20.Constructing switch case according to user choice
     21.switch(choice)
        21.1 case 1:
                1.1 Display "=>Enter element to insert at beginning:"
                1.2 Reading n
                1.3 Calling function to perform all the insertion at beginning operations that were asked in it.
                1.4 insert_beginning(n)
                    1.struct node *newnode
                    2.newnode= (struct node *)malloc(sizeof(struct node)) allocating memory.
                    3.Check if(head==NULL) otherwise go to step 4.
                       3.1 newnode->link = NULL
                       3.2 newnode->prev=NULL
                       3.3 newnode->data=n
                       3.4 head=newnode
                     4.Else part
                       4.1 newnode->data=n
                       4.2 newnode->prev=NULL
                       4.3 newnode->link = head
                       4.4 head->prev=newnode
                       4.5 head=newnode
                     5.Display "n is inserted at the beginning."
               1.5 break

        21.2  case 2:
                2.1 Display "=>Enter element to insert at end:"
                2.2 Reading n
                2.3 Calling function to perform all the insertion at end operations that were asked in it.
                2.4 insert_end(n)
                    1.struct node *newnode,*temp
                    2.newnode=(struct node*)malloc(sizeof(struct node)) allocating memory
                    3.newnode->data=n
                    4.Check if(head== NULL) otherwise go to step 5
                       4.1 newnode->link = NULL
                       4.2 newnode->prev = NULL
                       4.3 head=newnode
                    5.Else part
                       5.1 temp=head
                       5.2 Check until while(temp->link!=NULL) otherwise go to step 5.3
                            5.2.1 temp = temp->link
                       5.3 temp->link = newnode
                       5.4 newnode->prev=temp
                       5.5 newnode->link = NULL
                    6.Display "n is inserted at end."
               2.5 break

        21.3  case 3:
                3.1 Display "=>Enter element to insert at any specified position:"
                3.2 Read n
                3.3 Display "=>Enter position for the element:"
                3.4 Reading pos
                3.5 Calling function to perform all the insertion at any specified position operations that were asked in it.
                3.6 insert_anyPos(n,pos)
                3.7 break

        21.4 case 4:
                4.1 Calling function to perform all the deletion at beginning operations that were asked in it.
                4.2 delete_beginning()
                    1.Declare struct node *temp
                    2.Check if(head== NULL) otherwise go to step 3.
                       2.1 Display "Can't be deleted:: list is empty."
                    3.Check else if(head->link==NULL) otherwise go to step 4
                       3.1 head=NULL
                       3.2 free(head)
                       3.3 Display "Deletion done from beginning."
                    4.Else part
                       4.1 temp=head
                       4.2 head=head->link
                       4.3 head->prev=NULL
                       4.4 free(temp)
                       4.5 Display "Deletion done from beginning."
              4.3 break

        21.5 case 5:
                5.1 Calling function to perform all the deletion at end operations that were asked in it.
                5.2 delete_end()
                    1.struct node *temp;
                    2.Check if(head==NULL) otherwise go to step 3
                       2.1 Display "Can't be deleted:: list is empty."
                    3.Check else if(head->link==NULL) otherwise go to step 4.
                       3.1 head=NULL
                       3.2 free(head)
                       3.3 Display "Deletion done from end."
                    4.Else part
                       4.1 temp=head
                       4.2 Check until while(temp->link!=NULL) otherwise go to step 4.3
                            4.2.1 temp=temp->link
                       4.3 temp->prev->link=NULL
                       4.4 free(temp)
                       4.5 Display "Deletion done from end."
                5.3 break

        21.6 case 6:
                6.1 Display "=>Enter any specified position for the deletion:"
                6.2 Read n
                6.3 Calling function to perform all the deletion at any specified position operations that were asked in it.
                6.4 delete_anyPos(n)
                6.5 break

        21.7 case 7:
                7.1 Calling function to perform all the display operations that were asked in it.
                7.2 display()
                    1.Check if(head==NULL) otherwise go to step 2.
                    2.Display "Nothing to display::List is vaccant."
                    3.Declare struct node *temp
                    4.temp=head
                    5.Display "Elements are:"
                    6.Check while(temp->link!=head) otherwise go to step 7.3
                       6.1 Display "temp->data "
                       6.2 temp=temp->link
                7.3 break

        21.8 case 8:
                8.1 Display "EXITING!!!"
                8.2 exit(0)

        21.9 default:
                9.1 Display "You have entered wrong choice."
                9.2 Display "=>Do you want to continue (If YES press 1/If NO press 0):"
                9.3 Reading t according to user choice
                9.4 if(t==0) then it will terminate out of the program otherwise continue.

    22.Stop

INPUTS / OUTPUTS

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:1

=>Enter element to insert at beginning:2
2 is inserted at the beginning.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:1

=>Enter element to insert at beginning:3
3 is inserted at the beginning.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:2

=>Enter element to insert at end:6
6 is inserted at end.
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================
Enter your choice user:7
3       2       6
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:1

=>Enter element to insert at beginning:8
8 is inserted at the beginning.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:3

=>Enter element to insert at any specified position:33

=>Enter position for the element:2

33 is inserted at position 2.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:7
8       33      3       2       6
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:4

Deletion done from beginning.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:7
33      3       2       6
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:6

=>Enter any specified position for the deletion:2
Deletion done at position 2.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:7
33      2       6
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:5

Deletion done from end.

****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:7
33      2
****************DOUBLY LINKED LIST******************

=============================================================

MENU:
1.To insert at beginning.
2.To insert at end.
3.To insert at any specified position.
4.To delete from beginning.
5.To delete from end.
6.To delete from any specified position.
7.To display.
8.To exit.

=============================================================

Enter your choice user:8

EXITING!!

*/
#include<stdio.h>//Header file
#include<stdlib.h>//Header file

//Constructing struct node 
struct node
{	 	  	 	  	 	   	        	 	
    //Data members
    int data;
    struct node *link;
    struct node *prev;
};

struct node *head;//Globally declared variable

//Definning function to perform all the operations for insertion at beginning.
void insert_beginning(int n)
{
    struct node *newnode;//Declared
    newnode= (struct node *)malloc(sizeof(struct node));//Allocating memory
       if(head==NULL)//If it is NULL
       {
           newnode->link = NULL;
           newnode->prev=NULL;
           newnode->data=n;
           head=newnode;//Assigning
       }
       else//If it is not NULL
       {
           //Assigning and computing process were performing here.
           newnode->data=n;
           newnode->prev=NULL;
           newnode->link = head;
           head->prev=newnode;
           head=newnode;
       }
       printf("%d is inserted at the beginning.\n",n);//Displaying

}

//Definning function to perform all the operations for insertion at end.
void insert_end(int n)
{	 	  	 	  	 	   	        	 	
    struct node *newnode,*temp;//Declared
    newnode=(struct node*)malloc(sizeof(struct node));//Allocating memory
        newnode->data=n;

        if(head== NULL)//If it is NULL
        {
            newnode->link = NULL;
            newnode->prev = NULL;
            head=newnode;//Assigning
        }
       else//If it is not NULL
       {
            temp=head;
             while(temp->link!=NULL)//Checking until condition not fulfilled
              {
                  temp = temp->link;
              }

            temp->link = newnode;
            newnode->prev=temp;
            newnode->link = NULL;
       }
       printf("%d is inserted at end.",n);//Displaying
 }

 //Definning function to perform all the operations for insertion at any specified position.
 void insert_anyPos(int n,int pos)
 {
    struct node *newnode,*temp;//Declared
    int i;//Declared
    newnode=(struct node *)malloc(sizeof(struct node));//Allocating memory
    if(head==NULL)//If it is NULL
    {
        printf("\nCan't insert:: list is empty.\n");
    }

    else//If it is not NULL
    {	 	  	 	  	 	   	        	 	
        temp=head;
        for(i=1;i<pos-1 && temp!=NULL;i++)//Checking
        {
            temp=temp->link;
        }
        if(pos==1)//if position is 1
        {
            insert_beginning(n);//Calling function to insert at beginning.
            printf("=>%d is inserted at position %d.\n",n,pos);
        }
        else if(temp!=NULL)//If not NULL
        {
            //Computing and assigning
           newnode->data=n;
           newnode->link=temp->link;
           newnode->prev=temp;

           if(temp->link!=NULL)//Checking condition
           {
               temp->link->prev=newnode;
           }
           temp->link=newnode;
           printf("\n%d is inserted at position %d.\n",n,pos);//Displaying
        }
        else//If that option doesn't exist.
        {
            printf("Invalid option:: position is empty.\n");
        }
    }
 }

//Definning function to perform all the operations for deletion at beginning.
void delete_beginning()
{
    struct node *temp;//Declared
    if(head== NULL)//If it is NULL
    {	 	  	 	  	 	   	        	 	
        printf("Can't be deleted:: list is empty.\n");
    }

        else if(head->link==NULL)
        {
            head=NULL;//Computing
            free(head);//Deleting
            printf("\nDeletion done from beginning.\n");
        }

    else
    {
        temp=head;//Assigning
        head=head->link;
        head->prev=NULL;
        free(temp);//Deleting
        printf("\nDeletion done from beginning.\n");
    }
}

//Definning function to perform all the operations for deletion at end.
void delete_end()
{
    struct node *temp;//Declared
    if(head==NULL)//If NULL
    {
        printf("Can't be deleted:: list is empty.\n");
    }
    else if(head->link==NULL)
    {
        head=NULL;
        free(head);//Deleting 
        printf("\nDeletion done from end.\n");
    }
    else
    {	 	  	 	  	 	   	        	 	
        temp=head;//Assigning
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->prev->link=NULL;
        free(temp);//Deleting
        printf("\nDeletion done from end.\n");
    }
}

//Definning function to perform all the operations for deletion at any specified position.
void delete_anyPos(int pos)
{
    struct node *temp;//Declaring
    int i;//Declared
    if(head==NULL)
    {
        printf("Can't delete::list is vaccant.\n");
    }
    else
    {
        temp=head;//Compute
        
        //Checking operation were performing here.
        for(i=1;i<pos && temp!=NULL;i++)
        {
            temp=temp->link;
        }
        if(pos==1)
        {
            delete_beginning();//Calling function to delete at beginning.
            printf("Deletion done at position %d.\n",pos);
        }
        else if(pos<1)//If position is negative
        {	 	  	 	  	 	   	        	 	
            printf("Invalid position.\n");
        }
    
        else if(temp!=NULL)//In other cases
            {
                temp->prev->link=temp->link;
                temp->link->prev=temp->prev;
                free(temp);//Deleting
                printf("Deletion done at position %d.\n",pos);
            }
            else
            {
                printf("\nPosition which you have entered is vaccant.\n ");//If that place is vaccant
            }
    }
    }

//Definning function to perform all the operations for display.
void display()
{
    struct node *temp;//Declared
    if(head==NULL)//If NULL
    {
        printf("Nothing to display::list is vaccant.\n");
    }
    else//If not NULL
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);//Displaying
            temp=temp->link;
        }
    }
}

int main()
{	 	  	 	  	 	   	        	 	
   int choice,t,pos,n;//Declared
    //Constructing
    while(1)
    {
        printf("\n****************DOUBLY LINKED LIST******************\n");
        printf("\n=============================================================\n");
        printf("\nMENU:\n");
        printf("1.To insert at beginning.\n");
        printf("2.To insert at end.\n");
        printf("3.To insert at any specified position.\n");
        printf("4.To delete from beginning.\n");
        printf("5.To delete from end.\n");
        printf("6.To delete from any specified position.\n");
        printf("7.To display.\n");
        printf("8.To exit.\n");
        printf("\n=============================================================\n");
        printf("\nEnter your choice user:");
        scanf("%d",&choice);//Reading user choice

        //Constructing switch case which will work according to user
        switch(choice)
        {
          case 1:
                printf("\n=>Enter element to insert at beginning:");
                scanf("%d",&n);//Reading
                insert_beginning(n);//Calling function to perform all the operations that were asked in it.
                break;//Terminating out of the loop

          case 2:
                printf("\n=>Enter element to insert at end:");
                scanf("%d",&n);
                insert_end(n);//Calling function to perform all the operations that were asked in it.
                break;//Terminating out of the loop

          case 3:
                printf("\n=>Enter element to insert at any specified position:");
                scanf("%d",&n);
                printf("\n=>Enter position for the element:");
                scanf("%d",&pos);
                insert_anyPos(n,pos);//Calling function to perform all the operations that were asked in it.
                break;//Terminating out of the loop

          case 4:
               delete_beginning();//Calling function to perform all the operations that were asked in it.
               break;//Terminating out of the loop

          case 5:
               delete_end();//Calling function to perform all the operations that were asked in it.
               break;//Terminating out of the loop

          case 6:
               printf("\n=>Enter any specified position for the deletion:");
               scanf("%d",&n);
               delete_anyPos(n);//Calling function to perform all the operations that were asked in it.
               break;//Terminating out of the loop

          case 7:
               display();//Calling function to perform all the operations that were asked in it.
               break;//Terminating out of the loop

          case 8:
               printf("\nEXITING!!\n");
               exit(0);//Terminating out of the program
               break;

          default:
               printf("You have enetered wrong choice.\n");
               printf("=>Do you want to continue (if YES press 1/ if NO press 0:");
               scanf("%d",&t);//Reading users choice
               if(t==0)
               {	 	  	 	  	 	   	        	 	
                   exit(0);//Terminating out of the program
               }
        }
    }
    return 0;
}
