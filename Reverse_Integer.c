#include<stdio.h>
int reverseinteger(int num){
    int reverse=0;
    while(num!=0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    return reverse;
}
int main(){
    int input;
    scanf("%d",&input);
    int reverse=reverseinteger(input);
    printf("%d
",reverse);
    return 0;
}