#include <stdio.h>

void reverseName(char name[], int start, int end)
{
    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    char name[] = "Marconi";
    int nameLength = sizeof(name) / sizeof(name[0]);
    printf("%s\n", name);
    reverseName(name, 0, nameLength - 2);
    printf("%s\n", name);
}
