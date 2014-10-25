//Morgan Monzingo
//Project 2
#include <iostream>
#include <math.h>

using namespace std;

double steffensen(double (*f)(const double, void *data), double x, int maxit, double tol, bool show_iterates, void *data)
{
	double xStep = 0.0;
	double df = 0.0;
	double h = 0.0;
	//initial print out of information passed
	cout << "Xo = " << x << " tol= " << tol << endl;
	cout << "Initial f(x) = " << f(x,data) << endl;

	//for loop to actually execute Steffensen's method
	for(int i = 0; i < maxit; i++)
	{
		//solving for the derivative
		df = (f(x,data) - f(x-f(x,data),data))/f(x,data);
		xStep = x - f(x, data)/df;
		h = fabs(f(x,data)/df);

		//printing out if necessary
		if(show_iterates)
		{
			cout <<  "	iter " << i << ", x = " << xStep << ", |h| = " << h << ", |f(x)| = " << fabs(f(xStep, data)) << endl;
		}

		//break out of program if you are less than the tolerance
		if(h < tol)
		{
			break;
		}

		x = xStep;

	}

	return xStep;
}