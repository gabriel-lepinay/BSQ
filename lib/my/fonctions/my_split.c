/*
** EPITECH PROJECT, 2022
** my_split
** File description:
** split str
*/
//Verifier le caractere a split a la fin
#include <stdio.h> //DLETE
#include <string.h> //DELETE
#include <stdlib.h>

int count_char(char *str, char c);

int next_char(char *str, int start, char c);

char *my_strncpy(char *dest, char const *src, int nb);

char **my_split(char *str, char splitter)
{
    int nb_char = count_char(str, splitter);
    int next_c = next_char(str, 0, splitter);
    char **tab = malloc((nb_char + 1) * sizeof(char *));
    int line = 0;

    for (int words = 0; words < nb_char; words++) {
        tab[line] = malloc((next_c + 1) * sizeof(char));
        tab[line] = my_strncpy(tab[line], str, next_c);
        str += next_c + 1;
        line++;
        next_c = next_char(str, 0, splitter);
    }
    tab[line] = NULL;
    return (tab);
}
