/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** dice.c
*/

#include <stdlib.h>
#include <stdio.h>

int role_d6(void)
{
    return (rand() % 6 + 1);
}

int role_stat(void)
{
    int d1 = role_d6();
    int d2 = role_d6();
    int d3 = role_d6();
    int d4 = role_d6();
    int d5 = role_d6();
    int min = d1;

    if (d2 < min)
        min = d2;
    if (d3 < min)
        min = d3;
    if (d4 < min)
        min = d4;
    if (d5 < min)
        min = d4;
    printf("D6 rolls: %d %d %d %d %d\n", d1, d2, d3, d4, d5);
    printf("d6 weak: %d | Final stat: %d\n", min, d1 + d2 + d3 + d4 + d5 - min);
    return (d1 + d2 + d3 + d4 - min);
}