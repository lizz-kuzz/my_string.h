#include <stdio.h>
#include "my_string.h"

int my_puts(const char *s)
{
    if (s == NULL)
        return EOF;

    for (int i = 0; ; i++)
    {
        if (s[i] == '\0')
        {
            printf("\n"); 
            return 1;
        }
        putchar(s[i++]); 
    }
}

int my_strlen(char *s)
{
    char* s_cur = s;
    while (*s_cur++ != '\0') continue;

    return s_cur - s;
}

char *my_strcpy(char *s, char *t) 
{
    char *s_save = s;
    while (t != '\0')
    {
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';

    return s_save; 
}

int my_strcmp(char *s, char *t) 
{
    while (*t != '\0' && *s != '\0')
    {
        if (*s == *t)
        {
            t++;
            s++;
        }
        else 
            break;
    }
    return (*s - *t);
}

char *my_strchr(char *cs, char c)
{
    char *search_c = NULL;
    while (*cs != '\0')
    {
        if (*cs == c)
        {
            search_c = cs;
            break;
        }
        else 
            cs++;
    }
    return search_c;
}

char *my_strncpy(char *s, char *ct, int n)
{
    char *s_save = s;
    for (int i = 0; i <= n; i++)
    {
        while ( ct != '\0')
        {
            *s = *ct;
            ct++;
            s++;
        }
    }
    // *s = '\0';
    return s_save; 
}
// TODO: разобраться с этим и понять 
// // копирует не более n символов строки ct в s; возвращает s. Дополняет
// // результат символами '\0', если символов в ct меньше n

char *my_strcat(char *s, char *ct) 
{
    char *s_save = s;
    int len_s = my_strlen(s);
    s += len_s;
    while (*ct != '\0')
    {
        *s = *ct;
        s++; 
        ct++;
    }
    return s_save; 
}

char *my_strncat(char *s, char *t, int n)
{
    char *s_save = s;
    int len_s = my_strlen(s);
    s += len_s;
    for (int i = 0; i <= n; i++)
    {
        while (*t != '\0')
        {
            *s = *t;
            s++;     
            t++;
        }
    }
    return s_save; 
}