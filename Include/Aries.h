/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** Aries.h
*/


#ifndef ARIES_ARIES_H
    #define ARIES_ARIES_H
typedef enum race {
    DRAGONBORN = 1,
    DWARF,
    ELF,
    GNOME,
    HALF_ELF,
    HALF_ORC,
    HALFLING,
    HUMAN,
    TIEFLING
} Erace;
typedef enum classe {
    BARBARIAN = 1,
    BARD,
    CLERIC,
    DRUID,
    FIGHTER,
    MONK,
    PALADIN,
    RANGER,
    ROGUE,
    SORCERER,
    WARLOCK,
    WIZARD
} Eclasse;

typedef struct mod {
    char *name;
    int code;
    int str;
    int dex;
    int con;
    int intl;
    int wis;
    int cha;
} mod_t;
typedef struct stats {
    int str;
    int dex;
    int con;
    int intl;
    int wis;
    int cha;
} stats_t;

extern mod_t class_modifiers[];
extern mod_t race_modifiers[];

int get_race(void);
void print_race(Erace race, int i);
int get_classe(void);
void print_classe(Eclasse E_classe, int i);
void print_array(stats_t stats);
int role_stat(void);
stats_t get_stats(void);
stats_t modify_stats(stats_t stats, int class, int race);
void print_stats(stats_t stats);

#endif //ARIES_ARIES_H
