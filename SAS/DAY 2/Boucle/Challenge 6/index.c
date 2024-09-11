#include <stdio.h>

int main(){
    int nombre,n = 2;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    for (int i = 0; i < nombre; i++){
        printf("%d ",n);
        n += n;
    }
    return 0;
}