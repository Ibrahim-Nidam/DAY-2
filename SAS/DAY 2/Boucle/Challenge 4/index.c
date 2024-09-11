#include <stdio.h>

int main(){
    int nombre,n = 1;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    for (int i = 0; i < nombre; i++){
        printf("%d ",n);
        n += 2;
    }


    return 0;
}