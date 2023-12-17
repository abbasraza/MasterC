#include <stdio.h>
#include <string.h>

void  print_substr(char * substr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", substr[i]);
    }
    printf("\n");
}

int  find_and_print_index_of_anagram(char *substr, int start, int end, char * p)
{
    int found = 0;
    for ( int j = 0; j < strlen(p); j++)
    {
        found = 0;
        for (int i = start; i < end; i++)
        {
            if (p[j] == substr[i])
                found = 1;
        }
        if (found == 0)
            return 0;
    }
    printf("anagram found at index %d\n", start);
    return 1;
}

void print_indexes_of_anagrams(char * str, char * p)
{
    int size = strlen(p);

    for (int i = 0; i < strlen(str); i++)
    {

        if (i >= size - 1)
        {
            find_and_print_index_of_anagram(str, i - size + 1, i + 1, p);
        }
    }
}

int main() {
    char * str = "eidbaaoo";
    char * p = "ab";
    print_indexes_of_anagrams(str, p);


    return 0;
}
