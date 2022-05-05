#pragma once
#define n 9
#define str 18

int* find_figure(char* input_string, int* pos);
int check_mate(char* input_string);
int move(int* from_, int* to_, int fl, char board[n][n]);