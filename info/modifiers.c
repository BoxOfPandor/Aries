/*
** EPITECH PROJECT, 2024
** Aries
** File description:
** classe.c
*/

#include "../Include/Aries.h"

mod_t class_modifiers[] = {
    // Class      Code | STR | DEX | CON | INT | WIS | CHA |
    {"Barbarian", 1, 2, 0, 2, 2,  0, -2},
    {"Bard", 2, -2,  0,  0, 2, 0, 2},
    {"Cleric", 3, +0, 0, 2, 0, 2, 0},
    {"Druid", 4, 2, 0, 2, 2, 0, 0},
    {"Fighter", 5, 2, 0, 2, -2, 0, -2},
    {"Monk", 6, -2, 2, 0, 0, 2, 0},
    {"Paladin", 7, 2, 0, 2, 2, 0, -2},
    {"Ranger", 8, 2, 0, 2, 0, 0, -2},
    {"Rogue", 9, -2, 2, 0, 0, 0, 2},
    {"Sorcerer", 10, -2, 0, 0, 0, 0, 2},
    {"Warlock", 11, -2, 0, 0, 0, 0, 2},
    {"Wizard", 12, -2, 0, 0, 2, 0, 2}
};

mod_t race_modifiers[] = {
    // Class      Code | STR | DEX | CON | INT | WIS | CHA |
    {"Dragonborn", 1, 2, 0, 0, 0, 0, 1},
    {"Dwarf", 2, 0, 0, 2, 0, 0, 0},
    {"Elf", 3, 0, 2, 0, 0, 0, 0},
    {"Gnome", 4, 0, 0, 0, 2, 0, 0},
    {"Half-Elf", 5, 0, 0, 0, 0, 0, 2},
    {"Half-Orc", 6, 2, 0, 1, 0, 0, 0},
    {"Halfling", 7, 0, 2, 0, 0, 0, 1},
    {"Human", 8, 1, 1, 1, 1, 1, 1},
    {"Tiefling", 9, 0, 0, 0, 1, 0, 2}
};
