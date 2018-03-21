#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h> 


void read_world(char world_array[10][10]); 
void print_world(char world_array[10][10]); 



int main(void) {
	char world_ar[10][10];

	
	read_world(world_ar); 
	print_world(world_ar); 


	return 0; 
}

void read_world(char world_array[10][10]) {
	int row; 
	int col; 

	FILE *inp; 
	inp = fopen("world.txt", "r"); 

	for (row = 0; row < 10; row++) {
		for (col = 0; col < 10; col++) {
			fscanf(inp, "%c", &world_array[row][col]);
		}
	}
	fclose(inp);
}

void print_world(char world_array[10][10]) {
	int i = 0; 
	int j = 0; 

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf(" %c", world_array[i][j]); 
		}
		 
	}
	
}
