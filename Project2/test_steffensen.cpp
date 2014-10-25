//Morgan Monzingo
//Project 2
//Part B
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

double f(const double x, void *data);
double steffensen(double (*f)(const double, void *data), double x, int maxit, double tol,
				   bool show_iterates, void *data);

//tests the steffensen.cpp function
int main(int argc, char* argv[])
{
	//running newton nine times based on the three x values and three tolerances
	double x = -1;
	double tol = 10e-3;
	int maxit = 20;
	double rt_one = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	tol = 10e-7;
	rt_one = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	tol = 10e-11;
	rt_one = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_one << endl << endl;

	x = 2;
	tol = 10e-3;
	double rt_two = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;
	
	tol = 10e-7;
	rt_two = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;

	tol = 10e-11;
	rt_two = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_two << endl << endl;

	x = 3;
	tol = 10e-3;
	double rt_three = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	tol = 10e-7;
	rt_three = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	tol = 10e-11;
	rt_three = steffensen(f, x, maxit, tol, true, NULL);
	cout << " The approximate root is " << rt_three << endl << endl;

	
}

//The function f
double f(const double x, void *data)
{
	return (.2*(x - 5.0)*(x + 2.0)*(x + 3.0));
}
