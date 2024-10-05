#include<stdio.h>
int main()
{
    int n,i,j,t;
    
    printf("enter the number of items:");
    scanf("%d",&n);
    float price[n];
    printf("enter the prices\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&price[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(price[j]>price[j+1])
            {
                t=price[j];
                price[j]=price[j+1];
                price[j+1]=t;
            }

            
            printf("%d\n",price[j]);
        }
      
    }
     
}  
/*#include <stdio.h>
int main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        j++;
    printf("%d",j);
    }
}*/