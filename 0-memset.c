#include "main.h"
/*
 * _memset - function that fills memory with a constant byte. 
 * @char, char, unsigned int.
 * return char.
*/
char *_memset(char *s, char b, unsigned int n){
    for(unsigned int i = 0; i < n; i++){
        s[i] = b;
    }
    return s; 
}