//exerccice n°3 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
    void main () {
        //insertion de CH1 :
        char CH1[100];
        printf("inserer une chaine ch1 : ");
        scanf("%s", CH1);
        //insertion de CH2 :
        char CH2[100];
        printf("inserer une chaine ch2 : ");
        scanf("%s", CH2);
        //copiage de moitie ch1 et ch2 dans ch3 :
        char CH3[100];
        strncat(CH3,CH1, strlen(CH1)/2);
        strncat(CH3,CH2, strlen(CH2)/2);
        //affichage de ch3 :
        printf("ch3 est : %s",CH3);
    }
