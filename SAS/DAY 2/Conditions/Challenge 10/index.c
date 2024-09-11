#include <stdio.h>

int main() {
    int age,anneCoti;
    float montant,bonus = 0;
    char *plan;

    printf("Entrez l'âge : ");
    scanf("%d", &age);
    printf("Entrez les années de cotisation : ");
    scanf("%d", &anneCoti);
    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%f", &montant);

    if (age >= 65) {
        if (anneCoti >= 30 && montant >= 100000) {
            plan = "Plan complet avec pension élevée";
        } else if (anneCoti >= 20 && montant >= 50000) {
            plan = "Plan partiel avec pension moyenne";
        } else {
            plan = "Plan non éligible";
        }
    } else {
        plan = "Plan épargne non encore disponible";
    }

    if (montant > 50000) {
        bonus = ((montant - 50000) / 10000) * 0.05 * montant;
    }

    printf("Plan de retraite recommandé : %s\n", plan);
    if (bonus > 0) {
        printf("Bonus supplémentaire : %.2f €\n", bonus);
    }

    return 0;
}
