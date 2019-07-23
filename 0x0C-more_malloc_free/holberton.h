#ifndef _HOLBERTON_H
#define _HOLBERTON_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void printerr(char *s);
int length(char *str);
void is_zero(char **args);

#endif