#include<stdio.h>
int main()
{

    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        
        scanf("%d",&array[i]);
    }
    printf("The square are=");
    for (int  i = 0; i < n; i++)
    {
       printf("%d ",array[i]*array[i]);
    }
    
    
    return 0;

}