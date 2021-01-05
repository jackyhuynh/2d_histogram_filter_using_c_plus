#include "headers/normalize.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
void normalize(vector< vector <float> >& grid) {

	int height = grid.size();
	int width = grid[0].size();
	float total = 0;

	for (int i = 0; i < height; i++) {
		total += (float)accumulate(grid[i].begin(), grid[i].end(), 0);
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			grid[i][j] = (float)grid[i][j] / (float)total;
		}
	}
}
