#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strcpy - is a fucntion that doimg something
 *@s: Variable
 *
 *Return: Interger
*/
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s == ' ')
        s++;

    if (*s == '-' || *s == '+') {
        if (*s == '-')
            sign = -1;
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
