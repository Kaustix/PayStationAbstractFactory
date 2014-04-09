/** Implementation for DisplayStrategy interface that returns end time 
   Responsibilities:
                        
	 1) Provide an actual implementation for calculate display output.
*/

#ifndef __ENDTIMEDISPLAY_H
#define __ENDTIMEDISPLAY_H

#include "DisplayStrategy.h"

class EndTimeDisplayStrategy : public DisplayStrategyInterface {
public:
	EndTimeDisplayStrategy();
	/// Implementation for calculateOutput function
	/// Returns the End Time based on timeBoughtSoFar and the Current Time
	int calculateOutput(int timeBoughtSoFar);
};

#endif