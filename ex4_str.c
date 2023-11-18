//exerccice n°4 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
    void main () {
        //insertion de CH :
        char ch[100];
        //do {
            printf("inserer une chaine ch : ");
        gets(ch);
        //} while (strlen(ch) != 0);
        //declaration de chaine aux :
        char aux[100];
        int taille=0;
        //determination des consone puis voyelles majuscule:
        for (int i = 0; i < strlen(ch); ++i) {
            if ((isupper(ch[i]) != 0) && (ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'Y' && ch[i] != 'U' && ch[i] != 'I' && ch[i] != 'O')) {
                aux[taille] = ch[i];
                taille++;
            }
        }
        for (int i = 0; i < strlen(ch); ++i) {
            if (!(ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'Y' && ch[i] != 'U' && ch[i] != 'I' && ch[i] != 'O')) {
                aux[taille] = ch[i];
                taille++;
            }
        }
        //determination des concone puis voyelles miniscule :
        for (int i = 0; i < strlen(ch); ++i) {
            if ((islower(ch[i]) != 0) && (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'y' && ch[i] != 'u' && ch[i] != 'i' && ch[i] != 'o')) {
                aux[taille] = ch[i];
                taille++;
            }
        }
        for (int i = 0; i < strlen(ch); ++i) {
            if (!(ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'y' && ch[i] != 'u' && ch[i] != 'i' && ch[i] != 'o')) {
                aux[taille] = ch[i];
                taille++;
            }
        }
        printf("la phrase est : %s",aux);
    }
