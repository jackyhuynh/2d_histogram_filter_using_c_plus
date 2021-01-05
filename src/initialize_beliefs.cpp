#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > &grid) {
	int height = grid.size();
	int width = grid[0].size();
	float prob_per_cell = 1 / ((float)height * width);
	vector< vector <float> > newGrid (height, vector<float>(width, prob_per_cell));

	return newGrid;
}