#include "headers/move.h"
#include "headers/zeros.h"

using namespace std;

// OPTIMIZATION: Pass large variable by reference
vector< vector <float> > move(int dy, int dx, 
	vector < vector <float> > &beliefs) 
{
	int height, width;
	height = beliefs.size();
	width = beliefs[0].size();
	vector < vector <float> > newGrid(height, vector <float>(width,0));

// OPTIMIZATION: Eliminate any variables that aren't needed
  	for (int i=0; i<height; i++) {
		for (int j=0; j<width; j++) {
			int new_i = (i + dy + height) % height;
			int new_j = (j + dx + width)  % width;
			newGrid[new_i][new_j] = beliefs[i][j];
		}
	}
	return newGrid;
}
