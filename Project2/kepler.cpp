
// find omega at various moments in time

// f(w) = nonlinear root-finding residual function 
// f'(w);
// t = {0,0.001,...,9};

// Newtons method to sollve for w(t).
// tolerance of 10^-4
// max of five Newton iterations
// **dont output the iteration information to the screen. 
// initial guess should be the solution from the previous value of t

// using the formula r(w) = a*b / root((bcos(w))^2 + (asin(w))^2
// compute the cartesian coordinates of the object x(t) = r(t) cos(ω(t)) and y(t) = r(t) sin(ω(t)).

// store t, x(t) and y(t) into Mat objects
#include <iostream>
#include "Mat.h"
#include <cmath>

using namespace std;

int main()
{
	;
	Mat t = Linspace(0.0, 9.0, 9000);
	int maxit = 5;
	double tol = .001;
	bool show_iterates = false;
	double *data  = t(0);
	double w = 0.0;

	newton(f, df, w, maxit, tol, show_iterates, *data)


	return 0;
}

double f(const double w, void *data)
{
	double a = 1.0;
	double b = 0.5;
	double E = root(1 - (b*b/a*a))
	return w − E * sin(w) - data;
}

double df(const double w, void *data)
{
	double a = 1.0;
	double b = 0.5;
	double E = root(1 - (b*b/a*a))
	return 1 - E*cos(w);
}