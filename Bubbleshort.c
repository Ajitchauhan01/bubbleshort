#include<stdio.h>
#include<conio.h>
int a[],i=0,j=0,k=0,c=0,n=0;
Short(int a[],int n)
{
    for(i=0;i<n-1;i++)
    {
        k=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
                k++;
            }k++;
        }
        if(k==0)
        {
            break;
        }
    }
}
void main()
{
    int A;
    printf("enter the total numbers of element\n");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("shorted array is\n");
    A=Short(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
