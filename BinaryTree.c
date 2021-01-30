/*
   Name: Shrishti Kumari
   Description: To demonstrate a program to implement a complete binary tree using an array and linked list as well.
                1. Take number of nodes as input.
                2. Display all nodes (with its parent, left child and right child).

   Algorithm: For main function

          Algorithm description: This algorithm is all about how we implement a complete binary tree using an array and linked list as well.
                                 1.Take number of nodes as input
                                 2. Display all nodes (with its parent, left child and right child)

          Input Variables: level[nodes],nodes, lev_values
          Output Variables: functions were giving the output.

    1.Start
    2.In main function
    3.Declare i,nodes,lev_values
	4.Declare struct node *head=NULL
    5.Display "===============COMPLETE BINARY TREE================"
    6.Display "========BINARY TREE USING ARRAY========="
	7.Display "=>Enter the number of nodes:"
	8.Read nodes
    9.Declare level[nodes]
   10.Display "=>Enter the node values according to the level:"
   11.for i<-nodes
       11.1 Read level[i]
   12.Display "Elements are as follows:"
   13.for i<-nodes
       13.1 Display level[i]
   14.Display "**************************************************"
   15.Calling function to display the list.
   16.display_arrayList(level,nodes)
       16.1 Declare left,right
	   16.2 for i<-nodes
	        1.Check if(i==0) otherwise go to step 2
               1.1 Display "Root Node==>>level[0]"
            2.Display "Parent Node==level[i]
            3.left=left_child(nodes,i)
               3.1 Calculate i<-(2*m)+1
               3.2 Check if(i<nodes && i>=0) otherwise go to step 3.3
                   1. return i
               3.3 return -1
		    4.right=right_child(nodes,i)
               4.1 Calculate i<-(2*m)+2
               4.2 Check if(i<nodes && i>=0) otherwise go to step 4.3
                   1.return i
               4.3 return -1
		    5.Check if(left==-1) otherwise go to step 6
               5.1 Display "Left Child=NA"
            6.Display "Left Child::level[left]"
            7.Check if(right==-1) otherwise go to step 8.
               7.1 Display "Right Child=NA"
            8.Display "Right Child==level[right]
   17.Display "**************************************************"
   18.Display "========BINARY TREE USING LINKED LIST========="
   19.Display "=>Enter the number of nodes:"
   20.Read nodes
   21.Display "=>Enter the node values as per the level:"
   22.for i<-nodes
	   22.1 Read lev_values
       22.2 head=insert(head,lev_values)
            1.Declare struct node *newnode
            2.Allocate memory newnode=(struct node*)malloc(sizeof(struct node))
	        3.Declare struct node *temp=head
            4.newnode->data=data
	        5.newnode->link=NULL
	        6.Check if(head==NULL) otherwise go to step 7
              6.1 head=newnode
            7.Check while(temp->link!=NULL) otherwise go to step 8.
              7.1 temp=temp->link
            8.temp->link=newnode
	        9.return head
   23.Display "**************************************************"
   24.Calling function to display the list.
   25.display_linkedList(head,nodes)
   26.Display "**************************************************"
   27.Stop

*/
#include <stdio.h>
#include <stdlib.h>

//Definning function to perform operations that were asked in it.
int left_child(int nodes,int m)
{	 	  	 	  	 	   	        	 	
	int i=(2*m)+1;//Calculating

	if(i<nodes && i>=0)//If condition fulfill
    {
       return i;
    }
	else//else part
    {
      return -1;
    }
}

//Definning function to perform operations that were asked in it.
int right_child(int nodes,int m)
{

   int i=(2*m)+2;//Calculating
   if(i<nodes && i>=0)//If condition fulfill
     {
         return i;
     }
	else//else part
    {
        return -1;
    }
}

//Definning function to display array list.
void display_arrayList(int level[],int nodes)
{
    //Declare
	int left,right;
	for(int i=0;i<nodes;i++)//Until condition fulfill
	{
		if(i==0)//If it is -1
        {	 	  	 	  	 	   	        	 	
           printf("Root Node==>>%d",level[0]);
        }
        else
        {
           printf("Parent Node==%d",level[i]);
        }

        left=left_child(nodes,i);//Calling function to check left child
		right=right_child(nodes,i);//Calling function to check right child

		if(left==-1)//If it is -1
        {
           printf("\tLeft Child=NA");
        }
		else
        {
            printf("\tLeft Child::%d",level[left]);
        }


		if(right==-1)//If it is -1
        {
            printf("\tRight Child=NA\n");
        }
		else
        {
            printf("\tRight Child==%d\n",level[right]);
        }
    }
}

//Definning struct part or declaring too
struct node
{
    //Data members
	int data;
	struct node *link;
};

//Definning function to perform operations that were asked in it.
struct node *insert(struct node *head,int data)
{	 	  	 	  	 	   	        	 	
	struct node *newnode;//Declare
	newnode=(struct node*)malloc(sizeof(struct node));//Allocating memory
	struct node *temp=head;//Declare

	newnode->data=data;
	newnode->link=NULL;
	if(head==NULL)//If list is NULL
	{
	    head=newnode;//Assign
	}
	else//If not NULL
	{
		while(temp->link!=NULL)
        {
            temp=temp->link;//Compute
        }
        temp->link=newnode;
	}
    return head;//returning
}

//Definning function to display linked list.
void display_linkedList(struct node *head,int nodes)
{
    //Declaring
	struct node *temp = head;
	int left,right,j,i;

	for(int i=0;i<nodes;i++)//Until condition fulfill
	{
		temp=head;//Initialized
		if(i==0)//If it is -1
			{
			    printf("Root Node==>>%d",head->data);
			}
		else
		{	 	  	 	  	 	   	        	 	
			for(j=0;j<i;j++)//Until condition fulfill
				{
				    temp=temp->link;//Computing
				}
            printf("Parent Node==%d",temp->data);
		}

		left=left_child(nodes,i);//Calling function to check left child
		right=right_child(nodes,i);//Calling function to check right child
        temp=head;//Initialized

		if(left==-1)//If it is -1
        {
            printf("\tLeft Child=NA");
        }
		else
		{
			for(j=0;j<left;j++)//Until condition fulfill
            {
                temp=temp->link;//Computing
            }

			printf("\tLeft Child==%d",temp->data);
        }
        temp=head;//Declare and compute

		if(right==-1)//If it is -1
        {
            printf("\tRight Child=NA\n");
        }
		else
		{
			for(j=0; j<right; j++)//Until condition fulfill
            {
                temp=temp->link;//Computing
            }	 	  	 	  	 	   	        	 	
            printf("\tRight Child==%d\n",temp->data);
        }
	}
}

//Main function
int main()
{
	int i,nodes,lev_values;//Declare
	struct node *head=NULL;//Declare and initialized
    printf("\n==============COMPLETE BINARY TREE================\n");

    printf("\n\n========BINARY TREE USING ARRAY=========\n");
	printf("\n=>Enter the number of nodes:\n");
	scanf("%d",&nodes);//Read nodes

	int level[nodes];//Declare

    printf("=>Enter the node values according to the level:\n");
    for(i=0; i<nodes; i++)//Until condition fulfill
    {
        scanf("%d",&level[i]);//Read level[i]
    }

    printf("\nElements are as follows:\n");
    for(i=0; i<nodes; i++)//Until condition fulfill
    {
       printf("%d\t",level[i]);//Display level[i]
    }

	printf("\n\n**************************************************\n\n");
    display_arrayList(level,nodes);//Calling function to display the array list.
    printf("\n**************************************************\n");

    printf("\n\n========BINARY TREE USING LINKED LIST=========\n");

	printf("\n=>Enter the number of nodes:\n");
	scanf("%d",&nodes);//Reading nodes

    printf("=>Enter the node values as per the level:\n");
    for(i=0; i<nodes; i++)//Until condition fulfill
	{	 	  	 	  	 	   	        	 	
		scanf("%d",&lev_values);//Reading lev_values
		head=insert(head,lev_values);//Calling for insertion in the list.
	}

	printf("\n\n**************************************************\n\n");
	display_linkedList(head,nodes);//Calling function to display the array list.
    printf("\n**************************************************\n");
    return 0;//As return type is int.
}
