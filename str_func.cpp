#include <stdio.h>
#include <stdlib.h>
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

char *my_strcpy(char *s, char *t) 
{
    char *s_save = s;
    while (*t != '\0')
    {
        *s = *t;
        t++;
        s++;
    }
    *s = '\0';

    return s_save; 
}

char *my_strncpy(char *s, char *ct, int n)
{
    char *s_save = s;

    for (int i = 0; i < n && *ct != '\0'; i++)
    {
        *s = *ct;
        s++;
        ct++;
    }
    return s_save; 
}


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

char *my_strdup(char *s)
{
    char *s_save;

    s_save = (char *) malloc(my_strlen(s) + 1);

    if (s_save != NULL)
        s_save = my_strcpy(s_save, s);

    return s_save;

}

char *my_fgets(char *s, int n, FILE *p)
{
    char *s_save = s;
    int count = 0, c = 0;
    while (count != n - 1)
        {
            c = getc(p);
            *s = c;
            count++;
            s++;
            c++;

            if (*s == '\n' || *s == EOF)
                return NULL;
        } 
    *s = '\0'; 
    return s_save;
}

int my_getline(char s[], int lim)
{
    int c = 0;
    int len = 0;
    
    c = getchar();
    while (c != '\0' && len != lim - 1 && c != EOF)
    {
        s[len] = c;
        len++;
        if (c == '\n')
            break;
        c = getchar();
    }
    return len;
}
