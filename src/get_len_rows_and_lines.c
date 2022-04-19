/*
** EPITECH PROJECT, 2022
** get_len_rows_and_lines
** File description:
** SOurce code to get the len of a rows and number of lines
*/

int get_len_row(char *str)
{
    int counter = 0;

    while (str[counter] != '\n') {
        counter++;
    }
    return (counter);
}

int get_len_col(char *str)
{
    int counter = 0;

    while (str[counter] != '\n') {
        counter++;
    }
    return (counter);
}
