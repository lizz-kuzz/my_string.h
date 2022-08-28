#include <stdio.h>
#include "my_string.h"
#include <string.h>
int main()
{
    char s[] = "Abbbsd";
    char s1[] = "Cacac";

    //strncpy(s, s1, 2);

    printf("%s\n", strncpy(s, s1, 4));
    printf("%s\n", my_strncpy(s, s1, 4));
}

// копирует не более n символов строки ct в s; возвращает s. Дополняет
// результат символами '\0', если символов в ct меньше n
