#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * restoreString(char * str, int* indices, int indicesSize)
{
    int i = 0;
    char *str_cpy = malloc(sizeof(char) * (strlen(str) + 1));
    printf("%d\n", indicesSize);

    while (i < indicesSize) {
        str_cpy[indices[i]] = str[i];
        i++;
    }
    str_cpy[i] = '\0';

    return (str_cpy);
}

int main ()
{
    char *str = strdup("hola");
    int *indices = malloc(sizeof(int) * 4);
    indices[0] = 1;
    indices[1] = 0;
    indices[2] = 3;
    indices[3] = 2;
    restoreString(str, indices, 4);
    return (0);
}