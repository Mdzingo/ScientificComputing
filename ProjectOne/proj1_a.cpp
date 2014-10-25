//Morgan Monzingo
//Part a

#include <iostream>
#include "mat.h"
#include "nest.cpp"
#include <cmath>
using namespace std;

int main()
{
	//creating matrices and initializing them to size of z
	Mat z = Linspace(-4, 4, 801);
	double value = 0.0;
	Mat p5(801);
	Mat p9(801);
	Mat p13(801);
	Mat f(801);
	Mat err5(801);
	Mat err9(801);
	Mat err13(801);

	//creating arrays to then put into the corresponding matrix
	double tempp_5[] = {0, 1.0, 0, -1.0/6.0, 0, 1.0/120.0};
	Mat p_5 = Mat(6 , 1 , tempp_5);
	double tempp_9[] = {0, 1.0, 0, -1.0/6.0, 0, 1.0/120.0, 0, -1.0/5040.0, 0, 1.0/362880.0};
	Mat p_9 = Mat(10, 1, tempp_9);
	double tempp_13[] = {0, 1.0, 0, -1.0/6.0, 0, 1.0/120.0, 0, -1.0/5040.0, 0, 1.0/362880.0, 0, -1.0/39916800.0, 0, 1.0/6227020800.0};
	Mat p_13 = Mat(14, 1, tempp_13);

	//use the z matrix to solve polynomial using nest function and z as the x value
	 for(int counter = 0; counter < z.Size(); counter++)
	 {
		p5(counter) = nest(p_5, z(counter)); 
		p9(counter) = nest(p_9, z(counter)); 
		p13(counter) = nest(p_13,z(counter));

		f(counter) = sin(z(counter));

		err5(counter) = fabs(f(counter)-p5(counter));
		err9(counter) = fabs(f(counter)-p9(counter));
		err13(counter) = fabs(f(counter)-p13(counter));
	 }

	 //writing all matrices into files 
	z.Write("z.txt");
	p5.Write("p5.txt");
	p9.Write("p9.txt");
	p13.Write("p13.txt");
	f.Write("f.txt");
	err5.Write("err5.txt");
	err9.Write("err9.txt");
	err13.Write("err13.txt");





	
	return 0;
}