double sum(float a, float b)
{
	return a + b;
}

double sub(float a, float b)
{
	return a - b;
}

long double * div(double a, double b)
{
	if (b != 0){
		long double *p = new long double;
		*p = a / b;
		return p;
	}
	else return nullptr;
}

double mult(float a, float b)
{
	return a * b;
}

double *square(float a)
{
	double c = 0, res = a;
	if (a > 0){
		double *r = new double;
		if (a != 1 && a != 0) {
			while (c - res > 0.00001 || c - res < -0.00001)
			{
				c = res;
				res = (c + a / res) / 2;
			}
			*r = res;
		}
		else if (a == 1) *r = 1;
		else if (a == 0) *r = 0;

		return r;
	}
	else return nullptr;
}
double *squar(float  b)
{
	double c = 0, res = b;
	if (b > 0){
		double *d = new double;
		if (b != 1 && b != 0) {
			while (c - res > 0.00001 || c - res < -0.00001)
			{
				c = res;
				res = (c + b / res) / 2;
			}
			*d = res;
		}
		else if (b == 1) *d = 1;
		else if (b == 0) *d = 0;

		return d;
	}
	else return nullptr;
}

double pow(float a, long  b)
{
	double res = 1.0;
	if (b > 0){
		for (unsigned int i = 0; i < b; i++)
		{
			res = res * a;
		}
	}
	else {
		for (unsigned int i = 0; i < b; ++i)
		{
			res =1/( res * a);
		}
	}
	return res;
}
