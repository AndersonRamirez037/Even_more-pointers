#include "main.h"
/*
 * _memcpy - function that copies memoroy area.
 * @char, char unsigned int 
 * return char.
*/
char *_memcpy(char *dest, char *src, unsigned int n){
    char *dest_copy = dest;
    char *src_copy = src;
    for(unsigned int i = 0; i < n; i++){
        dest_copy[i] = src_copy[i];
    }
    return dest;
}