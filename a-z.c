int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch>='A'&&ch<='Z')||(ch>='a'||ch<='z');
    printf("the %c is in the given range is %d",ch,result);

    return 0;
}