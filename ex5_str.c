//exerccice n°5 :
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
    void main () {
       //saisir un mot :
       char ch[100];
        do {
        printf("donne une mots : ");
        gets(ch);}while(strlen(ch)==0);
        //saisir une phrase :
        char txt[100];
        do {
            printf("donner une phrase : ");
            gets(txt);
        }while(strlen(txt)==0);
        //convertion en majuscule :
        strupr(ch);
        strupr(txt);
        //existance du mots :
        char* exe;
        exe=strstr(txt,ch);
        if(exe!=0){ printf("%s existe dans la phrase\n",ch);}
        else{ printf("%s n'existe pas dans la phrase\n");}
        //nombre d'occurence :
        int nc=0;
        char* nex;
        while (strlen(exe)!= strlen(ch))
        {nex=strstr(exe,ch);
            strrev(nex);
            nex[strlen(nex)-strlen(ch)]='\0';
            strrev(nex);
            nc++;
        }
        printf("nombre d'occurence : %d",nc);
    }
