#include <stdio.h>

int main() {
    float revenu, deduc, revenuImpos, impots;
    int statut;

    printf("Entrez le revenu annuel : ");
    scanf("%f", &revenu);
    printf("Entrez le statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut);

    if (statut == 1) {
        deduc = 1000;
    } else if (statut == 2) {
        deduc = 2000;
    } else if (statut == 3) {
        deduc = 3000;
    } else {
        printf("Statut fiscal invalide.\n");
        deduc = 0;
    }

    revenuImpos = revenu - deduc;

    if (revenuImpos <= 20000) {
        impots = revenuImpos * 0.05;
    } else if (revenuImpos <= 50000) {
        impots = revenuImpos * 0.10;
    } else {
        impots = revenuImpos * 0.20;
    }

    printf("Impots à payer : %.2f €\n", impots);

    return 0;
}
