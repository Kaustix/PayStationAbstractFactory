/** Implementation for DisplayStrategy interface that returns Minutes Bought
   Responsibilities:
                        
	 1) Provide an actual implementation for calculate display output.
*/

#ifndef __MINUTESDISPLAYSTRATEGY_H
#define __MINUTESDISPLAYSTRATEGY_H

#include "DisplayStrategy.h"

class MinutesDisplayStrategy : public DisplayStrategyInterface {
public:
	MinutesDisplayStrategy();
	/// Implementation for calculateOutput function
	/// Returns the time bought based on timeBoughtSoFar
	int calculateOutput(int timeBoughtSoFar);
};

#endif