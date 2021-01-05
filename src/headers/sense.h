#ifndef SENSE_H
#define SENSE_H

#include <vector>
#include <iostream>

void sense(static char color, std::vector< std::vector <char> > &grid, std::vector< std::vector <float> > &beliefs, 
	static float p_hit, 
	static float p_miss);

#endif /* SENSE.H */
