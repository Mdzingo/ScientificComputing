//Morgan Monzingo
//Part b

#include <iostream>
#include "mat.h"
#include <cmath>
using namespace std;

int main()
{
	//declare all arrays and constant variables
	Mat n = Linspace(1.0,52.0,52);
	double nArray[52];
	double hArray[52];
	double rArray[52];
	double RArray[52];
	double delt[52];
	
	//solving for f(x) f'(x) and f''(x) also c1 and c2
	double f = 1.0/25.0;
	double fderiv = -2.0/125.0;
	double f2deriv = 6.0/625.0;
	double c1 = fabs(f2deriv/(2.0*fderiv));
	double c2 = fabs(f*pow(2,-52)/fderiv);
	
	//initializing the h values
	for(int i = 1; i <= n.Size(); i++)
	{
		hArray[i-1] = pow(2,-n(i-1));
		
	}

	//setting h into a matrix
	Mat h(52);
	h = Mat(52,1,hArray);

	//solving for the delta values to later solve for r
	for(int i = 1; i <= n.Size(); i++)
	{
		delt[i-1] = (f - pow(5-h(i-1),-2)) / h(i-1);
	}	

	//solve for r and R
	for(int i = 1; i <= n.Size(); i++)
	{
		rArray[i-1] = fabs((fderiv - delt[i-1])/fderiv);
		RArray[i-1] = c1*h(i-1) + c2/h(i-1);
	}
	
	//declaring r and R as an  array and setting values from array
	Mat r(52);
	Mat R(52);
	r = Mat(52,1,rArray);
	R = Mat(52,1,RArray);




	//writing all variables into files
	 n.Write("n.txt");
	 h.Write("h.txt");
	 r.Write("littler.txt");
	 R.Write("R.txt");





	return 0;
}