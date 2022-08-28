#ifndef MY_STRING_H
#define MY_STRING_H

int my_puts(const char *s);

int my_strlen(char *s);

char *my_strcpy(char *s, char *t);

char *my_strncpy(char *s, char *ct, int n);

char *my_strchr(char *cs, char c);

int my_strcmp(char *s, char *t);

char *my_strcat(char *s, char *ct);

char *my_strncat(char *s, char *t, int n);

#endif