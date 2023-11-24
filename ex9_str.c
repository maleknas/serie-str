//ex n°9
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main() {
    //remplissage des N chaine de char :
    //1)insertion de N :
    int N;
    do {
        printf("donner la taille du tab : ");
        scanf("%d", &N);
    } while (N < 5 || N > 20);
    //2)declaration et remplissage de T :
    char T[20][100];
    for (int i = 0; i < N; ++i) {
        printf("donner la chaine n°%d : ", i + 1);
        gets(T[i]);
    }
    //supression des caractere non alpha :
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < strlen(T[i]); ++j) {
            char aux[100] = "", aux1[100] = "";
            if (isalpha(T[i][j]) == 0) {
                printf("la 2 est : %s", T[2]);
                strncpy(aux, T[i], j - 1);
                strrev(aux);
                strrev(T[i]);
                strncpy(aux1, T[i], strlen(T[i]) - j - 1);
                printf("la aux est : %s", aux);
                strcat(aux1, aux);
                printf("la aux1 est : %s", aux1);
                strcpy(T[i], aux1);
                strrev(T[i]);
            }
        }
        //affichage des elements du tab ;
    for (int i = 0; i < N; ++i) {
        if(strlen(T[i]!=0)){
            printf("%d   %s",i,T[i]);
        }
    }
}
    //there is a skipping while getting the first case of the tab !!!!!!!!
