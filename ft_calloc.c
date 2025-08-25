#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_calloc(int taille, int size) {
    char* str = malloc(size * taille);
    if (!str)
        return NULL;
    for (int i = 0; i < taille; i++) {
        str[i] = 0;
    }
    return str;
}

int main() {
    char* str = ft_calloc(10, sizeof(char));
    for (int i = 0; i < 10; i++) {
        printf("%s, ", str[i]);
    }
    free(str);
    return 0;
}