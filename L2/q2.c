#include<stdio.h>
int main()
{
    int n1;
    int n;
    printf("Enter the first year=");
    scanf("%d",&n);

     printf("Enter the Second year=");
    scanf("%d",&n1);

       
        int counter=0;
         int array[counter];
    for (int  i = n; i <=n1; i++)
    {
        if (i%2==0)
        {
             array[counter]=i;
             counter++;
        }

        
      
    }

    for (int i = 0; i <=counter; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}