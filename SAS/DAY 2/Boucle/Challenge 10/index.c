#include <stdio.h>

int main(){
    int n ,e = 0;

    printf("Entrez une nombre : ");
    scanf("%d",&n);

    for(int i = 1; i <= n ; i++){
        e += i; 
    }
        printf("N = %d ",e);

    return 0;
}