//exerccice n°6 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main () {
    //insertion d'une chaine :
    char ch[100];
    printf("donner la chaine : ");
    gets(ch);
    //supression des espaces :
    char* pos;
    pos=strrchr(ch,' ');
    while(pos!=NULL){
        for (int i = strlen(ch)-strlen(pos); i < strlen(ch); ++i) {
            ch[i]=ch[i+1];
            pos=strrchr(ch,' ');
        }
    }
    printf("la chaine modifie est : %s",ch);
}
