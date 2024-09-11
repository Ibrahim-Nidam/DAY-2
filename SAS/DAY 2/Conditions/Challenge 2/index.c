#include <stdio.h>

int main(){
    int age,voType,acc;
    float primeBase = 100;

    printf("Entrer sous forme Age - type de voiture (1-3) - nombre d'accidents : ");
    scanf("%d - %d - %d",&age,&voType,&acc);

    if(age < 25){
        primeBase *= 1.5;
    }else if(age >= 25 && age <= 65 ){
        primeBase;
    }else{
        primeBase *= 1.2;
    }

    if(voType == 1){
        primeBase *= 2;
    }else if(voType == 2){
        primeBase *= 1.2;
    }else{
        primeBase *= 1.1;
    }

    if(acc > 1){
        primeBase *= 1.3; 
    }

    printf("votre prime d'assurance est %.2f",primeBase);

    return 0;
}