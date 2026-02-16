#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *mot) {
    int cpt = 0;
    while (mot[cpt] != '\0') {
        cpt++;
    }
    return cpt;
}

int main() {
    char*mot= malloc(1000 * sizeof(char));
    printf("Veuillez ecrire votre mot: \n");
    fgets(mot,sizeof(mot),stdin);
    printf("Le nombre de lettre de ton mot est de : %d\n", ft_strlen(mot)-1); ///jsp pourquoi il faut mettre -1 mais sinon c pas correct
    free(mot);
    return 0;
}