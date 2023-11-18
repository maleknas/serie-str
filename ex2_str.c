//exerccice n°2 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
    void main () {
        //insertion du chaine :
        char TXT[200];
        printf("Inserer une ligne de texte : ");
        gets(TXT);
        //affichage de la phrase sans modification :
        printf("la phrase est : %s\n", TXT);
        printf("taille = %d\n", strlen(TXT));
        //affichage de la phrase avec modification :
        char * pos;
        pos=strrchr(TXT,'e');
        char ch[]="(null)";
        printf("pos est %s",pos);
        printf(" la dedrdrd : %d",strcmp(pos,ch));
        while(strcmp(pos,ch)!=0){
            for (int i = strlen(TXT)- strlen(pos); i < strlen(TXT) ; ++i) {
                TXT[i]=TXT[i+1];
            }
        }
        printf("la phrase modifie est : %s\n",TXT);
        printf("taille = %d", strlen(TXT));
    }
