//ex n°7
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main() {
    //insertion d'une chaine :
    char ch[100];
    printf("donner la chaine : ");
    gets(ch);
    //supression des espaces :
    char *p;
    p = strstr(ch, "  ");
    while (p != NULL) {
        char ch1[100] = "";
        strrev(p);
        p[strlen(p) - 1] = '\0';
        strrev(p);
        strncpy(ch1, ch, strlen(ch) - strlen(p));
        strcat(ch1, p);
        strcpy(ch, ch1);
        p = strstr(ch, "  ");
    }
    printf("la chaine modifie est : %s\n", ch);
}
