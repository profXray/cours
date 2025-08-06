#include <stdio.h>
#define FAUX 0
int main (){
    char string[100];
    printf("Veuillez saisir votre phrase !\n");
    scanf(" %[^\n]", string);
    int i=0;
    while(string[i]!='\0'){
        // l'idée d'utiliser les codes ASCII est celle du CHAT of corse mais le code est à moi au moins
        if(  (90<string[i] && string[i]<97) || (string[i]>122) ||(string[i]<48)||(string[i]>57 && string[i]<65)){
           
           printf("La phrase est invalide");
           return FAUX;
        } 
       
        i++;
        
        
      }
    printf("La phrase est valide");
      
}

