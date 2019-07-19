#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
int _strlen(char *s);
int _putchar(char c);
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
#endif
