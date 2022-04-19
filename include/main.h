/*
** EPITECH PROJECT, 2021
** main
** File description:
** Source code to include my fonctions
*/
#ifndef LIB_H_
    #define LIB_H_
    #include <stddef.h>
    #include <stdlib.h>
    #include "structure.h"

int my_getnbr(char *str);
int get_len_row(char *str);
int get_len_col(char *str);
char *getcontent_in_buff(char const *filepath, char *buffer);
int **malloc_map_int(int **arr, int nb_rows, int nb_cols);
int **fill_map_int(int **map_int, char **map, int max_rows, int max_cols);
int **find_bsq(int **map_int, int max_rows, int max_cols);
int get_coord_of_bnb(int **map_int, int max_rows, int max_cols,
                        coords_t *coords);
char **print_bsq_in_map(char **map, coords_t coords, int bnb);
char **my_split(char *str, char splitter);
void display_map(char **tab);
void free_map(char **arr);
void free_map_int(int **arr, int nb_row);
#endif /*LIB_H_*/
