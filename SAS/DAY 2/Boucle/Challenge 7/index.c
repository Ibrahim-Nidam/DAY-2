#include <stdio.h>
#include <string.h>

void sensInverse(){
    char num[100];
    printf("entrer un nombre : ");
    scanf(" %s",&num);
    
    int longeur = strlen(num);
    
    for (int i = longeur - 1; i >=0 ; i--){
        printf("%c",num[i]);
    }
    
}

int main() {
    sensInverse();
    return 0;
}