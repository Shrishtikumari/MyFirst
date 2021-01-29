/*
 Name:Shrishti Kumari
 Registration no:201900131
 Date:11/09/2020
 Description:To demonstrate a program to convert infix expression to its postfix form and evaluate that postfix expression.
 
 Algorithm:
 
   Algorithm description:This algorithm is all about how we implement a program to convert infix expression to its postfix 
                         form and evaluate that postfix expression.
                         
   Globally declared and initialized variables: top=-1,stack[SIZE]
   Input_variables: inflix_exp
   Output Variables: postfix_exp,n
   
   1.Start
   2.Declare infix_exp[SIZE],postfix_exp[SIZE],n
   3.Display "****************************************"
   4.Display "Enter infix expression in any forms:"
   5.Display "By Using following options..."
   6.Display "1.Letters"
   7.Display "2.Digits"
   8.Display "3.Symbols"
   9.Display "*******************************************"
  10.Display "ENTER:"
  11.Read infix_exp
  12.Calling function to scan infix expression from left to right and convert infix to postfix expression.
  13.infix(infix_exp,postfix_exp)
    13.1 After declaring values check while(infix_exp[i]!='\0')
    13.2 Scan the infix expression from left to right.
    13.3 if the scanned character is an operand ,put it in the postfix expression.
    13.4 Else if the scanned character is an '(', push it to the stack.
    13.5 Else if the scanned character is an ')' ,pop the stack and put it into the postfix exp i.e,output until a'(' is encountered ,and discard both the parenthesis.
    13.6 Else if the scanned operator is '+','-','*','%','/','^' then
       13.6.1 If the priority of the scanned operator is greater than the priority of the operator in the stack ,then push the element.
       13.6.2 Else,pop all the operators from the stack which are greater and equal in priority that that of the scanned oprator.
    13.7 else 
       13.7.1 Display "Wrong expression." and then terminate out from all the loops.
    
    13.8 increase index and go to step 13.1
    13.9 check while(top!=-1) ptherwise 14
       13.9.1 postfix_exp[j++]=pop();
       13.9.2 postfix_exp[i]='\0';
    13.10 Display postfix expression
  14 n=evaluation(postfix_exp) calling function for eveluation
    14.1 it will scan postfix expession from left to right
    14.2 check while(postfix_exp[i]!='\0') otherwise 14.3
      14.2.1 if the scanned element is alphabet operand then it will read all the operand value and then perform further operations.
      14.2.2 Else if the scanned element is digit it perfom push operation,i.e push(postfix_exp[i]-'0') wher '0'=48
      14.2.3 Else if the scanned elements were '+','-','*','/','^','%' then it will pop out two operands one by one and perform switch case operation
             and implement switch case according to their cases.
      14.2.4 push the element after every else-if condition 
      14.2.4 Set i to i+1 and go to step 14.2
  15.Display n
  16.Stop
 
*/

#include <stdio.h>//Header file
#include<ctype.h>//Header file for isalnum and isdigit
#include<stdlib.h>//Header file for exit
#include<math.h>
#define SIZE 20//Declared

int top=-1;//Declared and initialized
char stack[SIZE];

//Defining function push
void push(char symbol)
{	 	  	 	  	 	   	        	 	
    if(top==(SIZE-1))
    {
        printf("Stack overflow");//When true
        exit(1);
    }
         else
        {
            top++;//incrementing top
            stack[top]=symbol;//When false
        }
}

//Defining function pop
char pop()
{
   if(top==-1)
    {
       return -1;//When true
    }
        else
        {
            return stack[top--];//When false
        }
}

//Defining function priority(op) to express function according to their order
int priority(char op)
{
    if(op=='^')
    {
        return 3;
    }
        else if(op=='/' || op=='*'||op=='%')
        {
            return 2;
        }	 	  	 	  	 	   	        	 	
                else if(op=='+' || op=='-')
                {
                    return 1;
                }
                    else
                    {
                        return 0;//When some other symbols were there
                    }
}

//Defing function tro convert infix to postfix expression
void infix(char infix_exp[],char postfix_exp[SIZE])
{
    int i=0,j=0; //Initialized 0 because top=-1
    char x,symbol;

  while(infix_exp[i]!='\0')
    {
        char symbol=infix_exp[i];//Declared and initialized
        
        if(isalnum(symbol))//If array position at such index is alphabets
        {
            postfix_exp[j]=symbol;//In new array
            j++;
        }
                else if(symbol=='(')
                {
                   push(symbol);//Into the stack
                }

         else if(symbol==')')
          {
            while((x=pop())!='(')//Pop till opening bracket doesn't get encountered and then push element into postfix_exp
             {
                 postfix_exp[j++]=x;
             }	 	  	 	  	 	   	        	 	
          }
          
                else if(symbol=='+' || symbol=='-' || symbol=='*' || symbol== '/'||symbol=='^'||symbol=='%')
                {
                    while(priority(stack[top])>=priority(symbol))//Calling function priority to check symbols priority
                        postfix_exp[j++]=pop();
                         push(symbol);//After every operation symbol will be pushed in postfix_exp
                }
        else
       {
           printf("Wrong expression.\n");//When wrong expressions were taken
           exit(0);//Terminate out of the code or every loop                                                              
       }
       i++;//Incrementing index value

    }
    
    while(top!=-1)//Checking
    {
      postfix_exp[j++]=pop();
      postfix_exp[i]='\0';
    }
  
  printf("postfix:%s\n",postfix_exp);//Displaying postfix_exp after evaluation
}

//Defining funcTion to perform evaluation process
char evaluation(char postfix_exp[])
{
    int i=0, op1,op2,z,result;//Declared

    while(postfix_exp[i]!='\0')
        {
            if(isalpha(postfix_exp[i]))//If alphabets was then it ask each letters value
            {
                getchar();
                printf("\nEnter the value of %c:\n",postfix_exp[i]);
                scanf("%c",&postfix_exp[i]);//Reading
                push(postfix_exp[i]-'0');//'0'=48 
            }	 	  	 	  	 	   	        	 	
                else if(isdigit(postfix_exp[i]))//If numbers were there in the expression
                {
                    push(postfix_exp[i]-'0');
                }

                    else if(postfix_exp[i]=='+' || postfix_exp[i]=='-' || postfix_exp[i]=='*'|| postfix_exp[i]=='/' || postfix_exp[i]=='^' ||postfix_exp[i]=='%')
                    {
                            op1=pop();//Poping element from the stack i.e,topmost element
                            op2=pop();//Poping element from the stack i.e,topmost element
                            switch(postfix_exp[i])
                            {
                            case '+':
                                    z=op2+op1; 
                                    break;//Terminating out from the loop
                            case '-':
                                    z=op2-op1;
                                    break;//Terminating out from the loop
                            case '*':
                                    z=op2*op1;
                                    break;//Terminating out from the loop
                            case '/':
                                    z=op2/op1;
                                    break;//Terminating out from the loop
                            case '%':
                                    z=op2%op1;
                                    break;//Terminating out from the loop
                            case '^':
                                    z=pow(op2,op1);
                                    break;
                            }
                            push(z);//Pushing element into the stack
                    }
        i++;
       }
    result=pop();//Popping out last element from the stack and putting it into postfix_exp
    return result;//As return type is int

}	 	  	 	  	 	   	        	 	

//Mmain function
int main()
{
    char infix_exp[SIZE],postfix_exp[SIZE];//Declaring
    int n;//Declaring
    
   printf("\n****************************************\n");
   printf("Enter infix expression in any forms:\n");
   printf("By Using following options...\n");
   printf("1.Letters\n");
   printf("2.Digits\n");
   printf("3.Symbols\n");
   printf("*******************************************\n\n");
   printf("ENTER:");
   scanf("%s",infix_exp);//Reading char value
   infix(infix_exp,postfix_exp);//Calling function to perform all the operations asked in it.
   
   n=evaluation(postfix_exp);//n=value that return from evaluation(postfix_exp) function
   printf("\nPostfix evaluation value:%d",n);//Displaying n value
   return 0;//As return type is int
}
