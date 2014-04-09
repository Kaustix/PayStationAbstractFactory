#ifndef __DISPLAY_H
#define __DISPLAY_H

class DisplayStrategyInterface {
public:
	virtual int displayValue() = 0;

	virtual ~DisplayInterface() {};
};

typedef DisplayStrategyInterface* DisplayStrategy;

#endif