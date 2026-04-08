int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch>='0'&&ch<='9');
    printf("the %c is in the given range is %d",ch,result);

    return 0;
}