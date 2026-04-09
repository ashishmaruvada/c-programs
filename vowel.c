int main() {
    char ch;
    printf("enter the value:\n");
    scanf("%c",&ch);
    int result=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    printf("the %c is vowel is %d",ch,result);

    return 0;
}