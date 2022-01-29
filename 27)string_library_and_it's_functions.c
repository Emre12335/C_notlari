/* <stdio.> functions
A formatted string can be created with the sprintf() function.
This is useful for building a string from other data types.
*/

/*
Another useful function is sscanf() for scanning a string for values.
The function reads values from a string and stores them at the corresponding variable addresses.
*/

/*
int atoi(str) Stands for ASCII to integer.
Converts str to the equivalent int value. 0 is returned 
if the first character is not a number or no numbers are encountered.
double atof(str) Stands for ASCII to float.
Converts str to the equivalent double value. 0.0 is returned
if the first character is not a number or no numbers are encountered.
long int atol(str) Stands for ASCII to long int.
Converts str to the equivalent long integer value.
0 is returned if the first character is not a number or no numbers are encountered.
*/

/* <string.h> functions
strlen(str) Returns the length of the string stored in str, not including the NULL character.
strcat(str1, str2) Appends (concatenates) str2 to the end of str1 and returns a pointer to str1.
strcpy(str1, str2) Copies str2 to str1. This function is useful for assigning a string a new value.
strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.
strncpy(str1, str2, n) Copies the first n characters of str2 to str1.
strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.
strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.
strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.
*/
