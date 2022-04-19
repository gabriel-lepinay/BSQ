/*
** EPITECH PROJECT, 2022
** algorithm
** File description:
** SOurce code of the invert deminer algorithm
*/
#include "algorithm.h"

int check_smallest(int nb_1, int nb_2, int nb_3)
{
    int smallest = nb_2;

    if (nb_1 < nb_2) {
        smallest = nb_1;
    } else if (smallest < nb_3) {
        return (smallest);
    } else {
        return (nb_3);
    }
}

int **find_bsq(int **map_int, int max_rows, int max_cols)
{
    int row;
    int col;

    for (row = 1; row < max_rows; row++) {
        for (col = 1; col < max_cols; col++) {
            if (map_int[row][col] > 0) {
                map_int[row][col] = check_smallest(map_int[row][col - 1],
                map_int[row - 1][col - 1], map_int[row - 1][col]) + 1;
            }
        }
    }
    return (map_int);
}

int get_coord_of_bnb(int **map_int, int max_rows, int max_cols,
                        coords_t *coords)
{
    int row;
    int col;
    int biggest = 0;

    for (row = 0; row < max_rows; row++) {
        for (col = 0; col < max_cols; col++) {
            if (map_int[row][col] > biggest) {
                biggest = map_int[row][col];
                coords->x = col;
                coords->y = row;
            }
        }
    }
    if (biggest == 0)
        return (1);
    return (0);
}
