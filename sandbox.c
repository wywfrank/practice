#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *str = malloc(50);

    printf("enter your login: ");

    if (fgets(str, 50, stdin)==NULL){
        fprintf(stderr,"Error reading input.\n");
    }
    int len=strlen(str);
    if (str[len-1]=='\n'){
        str[len-1]='\0';
    }

    printf("Your login is %s\n",str);
    return 0;
}