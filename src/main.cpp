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
    if (res != NULL) printf("%s\n", res);
    else printf("Substr not found!\n");


    return 0;
}
