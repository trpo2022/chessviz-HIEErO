#include "chess.h"
#include <stdio.h>

int* find_figure(char* input_string, int* pos)
{
    int column = input_string[0] - '0' - 48;
    int row = input_string[1] - '0';
    row = 8 - row;

    pos[0] = row;
    pos[1] = column;

    return pos;
}