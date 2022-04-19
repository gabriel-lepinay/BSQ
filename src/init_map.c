/*
** EPITECH PROJECT, 2022
** init_map
** File description:
** Source code to init map
*/
#include "init_map.h"

int **malloc_map_int(int **arr, int nb_rows, int nb_cols)
{
    int row;

    arr = malloc((nb_rows + 2) * sizeof(int *));
    for (row = 0; row <= nb_rows; row++) {
        arr[row] = malloc((nb_cols) * sizeof(int));
    }
    arr[row] = NULL;
    return (arr);
}

char **malloc_map(char **arr, int nb_rows, int nb_cols)
{
    int row;

    arr = malloc((nb_rows + 2) * sizeof(char *));
    for (row = 0; row <= nb_rows; row++) {
        arr[row] = malloc((nb_cols + 1) * sizeof(char));
        arr[row][0] = '\0';
    }
    arr[row] = NULL;
    return (arr);
}
