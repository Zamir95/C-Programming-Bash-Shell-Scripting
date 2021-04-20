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
	
	
	while (repeat) {
		scanf(" %c", &command);
		
		if (command == 'u') {
			for (row = 0; row < size; row++) {
				for (col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (x >= 1 && y <= 3) {
				temp[x][y] = mat[x-1][y];
				temp[x-1][y] = mat[x][y];
				
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						if (row == (x-1) && col == y) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				x--;
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'd') {
			for (row = 0; row < size; row++) {
				for (col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (x >= 0 && y <= 2) {
				temp[x][y] = mat[x+1][y];
				temp[x+1][y] = mat[x][y];
				
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						if (row == (x+1) && col == y) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				x++;
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'l') {
			for (row = 0; row < size; row++) {
				for (col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (y >= 1 && y <= 3) {
				temp[x][y] = mat[x][y-1];
				temp[x][y-1] = mat[x][y];
				
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						if (row == x && col == (y-1)) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				y--;
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'r') {
			for (row = 0; row < size; row++) {
				for (col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (y >= 0 && y <= 2) {
				temp[x][y] = mat[x][y+2];
				temp[x][y+1] = mat[x][y];
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						if (row == x && col == (y+1)) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				y++;
				
				for (row = 0; row < size; row++) {
					for (col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'q') {
			break;
		}
		
		else {
			printf("No such command\n");
		}
	}
	return 0;
}


