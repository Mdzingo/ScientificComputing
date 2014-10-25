//Morgan Monzingo
//Project 2
#include <iostream>
#include <math.h>

using namespace std;

double newton(double (*f)(const double, void *data), double (*df)(const double, void *data), 
			  double x, int maxit, double tol, bool show_iterates, void *data)
{
	double xStep = 0.0;
	double h = 0.0;
	
		cout << "Xo = " << x << " tol= " << tol << endl;
		cout << "Initial f(x)" << f(x,data) << endl;
	

	for(int i = 0; i < maxit; i++)
	{
		//just caluculate the new x value
		xStep = x - f(x, data)/df(x, data);
		h = fabs(f(x, data)/df(x, data));

		//show iterations if it's a true 
		if(show_iterates)
		{
			cout <<  "	iter " << i << ", x= " << xStep << ", |h|= " << h << ", |f(x)|= " << fabs(f(xStep, data)) << endl;
		}

		//break out if less than tolerance
		if(h < tol)
		{
			break;
		}

		x = xStep;

	}

	return xStep;
}