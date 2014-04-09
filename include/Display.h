#ifndef __DISPLAY_H
#define __DISPLAY_H

class DisplayInterface {
public:
	virtual int displayValue() = 0;

	virtual ~DisplayInterface() {};
};

typedef DisplayInterface* Display;

#endif