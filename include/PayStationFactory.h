/* Source code for textbook:
 Flexible Reliable Software, by Henrik B. Christensen
 CRC Press 2010 
 ***********************************
 Project developped in java by Henrik B. Christensen
 C++ port by Robert Benkoczi
 ***********************************
 */

/** The pay station factory interface

   Responsibilities:
                        
   1) Create RateStrategy object
   2) Create Receipt object
*/

#ifndef __PAYSTATIONFACTORY_H
#define __PAYSTATIONFACTORY_H

#include "RateStrategy.h"
#include "DisplayStrategy.h"
#include "Receipt.h"


/// PayStationFactory interface class
class PayStationFactoryInterface {
public:
	/// creates the appropriate RateStrategy object
	/// \return a RateStrategy implementation object allocated on the
	/// heap. Must be freed by the PayStation object
	virtual RateStrategy createRateStrategy() = 0;

	/// creates an appropriate receipt implementation object
	/// \return a receipt object allocated on the heap; to be freed by
	/// the client of the PayStation::buy method.
	virtual Receipt createReceipt(int parkingTime) = 0;

	/// creates an appropiate display implementation object
	/// \return an abstract display object
	virtual DisplayStrategy createDisplayStrategy() = 0;
};

typedef PayStationFactoryInterface* PayStationFactory;


#endif
