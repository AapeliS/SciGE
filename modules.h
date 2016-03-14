/*** modules.h
*
*	AI  Anatomic  Biological  Chemics  Electronic  Mathematical  Physics
*/

class modules {
	bool AI;
	bool Anatomic;
	bool Chemics;
	bool Electronic;
	bool Mathematical;
	bool Physics;
	bool nonEfficient;
public:
	~modules() { nonEfficient = false; }
	modules() { AI = Anatomic = Biological = Chemics = Electronic = Mathematical = Physics = nonEfficient = false; }
	startModule(bool non) {  }
	switchModule(bool non) {  }
	stopModule(bool non) {  }
	startAI(bool non) {  }
	switchAI(bool non) {  }
	stopAI(bool non) {  }
}
