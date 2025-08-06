#include <stdio.h>
int main (){
    char ch[100];
    printf("Veuillez saisir votre phrase\n");
    fgets(ch, 100, stdin);
    int compteur=0;
    int i=0;
    while (ch[i]!='\0'){
        compteur++;
        i++;
        }
    printf("le nombre de carctère est %d", compteur);
}