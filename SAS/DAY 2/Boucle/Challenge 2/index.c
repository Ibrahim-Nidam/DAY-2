#include <stdio.h>

int main(){
    int nombre,f=1;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    for (int i = 0; i < nombre; i++){
        f += f * i;
    }
        printf("%d! = %d",nombre,f);


    return 0;
}