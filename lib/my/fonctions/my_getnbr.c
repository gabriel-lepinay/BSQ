/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** SOUrce code to get a nbr from a str
*/
#include <unistd.h>
#include <stdio.h>

int my_getnbr(char *str)
{
    int index = 0;
    int nb = 0;
    int neg = 1;

    for (index; str[index] <= 48 || str[index] >= 58; index++) {
        if (str[index] == 45) {
            neg = -1;
        }
        if (str[index] == 43) {
            neg = 1;
        }
    }
    for (index; str[index] >= 48 && str[index] <= 58
            && str[index] != '\0'; index++) {
        nb *= 10;
        nb = nb + (str[index] - 48);
    }
    nb = nb * neg;
    return (nb);
}
