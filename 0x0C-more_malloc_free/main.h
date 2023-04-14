#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int *mul(int num1, int num2);

#endif /* MAIN_H */
