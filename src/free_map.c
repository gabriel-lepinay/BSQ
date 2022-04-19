/*
** EPITECH PROJECT, 2022
** free_maps
** File description:
** Source code to free maps
*/
#include "free_map.h"

void free_map(char **arr)
{
    int row;

    for (row = 0; arr[row] != NULL; row++) {
        free(arr[row]);
    }
    free(arr);
}

void free_map_int(int **arr, int nb_row)
{
    int row;

    for (row = 0; row <= nb_row; row++) {
        free(arr[row]);
    }
    free(arr);
}
