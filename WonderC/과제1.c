#include <stdio.h>
#include <string.h>

int main() {

	FILE* a = fopen("a.txt", "r");
	FILE* b = fopen("b.txt", "r");
	FILE* c = fopen("c.txt", "w");
	char stra[100];
	char strb[100];

	if (a == NULL || b == NULL || c == NULL)
		return -1;

	while ( fgets(strb, 100, b) != NULL) //elephant
	{
		int cnt = 1;
		rewind(a);

		while (fgets(stra, 100, a) != NULL)
		{ 
			if (strcmp(stra, strb) == 0)
			{
				cnt = 0;
				break;
			}
		}
		
		if (cnt)
			fputs(strb, c);
	}

	fclose(a);
	fclose(b);
	fclose(c);
}