#include "main.h"
/*
 * _strspn - function that gets the length of a prexis substring. 
 * @char, char.
 * return char or NULL.  
*/
unsigned int _strspn(char *s, char *accept){
    int length = 0;
    unsigned int i,j;
    for(i = 0; s[i] != '\0'; i++){
        for(j = 0; accept[j] != '\0'; j++){
             if(s[i] == accept[j]){
                break;  
            }
        }
        if(accept[j] == '\0'){
            return i;
        }
    }
    return i; 
}