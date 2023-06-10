#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
	TRUE	= 1,
	FALSE	= 0,
} Boolean;

typedef struct
{
	unsigned char* X;
	unsigned char* Y;
} Position;

typedef enum
{
	NONE	= 0,
	WHITE	= 1,
	BLACK	= 2,

} Side;

typedef struct
{
	/// <summary>
	/// �⹰�� �̸�.
	/// </summary>
	const unsigned char* name;

	/// <summary>
	/// �⹰�� ����
	/// </summary>
	Side side;

	/// <summary>
	/// �⹰�� ���� ��ġ.
	/// </summary>
	Position pos;

	/// <summary>
	/// �⹰�� ��� ����.
	/// </summary>
	Boolean isDead;
} Piece;

#define MAX_PIECE_COUNT 32

static Piece* allPieces[MAX_PIECE_COUNT];

/// <summary>
/// ������ ��ġ ��.
/// </summary>
/// <param name="lhs"></param>
/// <param name="rhs"></param>
/// <returns></returns>
Boolean ComparePosition(Position lhs, Position rhs)
{
	if (lhs.X == rhs.X && lhs.Y == rhs.Y)
		return TRUE;

	return FALSE;
}

/// <summary>
/// �̵��� ���������� ���� ���θ� �����մϴ�.
/// </summary>
/// <param name="nextPos"></param>
/// <returns></returns>
Boolean CheckMoveable(Position nextPos)
{
	for (int idx = 0; idx < MAX_PIECE_COUNT; ++idx)
	{
		if (allPieces[idx]->isDead == TRUE)
			continue;

		if (ComparePosition(allPieces[idx]->pos, nextPos) == TRUE)
			return TRUE;
	}

	return FALSE;
}

void MovePiece(Piece* piece)
{
	Position nextPos;

	//if (CheckMoveable(piece))
}

// E2 P E4
// ù ��°: �⹰�� ���� ��ġ.
// �� ��°: �Է��� ��ȣ�� ���� ù ��°�� ���� ��ġ�� �ش� �⹰�� �ִ� Ȯ��.
// �� ��°: ������ ��� ��ġ�� �̵�.

int main(void)
{

}

