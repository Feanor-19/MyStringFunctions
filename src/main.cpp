#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int main()
{

    char str[100];
    char sub_str[50];

    scanf("%s %s", str, sub_str);

    const char *res = my_strstr2(str, sub_str);
    if (res != NULL) printf("%d\n", res - str);
    else printf("Substr not found!\n");


    /*
    char str[100];
    char c = '\0';

    scanf("%s %c", str, &c);

    char *str_end = my_strchr(str, '\0');

    if ( my_strrchr(str, c) == NULL ) printf("No\n");
    else printf("%d\n",  str_end - my_strrchr(str, c));
    */

    return 0;
}
