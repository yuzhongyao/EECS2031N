#include<stdio.h>
#include<ctype.h>
main(){
    int count = 0;
    int sum = 0;
    char c;
    printf("Enter a line of characters \n");
    c = getchar();
    while(c != '\n'){
        if(isdigit(c) ){
            count++;
            sum = sum + c -'0';
        }
        c = getchar();
    }
    printf("%d  \t %d \n", count, sum);
}