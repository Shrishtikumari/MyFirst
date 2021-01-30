/*
Name : Shrishti Kumari

   Description:To demonstrate a program to convert user supplied compact matrix to its sparse matrix.

Algorithm:
      
         Algorithm description: This algorithm is about that how we convert user supplied compact matrix to its sparse form.
                
                Globally declared variable:i,j
                Input Varaibles:compact_matrix[50][3],n
                Output Variables:sparse_matrix[50][50]
                
    1.Start
    2.Declare compact_matrix[50][3],rows,col,n,sparse_matrix[50][50]
    3.Display "Enter no of rows do u want in compact_matrix:"
    4.Read n
    5.Display "*****While writing consider following:******"
    6.Display "• Element [0][0] of compact_matrix =no of rows in sparse_matrix"
    7.Display "• Element [0][1] of compact_matrix =no of column in sparse_matrix"
    8.Display "• Element [0][2] of compact_matrix =no of non-zero value in sparse_matrix"
    9.Display "And other element will decide row-index,col-index,and value"
   10.read_compact_matrix(compact_matrix,n) function call to read and display following information by applying all
      the certain operations that were given into it.
   11.initializing_sparse_matrix(sparse_matrix,compact_matrix,rows,col) function call to arrange and initialize 
     following information by applying all the certain operations that were given into it.
   12.[Initialize] rows=compact_matrix[0][0]
   13.[Initialize] col=compact_matrix[0][1]
   14.Display "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"
   15.Display "SPARSE MATRIX:"
   16.Set i to 0
   17.if i>rows then go to step 26
   18.Set j to 0
   19.if j>col then go to step 17
   20.Display sparse_matrix[i][j]
   21.Set j to j+1
   22.Go to step 19 
   23.Display a line
   24.Set i to i+1
   25.Go to step 17
   26.Stop
   
*/ 

#include<stdio.h>
int i,j;//Globally declaring variable

//Defining function call to read and display compact_matrix
void read_compact_matrix(int (*compact_matrix)[3],int n)
{	 	  	 	  	 	   	        	 	
    printf("\nEnter %d rows and 3 column elements of compact_matrix:\n",n);
    
    //Reading compact_matrix    
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&compact_matrix[i][j]);
        }
    }
    
    printf("\nCOMPACT_MATRIX:\n");
    printf("\nRID \t CID \t VALUE\n");//RID-row index; CID-column index; VALUE:no of non-zero rows in comact_matrix
        
        //Displaying compact_matrix
        for(i=0;i<n;i++)
        {
            printf("%d \t %d \t %d",compact_matrix[i][0],compact_matrix[i][1],compact_matrix[i][2]);
            printf("\n");
        }
}

//Defining function call to initialize sparse_matrix
int initializing_sparse_matrix(int (*sparse_matrix)[50],int (*compact_matrix)[3],int rows,int col)
{
    rows=compact_matrix[0][0];//Initializing sparse_matrix row
    col=compact_matrix[0][1];//Initializing sparse_matrix column
    int value=compact_matrix[0][2];//Initializing no of non zero value
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            sparse_matrix[i][j]=0;//Initializing sparse_matrix to zero
        }
        printf("\n");
    }	 	  	 	  	 	   	        	 	
    
    for(i=1;i<=value;i++)
    {
        sparse_matrix[compact_matrix[i][0]][compact_matrix[i][1]]=compact_matrix[i][2];//Sparse_matrix form
    }
    
    return value;//Returning value as it is of return-type;int
}

//main function
int main()
{
   int compact_matrix[50][3],rows,col,n,sparse_matrix[50][50];
   
   //Reading no of rows in compact_matrix
   printf("Enter no of rows u want in compact_matrix:\n");
   scanf("%d",&n);
   
   //User requirement will be fulfilled under this condition
   printf("\n*****While writing consider following:******\n");
   printf("\n• Element [0][0] of compact_matrix =no of rows in sparse_matrix\n");
   printf("• Element [0][1] of compact_matrix =no of column in sparse_matrix\n");
   printf("• Element [0][2] of compact_matrix =no of non-zero value in sparse_matrix\n");
   printf("• And other element will decide row-index,col-index,and value\n");
   
   read_compact_matrix(compact_matrix,n);//Function call to read and dislay compact_matrix
   initializing_sparse_matrix(sparse_matrix,compact_matrix,rows,col);//Function call to initialize and prform oerations that were asked
   
   rows=compact_matrix[0][0];//Initializing sparse_matrix rows
   col=compact_matrix[0][1];//Initializing sparse_matrix column
   
   printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");//Given to make user easy that what he want from input
   printf("SPARSE MATRIX:\n");
   
   //Displaying sparse_matrix in matrix form
   for(i=0;i<rows;i++)
   {	 	  	 	  	 	   	        	 	
       for(j=0;j<col;j++)
       {
           printf("%d ",sparse_matrix[i][j]);
       }
       printf("\n");
   }
   return 0;   
}
