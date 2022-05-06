#include "chess.h"
#include <stdio.h>

int move(int* from_, int* to_, int fl, char board[n][n])
{
    char input_string[str];
    scanf("%s", input_string);

    if (input_string[0] == '1' || input_string[0] == '2'
        || input_string[0] == '3' || input_string[0] == '4'
        || input_string[0] == '5' || input_string[0] == '6'
        || input_string[0] == '7' || input_string[0] == '8'
        || input_string[0] == '9') {
        return -1;
    }
    for (int i = 0; i < str; i += 2) {
        char first_part[2];
        char last_part[2];

        if (input_string[i] == 'K' || input_string[i] == 'Q'
            || input_string[i] == 'B' || input_string[i] == 'R'
            || input_string[i] == 'N') {
            i++;
            if (input_string[i] != '-') {
                first_part[0] = input_string[i];
                first_part[1] = input_string[i + 1];
                find_figure(first_part, from_);

            } else if (input_string[i] == '-') {
                last_part[0] = input_string[i + 1];
                last_part[1] = input_string[i + 2];
                find_figure(last_part, to_);
                fl = check_mate(input_string);
                break;
            }
        } else {
            if (input_string[i] != '-') {
                first_part[0] = input_string[i];
                first_part[1] = input_string[i + 1];
                find_figure(first_part, from_);

            } else if (input_string[i] == '-') {
                last_part[0] = input_string[i + 1];
                last_part[1] = input_string[i + 2];
                find_figure(last_part, to_);
                fl = check_mate(input_string);
                break;
            }
        }
    }

    if (to_[0] != 8 && from_[0] != 8 && to_[1] != 0 && from_[1] != 0) {
        board[to_[0]][to_[1]] = board[from_[0]][from_[1]];
        board[from_[0]][from_[1]] = ' ';
    } else {
        return -1;
    }
    return fl;
}
