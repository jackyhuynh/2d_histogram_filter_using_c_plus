#include "headers/sense.h"

using namespace std;

// OPTIMIZATION: Pass larger variables by reference
void sense(static char color, 
	vector< vector <char> > &grid, 
	vector< vector <float> > &beliefs, 
	static float p_hit, 
	static float p_miss)
{
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			if (grid[i][j] != color) {
				beliefs[i][j] = beliefs[i][j] * p_miss;
			} else {
				beliefs[i][j] = beliefs[i][j] * p_hit;
			}
		}
	}
}
