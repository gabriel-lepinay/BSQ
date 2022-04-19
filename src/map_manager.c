/*
** EPITECH PROJECT, 2022
** map_manager.c
** File description:
** Source code to manage map of char and map of int
*/
#include "map_manager.h"

void display_map(char **tab)
{
    for (int row = 0; tab[row] != NULL; row++) {
        write(1, tab[row], my_strlen(tab[row]));
        my_putchar(10);
    }
}

char **print_bsq_in_map(char **map, coords_t coords, int bnb)
{
    int index_x = 0;
    int index_y = 0;

    while (index_y < bnb) {
        index_x = 0;
        while (index_x < bnb) {
            map[coords.y - index_y][coords.x - index_x] = 'x';
            index_x++;
        }
        index_y++;
    }
    return (map);
}

int **fill_map_int(int **map_int, char **map, int max_rows, int max_cols)
{
    int row;
    int col;

    for (row = 0; row < max_rows; row++) {
        for (col = 0; col < max_cols; col++) {
            if (map[row][col] == '.')
                map_int[row][col] = 1;
            if (map[row][col] == 'o')
                map_int[row][col] = 0;
        }
    }
    map[row] = NULL;
    return (map_int);
}

char *getcontent_in_buff(char const *filepath, char *buffer)
{
    struct stat statbuff;
    int fd;

    if (stat(filepath, &statbuff) != -1) {
        fd = open(filepath, O_RDONLY);
        if (fd != -1 && statbuff.st_size != 0) {
            buffer = malloc((statbuff.st_size + 1) * sizeof(char));
            read(fd, buffer, statbuff.st_size);
            buffer[statbuff.st_size] = '\0';
            close(fd);
            return (buffer);
        } else {
            my_putstr("Open failed or file is empty.\n");
            close(fd);
        }
    } else {
        my_putstr("File directory is not correct.\n");
    }
    return (NULL);
}
