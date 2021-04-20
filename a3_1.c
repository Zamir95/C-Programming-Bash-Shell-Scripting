#include <stdio.h>
int main() {

	int size;
	scanf("%d", &size);
	
	int in[size][size];

	int x, y;
	for (x=0; x<size; ++x) {
		for (y=0; y<size; ++y) {		
			scanf("%d", &in[x][y]);
		}
	}

	int i, j, k;
	for (i=0; i<size; ++i) {
		for (j=0; j<size; ++j) {
			if (in[i][j] == 1) {
				for (k=0; k<size; ++k) {
					if (in[i][k] == 0 && in[j][k] == 0) {
						in[i][k] = 0;
					}
					else {
						in[i][k] = 1;
					}
				}
			}
		}
	}
	
	printf("\n");
	for (x=0; x<size; ++x) {
		for (y=0; y<size; ++y) {
			printf("%d ", in[x][y]);
		}
		printf("\n");
	}
	return 0;
}
