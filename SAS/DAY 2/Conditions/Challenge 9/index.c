#include <stdio.h>

int main() {
    float salBase,tauxHor,prime,salaTotal;
    int heurSupp,poste;

    printf("Entrez le salaire de base : ");
    scanf("%f", &salBase);
    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%d", &heurSupp);
    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &poste);

    tauxHor = salBase / 160; 

    if (poste == 1) {
        prime = salBase * 0.10;
    } else if (poste == 2) {
        prime = salBase * 0.20;
    } else {
        printf("Type de poste invalide.\n");
        return 1;
    }

    salaTotal = salBase + prime + (heurSupp * tauxHor * 1.5);

    printf("Salaire total : %.2f €\n", salaTotal);

    return 0;
}
