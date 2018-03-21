#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
char board[30][30];
int drawBoard()
{
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	int x = 0; int y = 0;
	for (y = 0; y < 30; y++)
	{
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", board[0][y], board[1][y], board[2][y], board[3][y], board[4][y], board[5][y], board[6][y], board[7][y], board[8][y], board[9][y], board[10][y], board[11][y], board[12][y], board[13][y], board[14][y], board[15][y], board[16][y], board[17][y], board[18][y], board[19][y], board[20][y], board[21][y], board[22][y], board[23][y], board[24][y], board[25][y], board[26][y], board[27][y], board[28][y], board[29][y]);
	} 
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
int pos = 0;
buildBoard();
drawBoard();
for (pos = 1; pos < 29; pos++)
	{
		if (pos > 1)
		{
			board[20][pos] = '@';
			board[20][pos - 1] = ' ';
		
		}
		else if (pos == 1)
			board[20][pos] = '@';
		sleep(1);
		drawBoard();
	}
	return 0;
}
















