
#include<stdio.h>
void main()
{
    int arr[100], n,i,large,sec_large;
    printf("\nenter number");
    scanf("%d",&n);
    printf("\nenter elements  :");
    for(i=0;i<n;i++)
        scanf("%d ",&arr[i]);
    large=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        large=arr[i];
    }
    sec_large=arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i]!=large)
        {
            if(arr[i]>sec_large)
                sec_large=arr[i];
        }
    }
    printf("\nfirst large number : %d \n second  large number is  :%d",large,sec_large);
}
