//Morgan Monzingo
//Nest function


#include "mat.h"


double nest(Mat &a, double x)
{
	int n= a.Size() - 1;
	double p = a(n);

	//loops through the matrix passed using horners equation 
	for(int i = a.Size() - 2; i >= 0; i--)
	{	
		p = p * x + a(i);
	}

	return p;

}
