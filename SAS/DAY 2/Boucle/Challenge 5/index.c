#include <stdio.h>

int main(){
    int nombre,exp,res;

    printf("Entrez une base : ");
    scanf("%d",&nombre);
    printf("Entrez une exposant : ");
    scanf("%d",&exp);

    res = nombre;
    for (int i = 1; i < exp; i++){
        res *=  nombre;
    }
        printf("%d ^ %d = %d",nombre,exp,res);
    return 0;
}