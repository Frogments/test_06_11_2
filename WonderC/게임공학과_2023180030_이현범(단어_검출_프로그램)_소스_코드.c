/*
*	���Ӱ��а� 2023180030 ������
*		[�ܾ� ���� ���α׷�]
*/
#include <stdio.h>
#include <string.h>

// ���� ������.
// ��� �迭�� �ش� ����� ������, �˳��ϰ� 256 ������ ��ҽ��ϴ�.
#define BUFFER_SIZE 256

// ���� ����ü�� ���� ���� ���.
// ���� �б� ����("r")�� ���� ����("w")�̴�.
#define READ_MODE "r"
#define WRITE_MODE "w"

/// <summary>
/// ��, ������ �ǹ��ϴ� ������.
/// </summary>
typedef enum
{
	FALSE	= 0,
	TRUE	= 1,
} BOOL;

/// <summary>
/// �� ���ڿ��� �������� ���մϴ�.
/// ���� 'strcmp()' �Լ��� ����ص� ������. ���� ������ ���ҽ��ϴ�.
/// </summary>
/// <param name="str1">���� ���ڿ�.</param>
/// <param name="str2">���� ���ڿ�.</param>
/// <returns>���� ����.(��: 1, ����: 0)</returns>
enum BOOL compare_word(char* _str1, char* _str2)
{
	// �� ���ڿ��� ���κб��� ��ȯ�մϴ�.
	// ��� �� ���ڿ��� ���� �ٴٸ� ������ �� ���ڿ��� ���մϴ�.
	while (*(_str1) != '\0' || *(_str2) != '\0')
		if (*(_str1++) != *(_str2++))
			return FALSE;

	return TRUE;
}

/// <summary>
/// �ش� ���ڿ�(�ܾ�)�� �ؽ�Ʈ ���� �ȿ� �ִ��� Ȯ���մϴ�.
/// </summary>
/// <param name="word">ã�� ���ڿ�(�ܾ�).</param>
/// <param name="list">ã�� �ؽ�Ʈ ����.</param>
/// <returns></returns>
enum BOOL is_exist(char* _word, FILE* _list)
{
	// �� ���� ó��
	if (!_list)
		return FALSE;

	// �ؽ�Ʈ ���Ϸκ��� ���ڿ��� �о���� ���� ���� ���� �� �ʱ�ȭ.
	char buffer[BUFFER_SIZE] = { NULL };

	// ������ ó������ ������ �����鼭, �ش� ���ڿ��� �ִ��� Ȯ���մϴ�.
	while (fgets(buffer, BUFFER_SIZE, _list))
		if (compare_word(_word, buffer))
			return TRUE;

	return FALSE;
}

/// <summary>
/// ���� ���Ͽ� �ش� �ܾ �ۼ��մϴ�.
/// </summary>
/// <param name="word">������ ���ڿ�(�ܾ�).</param>
/// <param name="dest">���ڿ�(�ܾ�)�� ������ ����.</param>
void write_word(char* _word, FILE* _dest)
{
	// �� ���� ó��
	if (!_dest)
		return;

	// fgets()�� ���� �о�� ���ڿ�(�ܾ�)�� ���� ����('\n')�� �����ϱ� ������ �̸� �����ϰ� ����մϴ�.
	printf("\'%s\'�� �������� �ʴ� ���� Ȯ�εǾ����ϴ�. �ش� �ܾ �߰��մϴ�...\n", strtok(_word, "\n"));
	fputs(_word, _dest);
}

int main(void)
{
	printf("���Ӱ��а� 2023180030 ������ [�ܾ� ���� ���α׷�]\n\n");

	// �ܾ� ����Ʈ ���ϰ� �˻��� �ܾ� ����, ��� ���� ����ü ������ �����մϴ�.
	FILE*	a_file,
		*	b_file,
		*	c_file;

	// ������ �� �� ������, ���� �޼����� �Բ� ���α׷��� �����մϴ�.
	if (!(a_file = fopen("texts/a.txt", READ_MODE)) ||
		!(b_file = fopen("texts/b.txt", READ_MODE))	||
		!(c_file = fopen("texts/c.txt", WRITE_MODE)))
	{
		printf("������ ��ΰ� �߸��Ǿ��ų�, ������ �������� �ʽ��ϴ�.");
		return 0;
	}

	// �˻��� �ܾ� ���Ϸκ��� ���ڿ�(�ܾ�)�� �о���� ���� ���� ���� �� �ʱ�ȭ.
	char buffer[BUFFER_SIZE] = { NULL };

	// �˻��� �ܾ� ������ ���������� ��ȯ�մϴ�.
	// �ܾ� ����Ʈ ���� �ȿ� �˻��� �ܾ ���ԵǾ� �ִ��� �˻��ϰ�, ���ٸ� ��� ���Ͽ� �ش� �ܾ �ۼ��մϴ�.
	while (fgets(buffer, BUFFER_SIZE, b_file))
	{
		if (!is_exist(buffer, a_file))
			write_word(buffer, c_file);

		// �ܾ� ����Ʈ ������ ���� ��ġ�� �� ó������ �ǵ����ϴ�.
		fseek(a_file, 0, SEEK_SET);
	}

	// ���� �ִ� ������ ��� �ݽ��ϴ�.
	fclose(a_file);
	fclose(b_file);
	fclose(c_file);

	return 0;
}