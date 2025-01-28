#include<stdio.h>
int main()
{
    int num,p,sum;
    printf("Enter number of transactions");
    scanf("%d",&num);
    int transactions[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&transactions[i]);
    }
    printf("Enter the value of p:");
    scanf("%d",&p);
    for (int i = 0; i < num; i++)
    {
        sum+=transactions[i];
    }
    
}