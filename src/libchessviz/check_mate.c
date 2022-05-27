#include "chess.h"
#include <stdio.h>

int check_mate(char* input_string)
{
    for (int i = 0; i < str; i++) {
        if (input_string[i] == '#')
            return 1;
    }
    return 0;
}