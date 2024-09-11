#include <stdio.h>

int main(){
    int nombre,n=0;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    for (int i = 1; i <= nombre; i++){
        n += i;
    }
        printf("n = %d",n);


    return 0;
}