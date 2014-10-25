//Morgan Monzingo
//Project 2
//Part A

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

double f(const double x, void *data);
double df(const double x, void *data);
double newton(double (*f)(const double, void *data), 
			  double (*df)(const double, void *data), 
			  double x, int maxit, double tol,
			  bool show_iterates, void *data);

//tests the newton.cpp function
int main(int argc, char* argv[])
{
	//running Newton's method nine times based on the three x values and three tolerances
	double x = -1;
	double tol = .001;
	int maxit = 15;
	double rt_one = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	tol = 1e-07;
	rt_one = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	tol = .00000000001;
	rt_one = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	x = 2;
	tol = .001;
	double rt_two = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;
	
	tol = 1e-07;
	rt_two = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;

	tol = .00000000001;
	rt_two = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;

	x = 3;
	tol = .001;
	double rt_three = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	tol = .0000001;
	rt_three = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	tol = .00000000001;
	rt_three = newton(f, df, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	
}

//calculates the function f
double f(const double x, void *data)
{
	return (.2*(x - 5.0)*(x + 2.0)*(x + 3.0));
}

//calculates the derivative df
double df(const double x, void *data)
{
	return(.6*x*x-3.8);
}