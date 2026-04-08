int main() {
    int cigar,weekend;
    printf("enter the number of cigar:\n");
    scanf("%d",&cigar);
    printf("enter 0 for not weekend and \n enter 1 for weekend");
    scanf("%d",&weekend);
    if(weekend)
    {
    if(cigar>40)
    {
        printf("sucess");
    }
    else 
    {
        printf("fail");
    }
    }
    else
    {
    if(cigar>=40 && cigar<=60)
    {
        printf("sucess");
    }
    else
    {
        printf("fail");
    }
    }
return 0;
}