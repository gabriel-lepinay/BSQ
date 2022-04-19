/*
** EPITECH PROJECT, 2021
** main
** File description:
** Source code of the main
*/
#include "main.h"

char **find_bsq_and_print_it(char **map, int num_of_row, int len_col)
{
    int **map_int;
    coords_t coords;

    map_int = malloc_map_int(map_int, num_of_row, len_col);
    map_int = fill_map_int(map_int, map, num_of_row, len_col);
    map_int = find_bsq(map_int, num_of_row, len_col);
    if (get_coord_of_bnb(map_int, num_of_row, len_col, &coords) == 1)
        return (map);
    map = print_bsq_in_map(map, coords, map_int[coords.y][coords.x]);
    free_map_int(map_int, num_of_row);
    return (map);
}

int main(int ac, char **av)
{
    char *buff;
    char **map;
    int num_of_row;
    int len_col;
    int len_first_row;

    if (ac != 2)
        return (84);
    buff = getcontent_in_buff(av[1], buff);
    if (buff == NULL || buff[0] == ' ')
        return (84);
    num_of_row = my_getnbr(buff);
    len_first_row = get_len_row(buff);
    buff += len_first_row + 1;
    len_col = get_len_col(buff);
    map = my_split(buff, '\n');
    find_bsq_and_print_it(map, num_of_row, len_col);
    display_map(map);
    free_map(map);
    return (0);
}
