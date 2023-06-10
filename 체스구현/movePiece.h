#ifndef __MOVE_PIECE_H__
#define __MOVE_PIECE_H__

#include <stdio.h>
#include "chessPiece.h"
#include "pieceAlgorithm.h"

Piece movePawn(Piece piece, Position targetPos);
// targetPiece의 기물 타입을 보고 이동 가능 범위 결정
Piece moveRange(Piece targetPiece, Position targetPos)
{
    switch( targetPiece.type )
    {
        case PAWN:
            return movePawn(targetPiece, targetPos);
        /*
        case ROOK:
            return moveRook(targetPiece, targetPos);
        case KNIGHT:
            return moveKnight(targetPiece, targetPos);
        case BISHOP:
            return moveBishop(targetPiece, targetPos);
        case QUEEN:
            return moveQueen(targetPiece, targetPos);
        case KING:
            return moveKing(targetPiece, targetPos);
        */
        default:
            break;
    }
    return movePawn(targetPiece, targetPos);
};

Boolean ComparePosition(Position lhs, Position rhs)
{
	if (lhs.X == rhs.X && lhs.Y == rhs.Y)
		return TRUE;

	return FALSE;
}

// 위치 정보를 받아 그 위치의 기물을 반환
Piece choicePiece(Position pos)
{
    for (int i = 0; i < MAX_PIECE_COUNT; ++i)
    {
        if (allPieces[i].position.X == pos.X &&
            allPieces[i].position.Y == pos.Y &&
            allPieces[i].isDead == FALSE)
            return allPieces[i];
    }
    //그 위치에 기물이 없으면 장애기물 반환
    return allPieces[MAX_PIECE_COUNT];
}

Piece movePiece(Piece piece,Position curPos, Position targetPos)
{
    piece = moveRange(piece,targetPos);
    return piece;
};

#endif