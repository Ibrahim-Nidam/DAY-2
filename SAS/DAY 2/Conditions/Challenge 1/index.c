#include <stdio.h>

void comparaison(float ra, float sc, float dp){

    if(ra >= 30000 && sc >= 700 && dp <= 10){
        printf("Vous ete Eligible");
    }else if(ra >= 30000 && sc >= 650 && dp <= 15){
        printf("Vous ete Eligible, avec conditions");
    }else{
        printf("Vous n'ete pas Eligible");
    }
}

int main(){
    float ra,sc,dp;

    printf("entrer votre Revenu annuel - Score de crédit - Durée du pret : ");
    scanf("%f - %f - %f",&ra,&sc,&dp);
    comparaison(ra,sc,dp);

    return 0;
}