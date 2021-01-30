
/*
    
    Description:To demonstrate a program to implement product of matrix.
    
    Algorithm:
    
     Algorithm description:This algorithm is all about that how multiplication of two matrix has been done and how to
                           put the product of that matrix in new value.
        
     Input Variables:Take array:a[100][100],b[100][100] as an input and size:m,n,s,q 
     Output Variables:c[100][100]
     
     1.Start
     2.Take array:a[100][100],b[100][100] as an input and size:m,n,s,q
     3.Declare i,j,k
     4.Display "Enter the no of rows and columns which u want in matrix A:"
     5.Read m,n
     6.Display "Enter the no of rows and columns which u want in matrix B:"
     7.Read s,q
     8.Check n==s go to step 9 otherwise go to step 54
     9.Display "Enter m rows and n column element of matrix A:"
    10.Set i to 0
    11..if i>m then go to step 19
    12.Set j to o
    13.if j>n then go to step 11
    14.Read a[i][j]
    15.Set j to j+1
    16.Go to step 13
    17.Set i to i+1
    18.Go to step 11
    19.Display "--------MATRIX A:---------"
    20.Applying loop and then print matrix A
    21.Display "Enter s rows and q column element of matrix B:"
    22.Set i to 0
    23.if i>s then go to step 31
    24.Set j to o
    25.if j>q then go to step 23
    26.Read b[i][j]
    27.Set j to j+1
    28.Go to step 25
    29.Set i to i+1
    30.Go to step 23
    31.Display "--------MATRIX B:---------"
    32.Applying loop and then print matrix B
    33.Set i to 0
    34.if i>m then go to step 41
    35.Set j to o
    36.if j>q then go to step 34
    37.Initialize c[i][j]=0
    38.Set j to j+1
    39.Go to step 36
    40.Set i to i+1
    41.Go to step 34
    42.Display "-----PRODUCT OF MATRIX C:-----"
    43.Set i to 0
    44.if i>m then go to step 53
    45.Set j to 0
    46.if j>q then go to step 44
    47.Set k to 0
    48.if k>n then go to step 46
    49.calculate c[i][j]+=a[i][k]*b[k][j]
    50.Set k to k+1 and then go to step 48
    51.Set j to j+1 and then go to step 46
    52.Set i to i+1 and then go step 44
    53.Then display matrix C
    54.Display "No of column of matrix A and no of rows in matrix B doesn't match."
    55.Stop
    
*/

#include<stdio.h>

int main()
{	 	  	 	  	 	   	        	 	
    int i,j,a[100][100],b[100][100],c[100][100],k,m,n,s,q;//Declaring integers
    
    //Reading rows and column elements
    printf("Enter the no of rows and columns which u want in matrix A:\n");
    scanf("%d %d",&m,&n);
    
    printf("Enter the no of rows and columns which u want in matrix B:\n");
    scanf("%d %d",&s,&q);
    
    //For multiplication checking the condition
    if(n==s)
   {    
       //Reading matrix A
        printf("Enter %d rows and %d column element of matrix A:\n",m,n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        //Printing matrix A
     printf("--------MATRIX A:---------\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
      
      //Reading matrix B  
      printf("Enter %d rows and %d column element of matrix B:\n",s,q);
    
      for(i=0;i<s;i++)
        {	 	  	 	  	 	   	        	 	
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
       
        //Printing matrix B
      printf("--------MATRIX B:---------\n");
        for(i=0;i<s;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
     
      //Initializing matrix c[100][100]=0  
      for(i=0;i<m;i++)
      {
          for(j=0;j<q;j++)
          {
              c[i][j]=0;
          }
      }
     
      //Multiplication process
      printf("--------PRODUCT OF MATRIX C:-------\n");
     
       for(i=0;i<m;i++)
      {
          for(j=0;j<q;j++)
          {
              for(k=0;k<n;k++)
              {
                  c[i][j]+=a[i][k]*b[k][j];
              }	 	  	 	  	 	   	        	 	
          }
      }
      
      //Printing matrix C=A*B
      for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        
   }
   
   //If multiplication condition doesn't fulfill....
   else
   {
        printf(" No of column of matrix A and no of rows in matrix B doesn't match.");
   }
}
     
