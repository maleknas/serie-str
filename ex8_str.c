//ex n°8
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main() {
    //insertion d'une chaine :
    char ch[100];
    printf("donner la chaine : ");
    gets(ch);
    ////////////supression des suites de caractere :
    int i=0,cond=1;
    char*p;
    while(cond==1)
    {
        //verification de cond :
        char suite[3]="*";
        while(i< strlen(ch)-1 && strlen(suite)==1)
        {
            if(ch[i]==ch[i+1]){suite[0]=ch[i];suite[1]=ch[i+1];}
            i++;
        }
        if(strlen(suite)==1){cond=0;}
        p = strstr(ch, suite);
        //la suppressin si possible :
      while (p != NULL) {
        char ch1[100] = "";
        strrev(p);
        p[strlen(p) - 1] = '\0';
        strrev(p);
        strncpy(ch1, ch, strlen(ch) - strlen(p));
        strcat(ch1, p);
        strcpy(ch, ch1);
        p = strstr(ch,suite);
    }}
    printf("la chaine modifie est : %s\n", ch);
}
