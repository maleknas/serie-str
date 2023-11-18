//exerccice n°1 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main () {
    //insertion du chaine :
    char TXT[200];
    printf("Inserer une ligne de texte : ");
    gets(TXT);
    //les affiches :
    //longuuer de la chaine :
    printf("la longueur de la chaine est : %d \n", strlen(TXT));
    //le nombre de 'e' dans la phrase
    int nr=0;
    for (int i = 0; i < strlen(TXT);++i) {
        if(TXT[i]=='e'){nr++;}
    }
    printf("le nombre de 'e' dans la phrase est : %d\n",nr);
    //la phrase :
    printf("la phrase est : %s\n",TXT);
    //la phrase inverse :
    printf("la phrase inverse est : %s", strrev(TXT));
}
