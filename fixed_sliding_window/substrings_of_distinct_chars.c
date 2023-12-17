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

int  distinct_chars_found(int map[], int size)
{
    int distinct_chars = 0;
    for (int i = 0; i < 27; i++)
    {
        if (map[i] == 1)
        {
            distinct_chars++;
        }
        else if (map[i] != 0)
        {
            return 0;
        }
    }

    if (distinct_chars == size)
    {
        return 1;
    }

    return 0;

}

void distinct_substrings_of_size(char * str, int size)
{
    int chars_bits = 0;
    int total_substrs_distinct_chars = 0;
    int map[27] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        map[str[i] - 'a']++;

        if (i >= size - 1)
        {
            if (i > size - 1)
                map[str[i - size] - 'a']--;

            if (distinct_chars_found(map, size))
            {
                char * substr = (char *)(str + (i - size + 1));
                print_substr(substr, size);
                total_substrs_distinct_chars++;
            }
        }
    }
    printf("num_of_subarrays :%d\n", total_substrs_distinct_chars);
}

int main() {
    char * str = "havefunonleetcode";
    // char * str = "xyzzaz";

    int size = 5;
    distinct_substrings_of_size(str, size);


    return 0;
}
