#include<stdio.h>
void sortArraybyParity(int *nums,int numSize)
{
    for (int i=0;i<numSize;i++)
    {
        if(nums[i]%2==0)
        {
            printf("%d\t",nums[i]);
            
        }
    }
    for (int i=0;i<numSize;i++)
    {
        if(nums[i]%2!=0)
        {
            printf("%d\t",nums[i]);
            
        }
}
 printf("\n");
}
int main()
{
    int numsize;
    printf("Enter number of tickets:");
    scanf("%d",&numsize);
    int nums[numsize];
    for(int i=0;i<numsize;i++)
    {
    scanf("%d",&nums[i]);
    }
    sortArraybyParity(nums,numsize);
}
