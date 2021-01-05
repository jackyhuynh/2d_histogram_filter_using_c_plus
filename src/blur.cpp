#include "headers/blur.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector < vector <float> > blur(vector < vector < float> > &grid, float blurring) {
	int height = grid.size();
	int width = grid[0].size();
	
	// Create window vector
	static float center = 1 - blurring;
	static float corner = blurring / 12;
	static float adjacent = blurring / 6;
	
	static float window[3][3] = {
		{corner, adjacent,corner},
		{adjacent, center, adjacent},
		{corner, adjacent,corner} };
	
	// Range vector
	static int range[3] = {-1,0,1};

	// Create vector float hold zero number
	vector < vector <float> > newGrid(height, vector <float>(width, 0.0));

	for (int i=0; unsigned(i) < height; i++ ) {
		for (int j = 0; unsigned(j) < width; j++) {
			float val = grid[i][j];
			for (int dx:range) {
				for (int dy : range) {
					float multiplier = window[dx+1][dy+1];
					int new_i = (i + dy + height) % height;
					int new_j = (j + dx + width) % width;
					newGrid[new_i][new_j] += val * multiplier;
				}
			}
		}
	}
	return newGrid;
}
