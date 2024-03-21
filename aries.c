/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** aries.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Include/Aries.h"

extern mod_t race_modifiers[7];
extern mod_t class_modifiers[11];

void print_modifiers(int race, int clase)
{
    // Find the correct race and class modifiers
    for (int i = 0; i < 7; i++) {
        if (race_modifiers[i].code == race) {
            printf("| Race  | %3d | %3d | %3d | %3d | %3d | %3d |\n", race_modifiers[i].str, race_modifiers[i].dex, race_modifiers[i].con, race_modifiers[i].intl, race_modifiers[i].wis, race_modifiers[i].cha);
            break;
        }
    }
    printf("|-------|-----|-----|-----|-----|-----|-----|\n");
    for (int i = 0; i < 11; i++) {
        if (class_modifiers[i].code == clase) {
            printf("| Class | %3d | %3d | %3d | %3d | %3d | %3d |\n", class_modifiers[i].str, class_modifiers[i].dex, class_modifiers[i].con, class_modifiers[i].intl, class_modifiers[i].wis, class_modifiers[i].cha);
            break;
        }
    }
}

void print_logo(void)
{
    printf("   ▄████████    ▄████████  ▄█     ▄████████    ▄████████ \n");
    printf("  ███    ███   ███    ███ ███    ███    ███   ███    ███ \n");
    printf("  ███    ███   ███    ███ ███▌   ███    █▀    ███    █▀  \n");
    printf("  ███    ███  ▄███▄▄▄▄██▀ ███▌  ▄███▄▄▄       ███        \n");
    printf("▀███████████ ▀▀███▀▀▀▀▀   ███▌ ▀▀███▀▀▀     ▀███████████ \n");
    printf("  ███    ███ ▀███████████ ███    ███    █▄           ███ \n");
    printf("  ███    ███   ███    ███ ███    ███    ███    ▄█    ███ \n");
    printf("  ███    █▀    ███    ███ █▀     ██████████  ▄████████▀  \n");
    printf("               ███    ███                                \n");
    printf("\n\n");
}

void print_help(void)
{
    printf("The goal to this programme is to create the stat for your D&D character\n");
    printf("In the first step you need to selecte the race of your character\n");
    printf("In the second step you need to selecte the class of your character\n");
    printf("In the third step you need to selecte the stats of your character\n");
    printf("Let's start\n\n");
}

int main(int ac, char **av)
{
    int race;
    int clase;
    Erace E_race;
    Eclasse E_classe;
    stats_t stats;

    system("clear");
    print_logo();
    if (ac == 2 && (strcmp(av[1], "-h") == 0 || strcmp(av[1], "--help") == 0)) {
        print_help();
        return (0);
    }
    //--------------------- Start first step ---------------------
    race = get_race();
    clase = get_classe();
    printf("\nYou have selected the race : ");
    print_race(E_race, race);
    printf("You have selected the classe : ");
    print_classe(E_classe, clase);

    system("clear");
    print_logo();
    printf("\nHere is the array of your modifiers for your race and your classe\n");
    printf("|-------------------------------------------|\n");
    printf("|       | STR | DEX | CON | INT | WIS | CHA |\n");
    printf("|-------|-----|-----|-----|-----|-----|-----|\n");
    print_modifiers(race, clase);
    printf("|-------------------------------------------|\n");

    //--------------------- Start second step ---------------------
    printf("\n\nNow for eache stat the programme roll 5 d6\n");
    printf("The programme will keep the 4 highest dice\n");
    stats = get_stats();
    printf("\nHere is the array of your stats not modify\n");
    print_array(stats);
    printf("\nNow the programme add the modifiers of your race and your class\n");
    stats = modify_stats(stats, clase, race);
    printf("Here is the array of your stats modify\n");
    print_array(stats);
    return (0);
}
