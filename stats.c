/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** stats.c
*/

#include <stdio.h>
#include "Include/Aries.h"

stats_t get_stats(void)
{
    stats_t stats;

    printf("Rolling for strength...\n");
    stats.str = role_stat();
    printf("\nRolling for dexterity...\n");
    stats.dex = role_stat();
    printf("\nRolling for constitution...\n");
    stats.con = role_stat();
    printf("\nRolling for intelligence...\n");
    stats.intl = role_stat();
    printf("\nRolling for wisdom...\n");
    stats.wis = role_stat();
    printf("\nRolling for charisma...\n");
    stats.cha = role_stat();
    return (stats);
}

stats_t modify_stats(stats_t stats, int class, int race)
{
    int i;
    int j;

    for (i = 0; i < 10; i++) {
        if (race_modifiers[i].code == race)
            break;
    }
    for (j = 0; j < 13; j++) {
        if (class_modifiers[j].code == class)
            break;
    }
    stats.str += class_modifiers[j].str + race_modifiers[i].str;
    stats.dex += class_modifiers[j].dex + race_modifiers[i].dex;
    stats.con += class_modifiers[j].con + race_modifiers[i].con;
    stats.intl += class_modifiers[j].intl + race_modifiers[i].intl;
    stats.wis += class_modifiers[j].wis + race_modifiers[i].wis;
    stats.cha += class_modifiers[j].cha + race_modifiers[i].cha;
    return (stats);
}

void print_stats(stats_t stats)
{
    printf("| Roll  | %3d | %3d | %3d | %3d | %3d | %3d |\n",
           stats.str, stats.dex, stats.con, stats.intl, stats.wis, stats.cha);
}

void print_array(stats_t stats)
{
    printf("|-------------------------------------------|\n");
    printf("|       | STR | DEX | CON | INT | WIS | CHA |\n");
    printf("|-------|-----|-----|-----|-----|-----|-----|\n");
    print_stats(stats);
    printf("|-------------------------------------------|\n");
}
