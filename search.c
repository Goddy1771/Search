#include<stdio.h>
int main()
{
    int a[4]={12,28,30,15};
    int flag=0;
    int n=4;
    int item=28;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Search successful\n ");
    }
    else 
    {
        printf("Item not found\n ");
    }
    getch(); 
}