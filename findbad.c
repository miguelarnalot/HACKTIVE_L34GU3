/*
** EPITECH PROJECT, 2021
** HACKTIVE_L34GU31
** File description:
** findbad
*/


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int n = 6;

bool isBadVersion(int n) 
{  
    if (n >= 4)
        return(true);
    return(false);
}

int firstBadVersion (int n)
{
    if (n > 231 || n < 1)
        return (84); 
    while (n >= 1) {
        if (isBadVersion(n) == false) {
            printf("%d\n", n + 1);
            return (n + 1);
        }
        n--;
    }
    return (0);
}  

int main (int argc, char **argv)
{
     if (argc != 1)
        return (84);
    return (firstBadVersion(n));
}