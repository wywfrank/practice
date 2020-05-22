#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, i;
    char *ptr;

    printf("Enter number of char to store: ");
    scanf("%d",&n);

    ptr = (char*)malloc(n*sizeof(char));

    return 0;
    
}