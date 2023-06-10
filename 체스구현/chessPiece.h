#ifndef __CHESS_PIECE_H__
#define __CHESS_PIECE_H__

#define MAX_PIECE_COUNT 32
//bool 자료형
typedef enum
{
    TRUE = 1,
    FALSE = 0
}Boolean;

//기물의 위치 정보 (X = 열, Y = 행)
typedef struct Position
{
    char X;
    char Y;
} Position;

//기물의 타입
typedef enum
{
    TRASH   = 0,
    PAWN    = 1,
    KNIGHT  = 2,
    BISHOP  = 3,
    ROOK    = 4,
    QUEEN   = 5,
    KING    = 6
} PieceType;

//기물의 팀
typedef enum
{
    NONE    = 0,
    WHITE   = 1,
    BLACK   = 2
} Team;

//기물의 팀, 타입, 위치, 생존정보
typedef struct Piece
{
    unsigned short int number;
    Team team;
    PieceType type;
    Position position;
    Boolean isDead;
    short count;
}Piece;

Piece nonePiece =
{
    31,
    NONE,
    TRASH,
    {'Z', '0'},
    TRUE
};

Piece allPieces[MAX_PIECE_COUNT + 1] =
{
    {
        0,
        WHITE,
        ROOK,
        {'a','1'},
        FALSE,
        0
    },
    {
        1,
        WHITE,
        ROOK,
        {'h','1'},
        FALSE,
        0
    },
    {
        2,
        WHITE,
        KNIGHT,
        {'b','1'},
        FALSE,
        0
    },
    {
        3,
        WHITE,
        KNIGHT,
        {'g','1'},
        FALSE,
        0
    },
    {
        4,
        WHITE,
        BISHOP,
        {'c','1'},
        FALSE,
        0
    },
    {
        5,
        WHITE,
        BISHOP,
        {'f','1'},
        FALSE,
        0
    },
    {
        6,
        WHITE,
        KING,
        {'e','1'},
        FALSE,
        0
    },
    {
        7,
        WHITE,
        QUEEN,
        {'d','1'},
        FALSE,
        0
    },
    {
        8,
        WHITE,
        PAWN,
        {'a','2'},
        FALSE,
        0
    },
    {
        9,
        WHITE,
        PAWN,
        {'b','2'},
        FALSE,
        0
    },
    {
        10,
        WHITE,
        PAWN,
        {'c','2'},
        FALSE,
        0
    },
    {
        11,
        WHITE,
        PAWN,
        {'d','2'},
        FALSE,
        0
    },
    {
        12,
        WHITE,
        PAWN,
        {'e','2'},
        FALSE,
        0
    },
    {
        13,
        WHITE,
        PAWN,
        {'f','2'},
        FALSE,
        0
    },
    {
        14,
        WHITE,
        PAWN,
        {'g','2'},
        FALSE,
        0
    },
    {
        15,
        WHITE,
        PAWN,
        {'h','2'},
        FALSE,
        0
    },
    {
        16,
        BLACK,
        ROOK,
        {'a','8'},
        FALSE,
        0
    },
    {
        17,
        BLACK,
        ROOK,
        {'h','8'},
        FALSE,
        0
    },
    {
        18,
        BLACK,
        KNIGHT,
        {'b','8'},
        FALSE,
        0
    },
    {
        19,
        BLACK,
        KNIGHT,
        {'g','8'},
        FALSE,
        0
    },
    {
        20,
        BLACK,
        BISHOP,
        {'c','8'},
        FALSE,
        0
    },
    {
        21,
        BLACK,
        BISHOP,
        {'f','8'},
        FALSE,
        0
    },
    {
        22,
        BLACK,
        KING,
        {'e','8'},
        FALSE,
        0
    },
    {
        23,
        BLACK,
        QUEEN,
        {'d','8'},
        FALSE,
        0
    },
    {
        24,
        BLACK,
        PAWN,
        {'a','7'},
        FALSE,
        0
    },
    {
        25,
        BLACK,
        PAWN,
        {'b','7'},
        FALSE,
        0
    },
    {
        26,
        BLACK,
        PAWN,
        {'c','7'},
        FALSE,
        0
    },
    {
        27,
        BLACK,
        PAWN,
        {'d','7'},
        FALSE,
        0
    },
    {
        28,
        BLACK,
        PAWN,
        {'e','7'},
        FALSE,
        0
    },
    {
        29,
        BLACK,
        PAWN,
        {'f','7'},
        FALSE,
        0
    },
    {
        30,
        BLACK,
        PAWN,
        {'g','7'},
        FALSE,
        0
    },
    {
        31,
        BLACK,
        PAWN,
        {'h','7'},
        FALSE,
        0
    },
    {
        32,
        NONE,
        TRASH,
        {'Z', '0'},
        TRUE
    }
};

#endif