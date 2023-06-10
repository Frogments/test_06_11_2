#ifndef __PIECE_ALGORITHM_H__
#define __PIECE_ALGORITHM_H__

#include "chessPiece.h"
#include "movePiece.h"

Piece choicePiece(Position pos);

//입력 예시 : a2 a4 하면 a2의 폰을 a4로(이동 가능할 경우)
                    //  a2Pawn             a3
Piece movePawn(Piece piece, Position targetPos)
{
    if (piece.team == WHITE)
    {
        //같은 열일 때
        if (targetPos.X == piece.position.X)
        {
            Position checkPiece =
            {
                piece.position.X, // a
                piece.position.Y += 1  // 3
            };
            //처음에 두 칸 이동할 경우 그 앞의 두 칸에 기물이 없어야 함
            if (piece.count == 0 && targetPos.Y == '4' 
                && (choicePiece(checkPiece).isDead) == TRUE)
            {   
                checkPiece.Y += 1;
                if ((choicePiece(checkPiece).isDead) == TRUE)
                {
                    piece.count = 1;
                    piece.position.Y += 1;
                    return piece;
                }
            }
            //한 칸 이동할 경우 앞의 기물만 없으면 이동 가능
            else if (targetPos.Y == piece.position.Y + 1 
                    && choicePiece(checkPiece).isDead == true)
            {
                piece.count = 1;
                piece.position = targetPos;
                return piece;
            }
        }
        //대각선 이동으로 적 기물을 잡으려할 때
        else if ((targetPos.X - piece.position.X == 1 || targetPos.X - piece.position.X == -1 )
                && targetPos.Y == piece.position.Y + 1)
        {
            Position checkPiece =
            {
                targetPos.X,
                targetPos.Y
            };
            Piece enemy = choicePiece(checkPiece);
            if (enemy.isDead == FALSE && enemy.team == BLACK)
            {
                enemy.isDead = TRUE;
                piece.position.X += 1;
                piece.position.Y += 1;
                piece.count = 1;
                return piece;
            }
        }
    }
    else if (piece.team == BLACK)
    {
        //같은 열일 때
        if (targetPos.X == piece.position.X)
        {
            Position checkPiece =
            {
                targetPos.X,
                targetPos.Y -= 1
            };
            //처음에 두 칸 이동할 경우 그 두 칸 사이에 기물이 없어야 함
            if (piece.count == 0 && targetPos.Y == '5' 
                && (choicePiece(checkPiece).isDead) == TRUE)
            {   
                checkPiece.Y -= 1;
                if (choicePiece(checkPiece).isDead == TRUE)
                {
                    piece.count = 1;
                    piece.position.Y -= 1;
                    return piece;
                }
            }
            //한 칸 이동할 경우 앞의 기물만 없으면 이동 가능
            else if (targetPos.Y == piece.position.Y - 1 
                    && choicePiece(checkPiece).isDead == true)
            {
                piece.count = 1;
                return piece;
            }
        }
        //대각선 이동으로 적 기물을 잡으려할 때
        else if ((targetPos.X - piece.position.X == 1 || targetPos.X - piece.position.X == -1 )
                && targetPos.Y == piece.position.Y + 1)
        {
            Position checkPiece =
            {
                targetPos.X,
                targetPos.Y
            };
            Piece enemy = choicePiece(checkPiece);
            if (enemy.isDead == FALSE && enemy.team == BLACK)
            {
                enemy.isDead = TRUE;
                piece.position.X += 1;
                piece.position.Y += 1;
                piece.count = 1;
                return piece;
            }
        }
    }
    return allPieces[MAX_PIECE_COUNT];
};
/*
Position moveRook(Piece* piece, Position* targetPos)
{
    
};

Position moveKnight(Piece* piece, Position* targetPos)
{
    
};

Position moveBishop(Piece* piece, Position* targetPos)
{
    
};

Position moveQueen(Piece* piece, Position* targetPos)
{
    
};

Position moveKing(Piece* piece, Position* targetPos)
{

};
*/
#endif