/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** get_classe.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../Include/Aries.h"

static void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void print_classe(Eclasse E_classe, int i)
{
    if (i == 1)
        printf("Barbarian\n");
    if (i == 2)
        printf("Bard\n");
    if (i == 3)
        printf("Cleric\n");
    if (i == 4)
        printf("Druid\n");
    if (i == 5)
        printf("Fighter\n");
    if (i == 6)
        printf("Monk\n");
    if (i == 7)
        printf("Paladin\n");
    if (i == 8)
        printf("Ranger\n");
    if (i == 9)
        printf("Rogue\n");
    if (i == 10)
        printf("Sorcerer\n");
    if (i == 11)
        printf("Warlock\n");
    if (i == 12)
        printf("Wizard\n");
}

int get_classe(void)
{
    int classe;

    printf("|---------------------------------|\n");
    printf("| 1. Barbarian                    |\n");
    printf("| 2. Bard                         |\n");
    printf("| 3. Cleric                       |\n");
    printf("| 4. Druid                        |\n");
    printf("| 5. Fighter                      |\n");
    printf("| 6. Monk                         |\n");
    printf("| 7. Paladin                      |\n");
    printf("| 8. Ranger                       |\n");
    printf("| 9. Rogue                        |\n");
    printf("| 10. Sorcerer                    |\n");
    printf("| 11. Warlock                     |\n");
    printf("| 12. Wizard                      |\n");
    printf("|---------------------------------|\n");
    while (1) {
        printf("Select the classe : ");
        if (scanf("%d", &classe) != 1 || classe < 1 || classe > 12) {
            printf("Please select a valid classe\n");
            clear_input_buffer();
        }
        else
            break;
    }
    return classe;
}
