#include<stdio.h>

int main()
{
    int arr[5],i;
    printf("Enter 5 number \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    int last = arr[4];
    
    for ( i = 4; i >= 1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;

    for ( i = 0; i < 5 ; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    
    return 0;
}
