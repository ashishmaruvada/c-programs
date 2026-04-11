#include <stdio.h>

int main(){
    int size;
    printf("enter the values:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("enter the %d values :\n",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<=size-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max value is %d :  \n",max);

    return 0;
}