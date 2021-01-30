

/*
    Description: To demonstrate a program to implement a program to Insert element at the beginning, Insert element at the end, .
                 insert at any specified position, Deletion from beginning ,Deletion from end , Deletion from any position,
                 Display the list,Searching of the element.
    Algorithm:

           Algorithm Description:This algorithm is all about how to implement a program to Insert element at the beginning, Insert element at the end
                                 insert at any specified position, Deletion from beginning ,Deletion from end , Deletion from any position,
                                 Display the list,Searching of the element.

           Globally Declared Variable:*head, *ptr
           Input Variables: n,choice,t
           Output Variable: Functions were giving the output.

      1.Start
      2.In main function
      3.Declaring n,count=0,choice,t
      4.Computing head=NULL
      5.Displaying "************************LINKED LIST***************************"
      6.Constructing infinite loop
      7.while(1) and performing operations
      8.Display "**********************************************************"
      9.Display "----------------------------------------------------------"
     10.Display "MENU"
     11.Display "1.To insert element at beginning."
     12.Display "2.To insert element at end."
     13.Display "3.To insert element at any specified position."
     14.Display "4.To delete element from beginning."
     15.Display "5.To delete element from end."
     16.Display "6.To delete element from any specified position."
     17.Display "7.To display."
     18.Display "8.To search element."
     19.Display "9.To exit."
     20.Display "-----------------------------------------------------------"
     21.Display "***********************************************************"
     22.Display "Enter your choice:"
     23.Reading choice
     24.Constructing switch case according to user choice
     25.switch(choice)
        25.1 case 1:
                1.1 Display "Enter element to insert at beginning."
                1.2 Reading n
                1.3 Calling function to perform all the insertion at beginning operations that were asked in it.
                1.4 insert_beginning(n)
                1.5 incrementing count by 1
                1.6 break

        25.2  case 2:
                2.1 Display "Enter element to insert at end."
                2.2 Reading n
                2.3 Calling function to perform all the insertion at end operations that were asked in it.
                2.4 insert_end(n)
                2.5 incrementing count by 1
                2.6 break

        25.3  case 3:
                3.1 Display "Enter the element value that you want to insert at any specified position:"
                3.2 Reading n
                3.3 Calling function to perform all the insertion at any specified position operations that were asked in it.
                3.4 insert_anyPos(n)
                3.5 incrementing count by 1
                3.6 break

        25.4 case 4:
                4.1 Calling function to perform all the operations that were asked in it.
                4.2 delete_beginning()
                     1.Declare node *temp
                     2.Calling function checkhead() to perform further operation.
                     3.if(checkhead()) will return if it is true otherwise go to next step
                     4.Initialize temp=head
                     5.Display "ptr->data is deleted from the beginning."
                     6.Check until while(temp->link!=head) otherwise go to step 8.
                     7.temp=temp->link
                     8.head=head->link
                     9.free(ptr) i.e releasing ptr
                    10. temp->link=head
                4.3 decrementing top by 1
                4.4 break

        25.5 case 5:
                5.1 Calling function to perform all the operations that were asked in it.
                5.2 delete_end()
                    1.Calling function if(checkhead()) is true then it return otherwise go to step 2.
                    2.Check while(ptr->link->link!=head) Until it becomes head otherwise go to step 4.
                    3.ptr=ptr->link
                    4.Display "ptr->link->data is deleted from the end."
                    5.Releasing free(ptr->link)
                    6.Compute ptr->link=head
                5.3 decrementing top by 1
                5.4 break

        25.6 case 6:
                6.1 Calling function to perform all the operations that were asked in it.
                6.2 delete_anyPos()
                    1.Declare i,position
                    2.Declare node *temp
                    3.Check if(head==NULL) otherwise go to step 5.
                    4.Display "List is Empty."
                    5.Display "Enter the position of the element which you want to be deleted:"
                    6.Read position
                    7.Check if(position==0) otherwise go to step 12.
                    8.ptr=head
                    9.head=head->link
                    10.Display "ptr->data is deleted from the position."
                    11.Release free(ptr)
                    12.ptr=head
                    13.Set i to 0
                    14.if i>position then go to step 6.3.
                    15.temp=ptr
                    16.ptr=ptr->link
                    17.Check if(ptr==NULL) otherwise go to step 20
                    18.Display "position is not found."
                    19.temp->link =ptr->link
                    20.Display "ptr->data is deleted from the position .\n"
                    21.Releasing free(ptr)
                    22.Set i to i+1
                    23.Go to step 14
                6.3 decrementing top by 1
                6.4 break

        25.7 case 7:
                7.1 Calling function to perform all the display operations that were asked in it.
                7.2 display_list()
                7.3 break

        25.8 case 8:
                8.1 Display "Enter any specified element which you want to search:"
                8.2 Reading n
                8.3 Calling function to perform all the operations that were asked in it.
                8.4 search(n,count)
                8.5 break

        25.9 case 4:
                9.1 Display "EXITING!!"
                9.2 exit(0)

        25.10 default:
                10.1 Display "You have choosen wrong choice."
                10.2 Display "Do you want to continue (If YES press 1/If NO press 0):"
                10.3 Reading t according to user choice
                10.4 if(t==0) then it will terminate out of the program otherwise continue.

    26.Stop

  */


#include<stdio.h>//Header file
#include<stdlib.h>//Header file

//Constructing struct for allocation of memory
struct node
{	 	  	 	  	 	   	        	 	
    int data;
    struct node *link;
};

struct node *head=NULL,*ptr;//Globally declared

//Definning struct node create for operations that were asked in it.
struct node* create(int n)
{
    struct node*temp;//Declared
    temp=(struct node*)malloc(sizeof(struct node));//Allocating address memory
    temp->data=n;
    temp->link=NULL;//Creating next link to be NULL
    return temp;
}

//Definning function insert_beginning to perform all the operations that were asked in it.
void insert_beginning(int n)
{
    struct node *temp;//Declared
    ptr=create(n);//calling function to perform all the operations that were asked in it.

    if(head==NULL)//If it is null
    {
        head=ptr;
        ptr->link=head;
    }

    else//If not null
    {
       temp=head;//Computing temp as head

       while(temp->link!=head)
       {
          temp=temp->link;
       }	 	  	 	  	 	   	        	 	
           ptr->link=head;
           head=ptr;//Computing
           temp->link=head;//Computing
    }
    printf("%d is inserted at beginning.\n",n);//Displaying
}

//Definning function insert_end to perform all the operations that were asked in it.
void insert_end(int n)
{
    struct node *temp;//Declared
    ptr=create(n);//Calling to allocate memory

    if(head==NULL)//If NULL
    {
        head=ptr;
        head->link=head;
    }

    else//If not NULL
    {
        temp=head;//Computing

        while(temp->link!=head)
        {
            temp=temp->link;
        }
        temp->link=ptr;//Computing
        ptr->link=head;//Computing
    }
    printf("%d is inserted at end.\n",n);//Displaying element at the end
}

//Definning function insert_anyPos to perform all the operations that were asked in it.
void insert_anyPos(int n)
{	 	  	 	  	 	   	        	 	
   struct node *temp;
   int i,position;//Declared
   temp=create(n);//calling function to perform all the operations

    if(temp==NULL)//if true
    {
        printf("\n Out of Memory Space:");
        return;
    }

    else//if false
     {
        printf("\nEnter the position for the new element to be inserted:");
        scanf("%d",&position);//Reading position
        temp->link=NULL;

        if(position==0)//If position value given by user is 0
        {
            temp->link=head;
            head=temp;
        }

        else//If position value given by user is not 0
       {
          for(i=0,ptr=head;i<position-1;i++)
           {
                ptr=ptr->link;
                   if(ptr==NULL)
                {
                    printf("\n%d Position not founded.\n",position);//checking founded or not
                    
                }
           }
         temp->link =ptr->link ;
         ptr->link=temp;
       }	 	  	 	  	 	   	        	 	
    }
    printf("%d is inserted at position %d------(pos=pos+1, as index starts from 0).\n",n,position+1);//Displaying
}

//Definning function checkhead to perform all the operations that were asked in it.
int checkhead()
{
    if(head==NULL)//if NULL
    {
        printf("\nDeletion is not possible.\n");
        return 1;//returning true
    }
    ptr=head;
    if(head->link==NULL)
    {
        printf("\n%d is deleted.\n",ptr->data);
        head=NULL;
        free(ptr);//releasing ptr
        return 1;
    }
    return 0;
}

//Definning function delete_beginning to perform all the deletion from biginning operations.
void delete_beginning()
{
    struct node *temp;
    if(checkhead())//Calling function
        return;

    else
    {
        temp=head;
        printf("\n%d is deleted from the beginning.\n",ptr->data);

        while(temp->link!=head)//it will run until it becomes head
        {	 	  	 	  	 	   	        	 	
            temp=temp->link;
        }
        head=head->link;
        free(ptr);//releasing ptr
        temp->link=head;
    }
}

//Definning function delete_beginning to perform all the deletion from end operations.
void delete_end()
{
    if(checkhead())//Calling function
        return;

    else
    {
        while(ptr->link->link!=head)//Until it becomes head
        {
            ptr=ptr->link;
        }

        printf("\n%d is deleted from the end.\n",ptr->link->data);
        free(ptr->link);//releasing it
        ptr->link=head;//changing directions
    }
}

//Definning function delete_beginning to perform all the deletion from any specified position operations.
void delete_anyPos()
{
    int i,position;//declared
    struct node *temp;//declared

    if(head==NULL)//If is it NULL
    {
        printf("\nList is Empty.\n");

    }	 	  	 	  	 	   	        	 	
    else//If it is not NULL
    {
        printf("\nEnter the position of the element which you want to be deleted:");
        scanf("%d",&position);//Reading position of the element which user want to be deleted

        if(position==0)//If given position is 0
        {
            ptr=head;//Computing
            head=head->link ;
            printf("%d is deleted from the position %d.\n",ptr->data,position);
            free(ptr);//releasing
        }
         else//If given position is not 0
         {
            ptr=head;

            for(i=0;i<position;i++)
                {
                    temp=ptr;
                    ptr=ptr->link;//initialized
                    if(ptr==NULL)
                    {
                        printf("\n%d position is not found.\n",position);
                        return;//returning after printing
                    }
                }
            temp->link =ptr->link;
            printf("%d is deleted from the position %d.\n",ptr->data,position );//displaying
            free(ptr);//releasing
         }
    }
}


//Definning function display_list to perform all the display operations that were asked in it.
void display_list()
{	 	  	 	  	 	   	        	 	
    if(head==NULL)//If NULL
    {
        printf("List is Empty: nothing to play.\n");

    }

    else//If not NULL
    {
        printf("\nElement in the list are as follows:\n");
        ptr=head;//Computing

        while(ptr->link!=head)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;//Computing
        }

        printf("%d\t",ptr->data);
    }
}

//Definning function search(n,count) to perform all the searching operations that were asked in it.
int search(int n,int count)
{
  struct node *temp;
  int i;//Declared

   if(head==NULL)//If it is NULL
    {
        printf("List is vaccant can't be searched.\n");
        return 0;
    }

    else//If it is not NULL
    {
        temp=head;
        for(i=1;i<=count;i++)//Count is no of operations done by user in the program
        {	 	  	 	  	 	   	        	 	
            if(n==temp->data)
            {
                printf("%d is founded in the list at position %d.\n",n,i);
                return count;//returning
            }
            temp=temp->link;
        }
        printf("%d is not founded in the list.\n",n);
        return count;
    }
}

//Main function
int main()
{

    int n,choice,t,s;//Declared
    int count=0;
    head=NULL;//Compute
    printf("************************LINKED LIST***************************\n");

    //Infinite loop
    while(1)
    {
        printf("\n**********************************************************\n");
        printf("----------------------------------------------------------\n");

            printf("MENU\n");
            printf("1.To insert element at beginning.\n");
            printf("2.To insert element at end.\n");
            printf("3.To insert element at any specified position.\n");
            printf("4.To delete element from beginning.\n");
            printf("5.To delete element from end.\n");
            printf("6.To delete element from any specified position.\n");
            printf("7.To display.\n");
            printf("8.To search element.\n");
            printf("9.To exit.\n");

        printf("-----------------------------------------------------------\n");
        printf("***********************************************************\n");

        printf("\nEnter your choice:");
        scanf("%d",&choice);//Reading choice

        //Constructing switch case according to user choice
        switch(choice)
        {	 	  	 	  	 	   	        	 	

            case 1:
                 printf("\nEnter element to insert at beginning:");
                 scanf("%d",&n);//Reading element to insert at beginning.
                 insert_beginning(n);//Calling function to perform all the operations that were asked in it.
                 count++;
                 break;//Terminating out of the loop.

            case 2:
                 printf("\nEnter element to insert at end:");
                 scanf("%d",&n);//Reading element to insert at end.
                 insert_end(n);//Calling function to perform all the operations that were asked in it.
                 count++;//Incrementing
                 break;//Terminating out of the loop.

            case 3:
                 printf("\nEnter the element value that you want to insert at any specified position:");
                 scanf("%d",&n);//Reading element to insert at any specified position.
                 insert_anyPos(n);//Calling function to perform all the operations that were asked in it.
                 count++;
                 break;//Terminating out of the loop.

            case 4:

                 delete_beginning();//Calling function to perform all the operations that were asked in it.
                 count--;
                 break;//Terminating out of the loop.

            case 5:

                 delete_end();//Calling function to perform all the operations that were asked in it.
                 count--;
                 break;//Terminating out of the loop.

            case 6:

                 delete_anyPos();//Calling function to perform all the operations that were asked in it.
                 count--;
                 break;//Terminating out of the loop.


            case 7:
                 display_list();//Calling function to perform all the operations that were asked in it.
                 break;

            case 8:
                 printf("\nEnter any specified element which you want to search:");
                 scanf("%d",&n);//Reading element to search.
                 search(n,count);//Calling function to perform all the operations that were asked in it.
                 break;

            case 9:
                  printf("EXITING!!\n");
                  exit(0);//Terminating out of the program.

           default:
                 printf("You have choosen wrong choice.\n");
                 printf("Do you want to continue (If YES press 1/If NO press 0):");
                 scanf("%d",&t);//Reading user choice
                 if(t==0)
                 {	 	  	 	  	 	   	        	 	
                     exit(0);//Terminating out of the program.
                 }
        }
    }
  return 0;//As return type is int.
}

