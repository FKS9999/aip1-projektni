#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // učitavanje prvog sloja labirinta
    char labirintSloj1[15][32] = {
        "#############################",
        "E       #   #               #",
        "#   #####   #####   #####   #",
        "#                   #       #",
        "#   #####################   #",
        "#   #   #               #   #",
        "#####   #   #########       #",
        "#       #   #           #####",
        "#####   # # #   #########   #",
        "#       #   #   #   #       #",
        "# #######       #   #####   #",
        "#       #   #   #       #   #",
        "#    ########   #   #####   #",
        "#                            ",
        "############################>"};

    // učitavanje drugog sloja labirinta
    char labirintSloj2[15][32] = {
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                             ",
        "                           P#",
        "                             "};

    int pozicijaX = 27;
    int pozicijaY = 13;

    while (1)
    {
        system("clear");
        // Ispis oba sloja jedan na drugom
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if (labirintSloj2[i][j] != ' ')
                    putchar(labirintSloj2[i][j]);
                else
                    putchar(labirintSloj1[i][j]);
            }
            putchar('\n');
        }

        char input;
        scanf(" %c", &input);
        int novaX = pozicijaX;
        int novaY = pozicijaY;

        if (input == 'w' || input == 'W')
        {
            novaY--;
        }
        else if (input == 's' || input == 'S')
        {
            novaY++;
        }
        else if (input == 'a' || input == 'A')
        {
            novaX--;
        }
        else if (input == 'd' || input == 'D')
        {
            novaX++;
        }

        if (labirintSloj1[novaY][novaX] != '#')
        {
            labirintSloj2[pozicijaY][pozicijaX] = ' ';
            pozicijaX = novaX;
            pozicijaY = novaY;
            labirintSloj2[pozicijaY][pozicijaX] = 'P';
        }
        if (labirintSloj1[novaY][novaX] == 'E')
        {
            printf("Kraj labirinta, izašo si iz labirinta.");
            break;
        }
    }
}