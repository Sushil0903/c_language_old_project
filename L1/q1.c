#include<stdio.h>
int main()
{
    int n;
    int n1;
    printf("Enter array A's size=");
    scanf("%d",&n);
     int a[n];
    
    printf("Enter the elements");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }


     int b[n1];
     printf("Enter array B's size=");
     scanf("%d",&n1);
     
    printf("Enter the elements");
    for (int  i = 0; i < n1; i++)
    {
        scanf("%d",&b[i]);

    }
    int n3;
    if(n<n1)
    {
        n3=n1;

    }
    else{
        n3=n;
    }
     printf("Aray c is=");
     for (int  i = 0; i < n3; i++)
    {
      printf("%d",a[i]+b[i]);
        
    }

   return 0;

}