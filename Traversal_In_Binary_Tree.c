
/*
  Name: Shrishti Kumari
  Description: To demonstrate a program to implement a BST and perform insertion, inorder, preorder, postorder operations.

  Algorithm:

       Algorithm Description: This algorithm is all about how we implement a BST and perform insertion, inorder, preorder,
                              postorder operations.

       Input Variables: choice,n,root_node,i,node_values,node,t
       Output Variables: Functions were giving the output.

    1.Start
    2.In main function
    3.Create object struct node *root
    4.Declare choice,n,root_node,i,node_values,node,t
    5.Display "=============IMPLEMENTING BINARY TREE================="
    6.Display "Enter number of nodes do you want:"
    7.Reading n
    8.Display "=>Enter root node value:"
    9.Read root_node
   10.Calling function to perform all the operations that were asked in it.
   11.root=create(root_node)
   12.for i=0 to n-1
       12.1 Display "=>Enter i+1 node:"
       12.2 Read node_values
       12.3 Calling function to perform all the operations that were asked in it.
       12.4 root= insert(root,node_values)
   13.while(1)
      1.Display "**********************************************"
      2.Display "MENU:"
      3.Display "1.Insert a node."
      4.Display "2.Inorder traversal."
      5.Display "3.Preorder traversal."
      6.Display "4.Postorder traversal."
      7.Display "5.To exit."
      8.Display "**********************************************"
      9.Display "Enter your choice:"
     10.Read choice
     11.Constructing switch case to work according to users choice
        11.1 switch(choice)
             11.1.1 case 1:
                         1.Display "=>Enter the node to insert:"
                         2.Read node
                         3.root=insert(root,node)
                         4.break

             11.1.2 case 2:
                         1.Display "Elements in Inordered way:"
                         2.Calling function to perform all the operations that were asked in it.
                         3.Inorder(root)
                            3.1 Check if(root!=NULL)
                                1.Inorder(root->left_child)
                                2.Display root->data
                                3.Inorder(root->right_child)
                         4.break

             11.1.3 case 3:
                         1.Display "Elements in Preordered way:"
                         2.Calling function to perform all the operations that were asked in it.
                         3.Preorder(root)
                           3.1 Check if (root!=NULL)
                               1.Display root->data
                               2.Preorder(root->left_child)
                               3.Preorder(root->right_child)
                         4.break

             11.1.4 case 4:
                         1.Display "Elements in Postordered way:"
                         2.Calling function to perform all the operations that were asked in it.
                         3.Postorder(root)
                           3.1 Check if (root!=NULL)
                               1. Postorder(root->left_child)
                               2. Postorder(root->right_child)
                               3.Display root->data
                         4.break

             11.1.5 case 5:
                         1.Display "EXITING!!!!"
                         2.exit(0)

             11.1.6 default:
                         1.Display "INCORRECT option choosen by you."
                         2.Display "Do you want to continue (if yes : press 1/ if no : press 0)"
                         3.Read t
                         4.Check if(t==0) otherwise continue
                           4.1 exit(0)
    14.Stop

INPUTS / OUTPUTS

=============IMPLEMENTING BINARY TREE=================

Enter number of nodes do you want:4

=>Enter root node value:7

=>Enter 1 node:2

=>Enter 2 node:8

=>Enter 3 node:1

**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 2

Elements in Inordered way:
1       2       7       8
**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 3

Elements in Preordered way:
7       2       1       8
**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 4

Elements in Postordered way:
1       2       8       7
**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 1

=>Enter the node to insert:77

**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 2

Elements in Inordered way:
1       2       7       8       77
**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 3

Elements in Preordered way:
7       2       1       8       77
**********************************************

MENU:
1.Insert a node.
2.Inorder traversal.
3.Preorder traversal.
4.Postorder traversal.
5.To exit.

**********************************************
Enter your choice: 5

EXITING!!!!

*/

#include <stdio.h>//Header file
#include<stdlib.h>

//Creating or declaring struct node.
struct node
{	 	  	 	  	 	   	        	 	
    int data;
    struct node *left_child;
    struct node *right_child;
};

//Declaring and definning to perform all the operations that were asked in it.
struct node* create(int n)
{
    struct node *newnode;//Creating node
    newnode=malloc(sizeof(struct node));//Allocating memory

    newnode->data=n;//Assigning
    newnode->left_child=NULL;
    newnode->right_child=NULL;
    return newnode;//returning
}

//Declaring and definning to perform all the insertion operations that were asked in it.
struct node* insert(struct node *root, int n)
{
    //Checking conditions
    if(root==0)
        {
            return create(n);//Calling function to perform all the operations that were asked in it.
        }
    else if(n>root->data)
        {
            root->right_child=insert(root->right_child,n);//Calling function to perform all the operations that were asked in it.
        }
    else
        {
            root->left_child=insert(root->left_child,n);
        }
    return root;//returning
}

//Declaring and definning to perform all the inorder operations that were asked in it.
void Inorder(struct node *root)
{	 	  	 	  	 	   	        	 	
    if(root!=NULL)//Until condition not satisfied
    {
        Inorder(root->left_child);//Calling function to perform all the operations that were asked in it.
        printf("%d\t", root->data);//Displaying
        Inorder(root->right_child);
    }
}

//Declaring and definning to perform all the preorder operations that were asked in it.
void Preorder(struct node* root)
{
    if (root!=NULL)
    {
      printf("%d\t",root->data);//Displaying
      Preorder(root->left_child);
      Preorder(root->right_child);//Calling function to perform all the operations that were asked in it.
    }
}

//Declaring and definning to perform all the postorder operations that were asked in it.
void Postorder(struct node* root)
{
    if (root!=NULL)
    {
      Postorder(root->left_child);//Calling function to perform all the operations that were asked in it.
      Postorder(root->right_child);
      printf("%d\t",root->data);//Displaying
    }
}

//Main function
int main()
{
    struct node *root;//Craeting object
    int choice,n,root_node,i,node_values,node,t;//Declaring

    printf("\n=============IMPLEMENTING BINARY TREE=================\n");
    printf("\nEnter number of nodes do you want:");
    scanf("%d",&n);//Reading nodes

    printf("\n=>Enter root node value:");
    scanf("%d",&root_node);
    root=create(root_node);//Calling function to perform all the operations that were asked in it.

    for(i=0;i<n-1;i++)
    {	 	  	 	  	 	   	        	 	
        printf("\n=>Enter %d node:",i+1);
        scanf("%d",&node_values);
        root= insert(root,node_values);//Insertion operations
    }

    //Infinite loop until not terminated
    while(1)
    {
        printf("\n**********************************************\n");
        printf("\nMENU:\n");
        printf("1.Insert a node.\n");
        printf("2.Inorder traversal.\n");
        printf("3.Preorder traversal.\n");
        printf("4.Postorder traversal.\n");
        printf("5.To exit.\n");
        printf("\n**********************************************\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        //Constructing switch case to work according to users choice
        switch(choice)
        {
            case 1:
                    printf("\n=>Enter the node to insert:");
                    scanf("%d",&node);
                    root=insert(root,node);//Calling function to perform all the operations that were asked in it.
                    break;//Terminating out of the loop.

            case 2:
                    printf("\nElements in Inordered way:\n");
                    Inorder(root);//Calling function to perform all the operations that were asked in it.
                    break;

            case 3:
                   printf("\nElements in Preordered way:\n");
                   Preorder(root);//Calling function to perform all the operations that were asked in it.
                   break;

            case 4:
                   printf("\nElements in Postordered way:\n");
                   Postorder(root);//Calling function to perform all the operations that were asked in it.
                   break;

            case 5:
                   printf("\nEXITING!!!!\n");
                   exit(0);//Terminating out of the program

            default:
                   printf("INCORRECT option choosen by you.\n");
                   printf("Do you want to continue (if yes : press 1/ if no : press 0)");
                   scanf("%d",&t);
                   if(t==0)
                   {	 	  	 	  	 	   	        	 	
                       exit(0);//Terminating out of the program
                   }
        }
    }
 return 0;//As return type is int.
}
