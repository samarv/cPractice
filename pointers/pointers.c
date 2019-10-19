#include <stdio.h>
#include <strings.h>

/*
    Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
void string_copy(char *x, char *y)
{
    int len = strlen(y);
    for (int i = 0; i < len; i++)
    {
        x[i] = y[i];
    }
}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            return &c;
        }
        i++;
    }
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{
    int len = strlen(haystack);
    int nlen = strlen(needle);
    int *lastAdd;
    for (int i = 0; i < nlen; i++)
    {
        char *lastAdd = find_char(haystack, needle[i]);
        printf("%c\n", lastAdd);
    }
    return find_char(haystack, needle[0]);
}

#ifndef TESTING
int main(void)
{
    char buffer[7];
    string_copy(buffer, "Hello!");
    printf("%s\n", buffer); // Prints "Hello!"
    char *found_char = find_char("hello", 'e');
    printf("Found char: %c\n", *found_char);
    char *found_string = find_string("world", "or");

    printf("Found string: %s\n", found_string);

    return 0;
}
#endif
