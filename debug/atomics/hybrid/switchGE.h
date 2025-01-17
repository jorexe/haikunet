//CPP:qss/qsstools.cpp
//CPP:hybrid/switchGE.cpp
#if !defined switchGE_h
#define switchGE_h

#include "simulator.h"
#include "event.h"
#include "stdarg.h"

#include "qss/qsstools.h"


class switchGE: public Simulator { 
//states
double sigma,tcross;
double u[3][10];
int sw,change;

//output
double y[10];

//parameters
double level;

#define INF 1e20














public:
	switchGE(const char *n): Simulator(n) {};
	void init(double, ...);
	double ta(double t);
	void dint(double);
	void dext(Event , double );
	Event lambda(double);
	void exit();
};
#endif
