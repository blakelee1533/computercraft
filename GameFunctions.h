#include <stdio.h>

char board[30][30];
int drawBoard()
{
	
	//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	int x = 0; int y = 0;
	//printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n")
	printf("Hello");
	return 0;
}
int buildBoard()
{
	int x = 0; int y = 0;
	for (x = 0; x < 30; x++)
	{
		for (y = 0; y < 30; y++)
		{
			board[x][y] == 32;
			if (x==0 || x==29)
				board[x][y] = 35;
			if (y==0 || y==29)
				board[x][y] = 35;
			
		}
	}
	return 0;
}

int main()
{
	buildBoard();
	printBoard();
	return 0;
}