#include <stdio.h>

void compare(int *recom, float *bonus) {
    if (*recom == 0) {
        *bonus = 0;
    } else if (*recom == 1) {
        *bonus = 10;
    } else {
        *bonus = 20;
    }   
}

int main() {
    int scPer, anci, recom;
    float bonus;

    printf("Pour évaluer votre performance.\n");
    printf("Entrer sous la forme : score performance - ancienneté - récompense (0 - 1 - 2) : ");
    scanf("%d - %d - %d", &scPer, &anci, &recom);

    compare(&recom, &bonus);

    if (scPer >= 90 && anci >= 5) {
        printf("Excellente, vous avez un bonus de %.2f%%\n", bonus);
    } else if (scPer >= 75 && anci >= 3) {
        printf("Bonne, vous avez un bonus de %.2f%%\n", bonus);
    } else if (scPer >= 50 && anci < 3) {
        printf("Satisfaisante, vous avez un bonus de %.2f%%\n", bonus);
    } else {
        printf("Insuffisante, vous avez un bonus de %.2f%%\n", bonus);
    }

    return 0;
}
