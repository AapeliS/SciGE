/** Anomaly.h
 *
 *	Aapeli Syrjänen
 */

#include "../../Exception.h"

#IFNDEF__ANOMALY_H__
#DEFINE ANOMALY 5
#DEFINE ANOMALY_2 6
#ENDIF

virtual class Anomaly {
	int hasNotHappened;
	int input;
	
public:
	Anomaly() { int hasNotHappened = NO }
	Anomaly(int i) { input = i }
}
