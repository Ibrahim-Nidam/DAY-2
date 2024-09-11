#include <stdio.h>
#include <string.h>

void longeur(){
    char num[100];
    printf("entrer un nombre : ");
    scanf(" %s",&num);
    
    int longeur = strlen(num);
    printf("%d\n",longeur);
    
}

int main() {
    longeur();
    return 0;
}