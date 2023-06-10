#ifndef __PRINT_PIECE_H__
#define __PRINT_PIECE_H__

#include <stdio.h>
#include "chessPiece.h"
#include "movePiece.h"
/*
    PAWN    = 1,
    KNIGHT  = 2,
    BISHOP  = 3,
    ROOK    = 4,
    QUEEN   = 5,
    KING    = 6
*/

const char* piece_image(Piece piece)
{
    if (piece.team == WHITE)
    {
        switch (piece.type)
        {
            case NONE: return "N";
            case PAWN: return "♙";
            case KNIGHT: return "♘";
            case BISHOP: return "♗";
            case ROOK: return "♖";
            case QUEEN: return "♕";
            case KING: return "♔";
            default: return "X";
        }
    }
    else if (piece.team == BLACK)
    {
        switch (piece.type)
        {
            case NONE: return "N";
            case PAWN: return "♟";
            case KNIGHT: return "♞";
            case BISHOP: return "♝";
            case ROOK: return "♜";
            case QUEEN: return "♛";
            case KING: return "♚";
            default: return "X";
        }
    }
    return "X";
};

void print_piece()
{
    Position position;
    for (char i = '8'; i >= '1'; --i)
    {
        position.Y = i;
        printf("%d | ", i-48);
        for (char j = 'a'; j <= 'h'; j++)
        {
            position.X = j;
            if (choicePiece(position).isDead == FALSE) 
            {
                printf("%s ", piece_image(choicePiece(position)));
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("    ---------------\n");
    printf("    a b c d e f g h\n");
}

#endif