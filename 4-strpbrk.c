#include "main.h"
#include <stddef.h>
/*
 * _strpbrk - function that searches a string for any of a set of bytes. 
 * @char, char
 * return char or NULL.
*/
char *_strpbrk(char *s, char *accept){
    char *cpy = accept; 
    for(unsigned int i = 0; s[i] != '\0'; i++){
        for(unsigned int j = 0; cpy[j] != '\0'; j++){
            if(s[i] == cpy[j]){
                return &s[i]; 
            }
        }
    }
    return NULL; 
}