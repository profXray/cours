#include <ctype.h>
#include <stdio.h>

int ft_isalphanum(char *str) {
    char *p = str;
    int cpt = 0;
    while (p[cpt]!= '\0') {
        if ( (int)p[cpt] < 58 && (int)p[cpt] > 47) {
            printf("Le %d e caractere est un chiffre \n", cpt);
        }
        else if ( (int)p[cpt] > 64 && (int)p[cpt] < 123) {
            printf("Le %d e caractere est une lettre \n", cpt);
        }
        else {
            printf("Le %d e caractere est un autre truc \n", cpt);
        }
        cpt++;
    }
}

int main() {
    ft_isalphanum("caca77");
}