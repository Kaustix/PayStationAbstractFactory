#ifndef __ENDTIMEDISPLAY_H
#define __ENDTIMEDISPLAY_H

#include "Display.h"

class EndTimeDisplayStrategy : public DisplayStrategyInterface {
public:
	EndTimeDisplay();
	int displayValue();
};

#endif