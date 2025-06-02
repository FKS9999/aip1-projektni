#include <stdio.h>

int main()
{
    // učitavanje prvog sloja labirinta
    char labirintSloj1[15][32] = {
        "#############################",
        "E        #   #              #",
        "#   # # #   # # #   # # #   #",
        "#                   #       #",
        "#   #   ##### # # # # # #   #",
        "#   #   #               #   #",
        "# # #   #   # # # # #       #",
        "#       #   #           #   #",
        "# # #   # # #   # # # # #   #",
        "#       #   #   #   #       #",
        "# # #####       #   # # #   #",
        "#       #   #   #       #   #",
        "#    ## # # #   #   # # #   #",
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
}