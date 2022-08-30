#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"

int my_puts(const char *s)
{
    if (s == NULL)
        return EOF;

    for (int i = 0; s[i] != '\0'; ++i) 
        putchar(s[i++]);

    printf("\n");
    return 1;    
}

int my_strlen(char *s)
{
    char* s_cur = s;
    while (*s_cur++ != '\0') continue;

    return s_cur - s;
}


int my_strcmp(char *s, char *t) 
{
    for (; (*t != '\0' && *s != '\0') && *s == *t; ++s, ++t) continue;

    return *s - *t;
}

char *my_strchr(char *cs, char c)
{
    while (*cs++ != '\0')
    {
        if (*cs == c)
            return cs;
    }
    return NULL;
}

char *my_strcpy(char *s, char *t) 
{
    char *s_save = s;
    for (;(*s = *t) != '\0'; s++, t++) continue;

    return s_save; 
}

char *my_strncpy(char *s, char *ct, int n)
{
    char *s_save = s; //занулить оставшиеся после н символов
    int len = my_strlen(s) - n;

    for (; n > 0 && *ct != '\0'; n--, s++, ct++) 
        *s = *ct;

    for (; len > 0 && *s != '\0'; len--, s++)
        *s = '\0';
    return s_save; 
}


char *my_strcat(char *s, char *ct) 
{
    char *s_save = s;

    s +=  my_strlen(s);

    while (*ct != '\0')
        *s++ = *ct++;

    return s_save; 
}

char *my_strncat(char *s, char *t, int n)
{
    char *s_save = s;
   
    s += my_strlen(s);

    for (int i = 0; i <= n && *t != '\0'; i++, s++, t++)
        *s = *t;

    return s_save; 
}

char *my_strdup(char *s)
{
    char *s_save = (char *) malloc(my_strlen(s) + 1);

    if (s_save != NULL)
        s_save = my_strcpy(s_save, s);

    return s_save;

}

char *my_fgets(char *s, int n, FILE *p)
{
    char *s_save = s;
    int count = 0;
    n -= 1;

    while (count != n)
        {
            *s =(char) getc(p);
            count++;
            s++;

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
    
    for (len = 0; (c = getchar()) != '\0' && len != lim - 1 && c != EOF; len++)
    {
        s[len] = (char) c;
        if (c == '\n')
            break;
    }
    return len;
}