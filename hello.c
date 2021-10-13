#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main(int argc, char *argv[])
{
    int array[ARRAY_SIZE];
    int input;
    int count = 0;
    int condition = 1;

    printf("%d\n", ARRAY_SIZE);

    do
    {
        printf("Kerem adjon meg egy egesz szamot!\n\n");
        scanf("%d", &input);

        if (input >= 0)
        {
            array[count] = input;
            count++;
            if (count == ARRAY_SIZE)
                condition = 0;
        }
        else
        {
            condition = 0;
        }
        
    } while (condition);

    for (int i = 0; i < count; i++)
    {
        printf("%d. elem %d\n", i + 1, array[i]);
    }

    return 0;
}