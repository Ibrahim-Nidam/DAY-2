#include <stdio.h>

int main(){
    int jourAcc,jourUti,jourRes,statutEm;

    printf("pour calculer les jours de congés restant.\n");
    printf("Entrer sous la forme les jours accordées - nombres de jours de congé utilisé - statut de l'employé (0-1) : ");
    scanf("%d - %d - %d",&jourAcc,&jourUti,&statutEm);

    if (jourUti > jourAcc){
        printf("Impossible, mais t'a deja dépassé les jours accordés.");
    }

    if(statutEm == 1){
        jourRes = jourAcc - jourUti;
    }else{
        jourRes = (jourAcc / 2) - jourUti;
    }

    printf("les jours de congés restants est : %d",jourRes);
    return 0;
}