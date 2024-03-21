/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** get_C&R.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../Include/Aries.h"

static void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void print_race(Erace race, int i)
{
    if (i == 1)
        printf("Dragonborn\n");
    if (i == 2)
        printf("Dwarf\n");
    if (i == 3)
        printf("Elf\n");
    if (i == 4)
        printf("Gnome\n");
    if (i == 5)
        printf("Half-Elf\n");
    if (i == 6)
        printf("Half-Orc\n");
    if (i == 7)
        printf("Halfling\n");
    if (i == 8)
        printf("Human\n");
    if (i == 9)
        printf("Tiefling\n");
}

int get_race(void)
{
    int race;

    printf("|---------------------------------|\n");
    printf("| 1. Dragonborn                   |\n");
    printf("| 2. Dwarf                        |\n");
    printf("| 3. Elf                          |\n");
    printf("| 4. Gnome                        |\n");
    printf("| 5. Half-Elf                     |\n");
    printf("| 6. Half-Orc                     |\n");
    printf("| 7. Halfling                     |\n");
    printf("| 8. Human                        |\n");
    printf("| 9. Tiefling                     |\n");
    printf("|---------------------------------|\n");
    while (1) {
        printf("Select the race : ");
        if (scanf("%d", &race) != 1 || race < 1 || race > 9) {
            printf("Please select a valid race\n");
            clear_input_buffer();
        }
        else
            break;
    }
    return race;
}
