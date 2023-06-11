#include "C:\headers\rstypes.h"
#include <stdio.h>
#include <stdlib.h>

#define UNKNOWN_VALUE 0

struct square;
struct region;

struct position{u8 x, y;};
struct square
{
	struct position;
	u8 value;
	u8 predictions[10];
	struct region *region;
};
struct region
{
	struct square *array;
	u8 size;
	u8 value;
};
struct
{
	struct square board[9][9];
	struct region *array;
	u8 size;
}main_board;

void initialize_board();
void print_board();
void add_region(position *array, u8 size, u8 value);

int main()
{
	printf("###################\n");
	print_board();
	initialize_board();
	printf("###################\n");
	print_board();
	main_board.board[0][0].value = 3;
	printf("###################\n");
	print_board();
	printf("###################\n");
	return 727;
}
void initialize_board()
{
	main_board.size = 0;
	for(u8 i = 0; i < 9; i++)
		for(u8 j = 0; j < 9; j++)
		{
			main_board.board[i][j].x = i;
			main_board.board[i][j].y = j;
			main_board.board[i][j].value = UNKNOWN_VALUE;
			main_board.board[i][j].region = NULL;
			for(u8 k = 0; k <= 9; k++)
				main_board.board[i][j].predictions[k] = true;
		}
}
void print_board()
{
	for(u8 i = 0; i < 9; i++)
	{
		for(u8 j = 0; j < 9; j++)
			printf(" %hhu", main_board.board[i][j].value);		
		putc('\n', stdout);
	}
}
void add_region(position *array, u8 size, u8 value)
{
	
}