#include <ctest.h>
#include <libchessviz/chess.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(chess_suit, test_check_mate)
{
    int result;
    const int exp = 1;
    result = check_mate("#");
    ASSERT_EQUAL(exp, result);
}

CTEST(chess_suit, test_check_mate2)
{
    int result;
    const int exp = 0;
    result = check_mate("1");
    ASSERT_EQUAL(exp, result);
}

CTEST(chess_suit, test_find_figure)
{
    int exp = 6;
    char input_string[2] = {'e', '2'};
    int pos[2];
    find_figure(input_string, pos);
    int result = pos[0];
    ASSERT_EQUAL(exp, result);
}

CTEST(chess_suit, test_find_figure2)
{
    int exp = 4;
    char input_string[2] = {'e', '4'};
    int pos[1];
    find_figure(input_string, pos);
    int result = pos[0];
    ASSERT_EQUAL(exp, result);
}
