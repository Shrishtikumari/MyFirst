
/*
Algorithm

1.Take size:n and array:arr as an input
2.Initialize sum=0
3.for(i=0 to n-1)
  sum+=arr[i]
4.DISplay sum
*/
#include<stdio.h>
int main()
{
    int n,arr[50],i,sum=0;
    printf("Enter value for the size:\n");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d\n",sum);

}
