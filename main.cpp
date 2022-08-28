#include <stdio.h>
#include "my_string.h"
#include <string.h>
int main()
{
    char s[] = "Abbbsd";
    char s1[] = "Cacac";


    printf("%s\n", strncpy(s, s1, 6));
    printf("%s\n", my_strncpy(s, s1, 6));


}


