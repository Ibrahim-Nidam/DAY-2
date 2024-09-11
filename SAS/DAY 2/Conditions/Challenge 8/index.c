#include <stdio.h>

int main() {
    int age,histoMedical,planSan;
    int couvertureSupp = 0;

    printf("Entrez l'âge : ");
    scanf("%d", &age);
    printf("Entrez l'historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &histoMedical);
   

    if (age < 30) {
        planSan = 1;
    } else if (age >= 30 && histoMedical == 0) {
        planSan = 1; 
    } else {
        planSan = 2; 
    }

    if (histoMedical == 2) {
        couvertureSupp = 1; 
    }

    printf("Plan de santé recommandé : ");
    if (planSan == 1) {
        printf("De base");
    } else {
        printf("étendu");
    }

    if (couvertureSupp == 1) {
        printf(" avec couverture supplémentaire pour problème majeur");
    }

    return 0;
}
