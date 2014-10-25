int newton_coeffs(Mat &x, Mat&y, Mat &c);
double newton_eval(Mat &x, Mat &c, double size);


int newton_coeffs(Mat &x, Mat&y, Mat &c)
{
	takes vectors x and y both are length n + 1 and computes the coefficients
	that define the Newton interpolating polynomial
	satisfying p(x) = y
	if there was an error then return 1 otherwise return 0
	int e = FwdSub(x, y, c);
	return e;
	
}