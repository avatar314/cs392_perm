//I pledge my honor that I have abided by the Stevens Honor System - atartagl

#include "cs392_string.h"

unsigned cs392_strlen(char *str) {
	//calculates the length of the string pointed to by “str”, and returns that length
	int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
