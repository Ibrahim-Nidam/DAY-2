#include <stdio.h>

void typeV(float budget, char *type) {
    if (budget >= 1000) {
        sprintf(type, "Haut de gamme");
    } else if (budget >= 500) {
        sprintf(type, "Moyen");
    } else {
        sprintf(type, "Economique");
    }
}

void desReco(float budget, int nomPer, char *des) {
    if (budget >= 1000 && nomPer > 2) {
        sprintf(des, "Plage");
    } else if (budget >= 500 && nomPer <= 2) {
        sprintf(des, "Montagne");
    } else {
        sprintf(des, "Ville");
    }
}

int main() {
    float budget;
    int nomPer;
    int des;
    char type[20];
    char recom[20];

    printf("Pour planifier votre voyage.\n");
    printf("Entrer le budget , la destination (1 pour plage, 2 pour montagne, 3 pour ville) et le nombre de personnes : ");
    scanf("%f %d %d", &budget, &des, &nomPer);

    typeV(budget, type);

    desReco(budget, nomPer, recom);

    printf("Type de voyage : %s\n", type);
    printf("Destination recommandée : %s\n", recom);

    return 0;
}
