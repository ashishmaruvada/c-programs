int main() {
    int ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch>='A')&&(ch<='Z');
    printf("the %c is in range of A-Z is %d",ch,result);

    return 0;
}