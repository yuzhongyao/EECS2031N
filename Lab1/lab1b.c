#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
main(){
    char c;
    int count = 0;
    printf("Enter a line of characters> \n");
    c = getchar();
    while((c = getchar()) != '\n' ){
        if(isspace(c)){
            count = count + 1;
        }

    }
    printf("%d\n", count);
}