
/*
    Description: To demonstrate a program to convert user supplied sparse matrix to its compact form.

Algorithm:
           Algorithm description:This algorithm is about that how we convert user supplied sparse_matrix to compact_matrix.
           
           Globally declared Variable:i,j
           Input Variables:sparse_matrix[50][50],n,m
                        n-no of rows of sparse_matrix
                        m-no of column of sparse_matrix
                        
           Output Variables:compact_matrix[50][3]
             
             RID-Row index
             CID-Column index
             Value-no of non-zero value in matrix
             
    1.Start
    2.Declare and initialize sparse_matrix[50][50],n,m,value=0,compact_matrix[50][3]
    3.Display "Enter no of rows:"
    4.Read n
    5.Display "Enter no of column"
    6.Read m
    7.Display "Enter n rows and m column element:"
    8.Set i to 0
    9.if i>n then it will go to step 17
   10.Set j to 0
   11.if j>m then it will go to step 9
   12.Read sparse_matrix[i][j]
   13.Set j to j+1
   14.Go to step 11
   15.Set i to i+1
   16.Go to step 9
   17.Calling function display_sparse_matrix(sparse_matrix,n,m) and it will implement all the operations that were defined
       in that function.
   18.Calling function  arranging_matrix(sparse_matrix,compact_matrix,n,m) and it will implement all the operations that
       were defined in that function and it will return some value as it if of return-type:int.
   19.Initialize value=compact_matrix[0][2]
   20.Display "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"
   21.Display "COMPACT MATRIX:"
   22.Display "RID CID VALUE"
   23.Set i to 0
   24.if i>n then go to step 28
   25.Display "compact_matrix[i][0],compact_matrix[i][1],compact_matrix[i][2]"
   26.Set i to i+1
   27.Go to step 24
   28.Stop

*/

#include<stdio.h>//Header file

#define row 50
int i ,j;//Globally declaring

void display_sparse_matrix(int (*sparse_matrix)[50],int n,int m)//Defining function
{	 	  	 	  	 	   	        	 	
    //Displaying sparse matrix
    printf("\nSPARSE MATRIX:\n");
      
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",sparse_matrix[i][j]);//Space after %d  will let matrix to display in matrix form
            }
            printf("\n");
        }
}

//Defining function to to convert sparse to compact matrix
int arranging_matrix(int (*sparse_matrix)[50],int (*compact_matrix)[3],int n,int m)
{
    int value=0;//Initializing and declaring
     
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(sparse_matrix[i][j]!=0)//Checking the condition to find total no of values in the matrix i.e, non zero
                {
                    value++;
                }
        }
    }
     
    compact_matrix[0][0]=n;//Initializing [0][0] element to no of rows;
    compact_matrix[0][1]=m;//Initializing [0][1] element to no of column;
    compact_matrix[0][2]=value;//Initializing [0][2] element to no of non-zero element in the matrix;
    
    int k=1;
      
      //Arrangement of matrix to compact form
        for(i=0;i<n;i++)
        {	 	  	 	  	 	   	        	 	
            for(j=0;j<m;j++)
            {
                if(sparse_matrix[i][j]!=0)
                {
                    //Initializing
                    compact_matrix[k][0]=i;
                    compact_matrix[k][1]=j;
                    compact_matrix[k][2]=sparse_matrix[i][j];
                    k++;//Incrementing
                }
            }
        }
    return value;//Returning the value as it is of return-type int
   
}

int main()
{
    int sparse_matrix[row][row],n,m,value=0,compact_matrix[row][3];
   
   //Reading no of rows
    printf("Enter no of rows:\n");
    scanf("%d",&n);
   
     //Reading no of column 
    printf("Enter no of column:\n");
    scanf("%d",&m);
    
     //Reading elements of 2-D array
    printf("Enter %d rows and %d column element:\n",n,m);
      
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&sparse_matrix[i][j]);
            }	 	  	 	  	 	   	        	 	
        }
    
     display_sparse_matrix(sparse_matrix,n,m);//Function call is occuring here
        arranging_matrix(sparse_matrix,compact_matrix,n,m);//Function call
    
    value=compact_matrix[0][2];//Initaializing it
    
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");//This is given to make it arrange in manner-wise
    printf("COMPACT MATRIX:\n");
    printf("\nRID \t CID \t VALUE\n");
       
        for(i=0;i<value+1;i++)
        {
            //Displaying compact_matrix
            printf("%d \t %d \t %d",compact_matrix[i][0],compact_matrix[i][1],compact_matrix[i][2]);
             printf("\n");
        }
        
     return 0;
}
