#include <stdio.h>
#include <stdlib.h>


int change_to_integer(char c)
{
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
    return 0;
}

int roman_to_int (char *s)
{
    int i = 1;
    int num = change_to_integer(s[0]);

    while (s[i] != '\0') {
        int prev_num = change_to_integer(s[i - 1]);
        int cur_num = change_to_integer(s[i]);
        if (prev_num < cur_num) {
            num = num - prev_num + (cur_num - prev_num);
        } else {
            num += cur_num;
        }
        i++;
    }
    return num;
}