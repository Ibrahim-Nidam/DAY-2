#include <stdio.h>

int main() {
    float conso,tarKWh,facture,suppl = 0;
    int typeUtili,typeCon;

    printf("Entrez la consommation d'électricité en kWh : ");
    scanf("%f", &conso);
    printf("Entrez le type d'utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d", &typeUtili);
    printf("Entrez le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &typeCon);

    if (typeUtili == 1) {
        if (typeCon == 0) {
            tarKWh = 0.20;
        } else {
            tarKWh = 0.15;
        }
    } else if (typeUtili == 2) {
        if (typeCon == 0) {
            tarKWh = 0.30;
        } else {
            tarKWh = 0.25;
        }
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 1;
    }

    facture = conso * tarKWh;

    if (conso > 500) {
        suppl = 0.10 * facture;
    }

    facture += suppl;

    printf("Montant total de la facture : %.2f €\n", facture);

    return 0;
}
