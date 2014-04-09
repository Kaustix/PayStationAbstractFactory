/** DisplayStrategy interface (abstract class)
   Responsibilities:
                        
	 1) Calculate and return display Output
*/

#ifndef __DISPLAYSTRATEGY_H
#define __DISPLAYSTRATEGY_H

/// RateStrategy interface (abstract class)
class DisplayStrategyInterface {
public:
	/// abstract function: calculates the display output
	/// \param [in] amount total time bought in minutes
	/// \return the display output 
	virtual int calculateOutput(int timeBoughtSoFar) = 0;

	/// virtual destructor
	virtual ~DisplayStrategyInterface() {};
};

/// DisplayStrategy type for interface (a pointer to the abstract class)
typedef DisplayStrategyInterface* DisplayStrategy;

#endif