#include <stdio.h>

int main(){
	int x, y;
	int size = 4;
	char command;
	int repeat = 1;
	
	scanf("%d %d", &x, &y);
	
	int mat[size][size];
	int temp[size][size];
	
	int row, col;
	for (row = 0; row < size; row++) {
		for (col = 0; col < size; col++) {
			if (row == x && col == y) {
				mat[row][col] = 0;
			}			
			else {
				scanf("%d", &mat[row][col]);
			}
		}
	}
	
	for (row = 0; row < size; row++) {
		for (col = 0; col < size; col++) {
			if (row == x && col == y) {
				printf("    ");
			}
			else {
				printf("%-4d", mat[row][col]);
			}
		}
		printf("\n");
	}
	return 0;
}


