#include "EndTimeDisplayStrategy.h"

int EndTimeDisplayStrategy::calculateOutput(int timeBoughtSoFar) {
	struct tm *timeval;
	time_t tt;
	tt = time( NULL );
	timeval = localtime( &tt );
	timeval->tm_min += timeBoughtSoFar;
	return combineIntegers(timeval->tm_hour, timeval->tm_min);
}

int EndTimeDisplayStrategy::combineIntegers(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
}