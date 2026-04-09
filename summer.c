int main() {
    int temp,summer;
    printf("enter the temp:\n");
    scanf("%d",&temp);
    printf("enter 0 for not summer and \n enter 1 for summer");
    scanf("%d",&summer);
    if(summer)
    {
    if(temp>=60 && temp<=100)
    {
        printf("true");
    }
    else 
    {
        printf("fail");
    }
    }
    else
    {
    if(temp>=60 && temp<=90)
    {
        printf("true");
    }
    else
    {
        printf("fail");
    }
    }
return 0;
}