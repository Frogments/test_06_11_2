#ifndef __SET_PIECE_H__
#define __SET_PIECE_H__

#include "chess_piece.h"
#include <stdio.h>
#include <string.h>
/*
8 | _R _B _N _Q _K _N _B _R
7 | _P _P _P _P _P _P _P _P
6 | __ __ __ __ __ __ __ __
5 | __ __ __ __ __ __ __ __
4 | __ __ __ __ __ __ __ __
3 | __ __ __ __ __ __ __ __
2 | _P _P _P _P _P _P _P _P
1 | _R _B _N _Q _K _N _B _P
   -------------------------
    A  B  C  D  E  F  G  H
*/
/*
void print_chess_board(void)
{
    int i, j;
    int line = 8;
    char check[3] = {'0','0','\0'};
    for (i = '8'; i >= '1'; i--)
    {
        printf("%d | ", line--);
        for (j = 'a'; j <= 'h';j++)
        {
            check[0] = j;
            check[1] = i;
            if (!strcmp(check, white_Bishop_1.position)) printf("%s  ", white_Bishop_1.name);
            else if (!strcmp(check, white_Bishop_2.position)) printf("%s  ", white_Bishop_2.name);
            else if (!strcmp(check, white_Rook_1.position)) printf("%s  ", white_Rook_1.name);
            else if (!strcmp(check, white_Rook_2.position)) printf("%s  ", white_Rook_2.name);
            else if (!strcmp(check, white_Knight_1.position)) printf("%s  ", white_Knight_1.name);
            else if (!strcmp(check, white_Knight_2.position)) printf("%s  ", white_Knight_2.name);
            else if (!strcmp(check, white_King.position)) printf("%s  ", white_King.name);
            else if (!strcmp(check, white_Queen.position)) printf("%s  ", white_Queen.name);
            else if (!strcmp(check, white_pawn_1.position)) printf("%s  ", white_pawn_1.name);
            else if (!strcmp(check, white_pawn_2.position)) printf("%s  ", white_pawn_2.name);
            else if (!strcmp(check, white_pawn_3.position))printf("%s  ", white_pawn_3.name);
            else if (!strcmp(check, white_pawn_4.position)) printf("%s  ", white_pawn_4.name);
            else if (!strcmp(check, white_pawn_5.position)) printf("%s  ", white_pawn_5.name);
            else if (!strcmp(check, white_pawn_6.position)) printf("%s  ", white_pawn_6.name);
            else if (!strcmp(check, white_pawn_7.position)) printf("%s  ", white_pawn_7.name);
            else if (!strcmp(check, white_pawn_8.position)) printf("%s  ", white_pawn_8.name);
            else if (!strcmp(check, black_Bishop_1.position)) printf("%s  ", black_Bishop_1.name);
            else if (!strcmp(check, black_Bishop_2.position)) printf("%s  ", black_Bishop_2.name);
            else if (!strcmp(check, black_Rook_1.position)) printf("%s  ", black_Rook_1.name);
            else if (!strcmp(check, black_Rook_2.position)) printf("%s  ", black_Rook_2.name);
            else if (!strcmp(check, black_Knight_1.position)) printf("%s  ", black_Knight_1.name);
            else if (!strcmp(check, black_Knight_2.position)) printf("%s  ", black_Knight_2.name);
            else if (!strcmp(check, black_pawn_1.position)) printf("%s  ", black_pawn_1.name);
            else if (!strcmp(check, black_pawn_2.position)) printf("%s  ", black_pawn_2.name);
            else if (!strcmp(check, black_pawn_3.position)) printf("%s  ", black_pawn_3.name);
            else if (!strcmp(check, black_pawn_4.position)) printf("%s  ", black_pawn_4.name);
            else if (!strcmp(check, black_pawn_5.position)) printf("%s  ", black_pawn_5.name);
            else if (!strcmp(check, black_pawn_6.position)) printf("%s  ", black_pawn_6.name);
            else if (!strcmp(check, black_pawn_7.position)) printf("%s  ", black_pawn_7.name);
            else if (!strcmp(check, black_pawn_8.position)) printf("%s  ", black_pawn_8.name);
            else if (!strcmp(check, black_King.position)) printf("%s  ", black_King.name);
            else if (!strcmp(check, black_Queen.position)) printf("%s  ", black_Queen.name);
        }
        printf("\n");
    }
    line = 8;
    printf("   ------------------------\n    A  B  C  D  E  F  G  H\n");
}
*/
int move_chess_piece(char* pieceInfo, char* moveX, char* moveY)
{
    pieceInfo[0] = *moveX;
    pieceInfo[1] = *moveY;
}

void get_move_input()
{
    static int count = 0;
    count++;
    char input[4];
    scanf("%s", input);
    //움직일 기물의 정보를 따와서 넣어야 됨
    if (input[0] == 'P') move_chess_piece(&input[1], &input[2]);
}

#endif