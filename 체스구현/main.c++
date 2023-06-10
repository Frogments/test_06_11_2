#include <stdio.h>
#include <string.h>
#include "chessPiece.h"
#include "movePiece.h"
#include "pieceAlgorithm.h"
#include "printPiece.h"

int main()
{
    Piece piece;
    Position curPos;
    Position targetPos;
    for(int i = 0; i < 100; i++)
    {
        print_piece();
        printf("\n기물 이동 정보 입력: ");
                          // a              2               a           3
        scanf("%c%c%c%c", &(curPos.X), &(curPos.Y), &(targetPos.X), &(targetPos.Y));
        while(getchar() != '\n');
                            //a2 // a3
        piece = choicePiece(curPos);
                                            // a2P   a2      a3
        allPieces[piece.number] = movePiece(piece,curPos, targetPos);
    }
}
// 움직이는 입력을 받으면 화면 지우고 움직인 행동화면 보여주기