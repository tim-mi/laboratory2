double sum(float a, unsigned int b)
{
	return a + b;
}

double sub(float a, unsigned int b)
{
	return a - b;
}

double div(float a, unsigned int b)
{
	return a / b;
}

double mult(float a, unsigned int b)
{
	return a * b;
}

double square(float a)
{
	double c = 0, res;
	res = a;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + a / res) / 2;
	}
	return res;
}

double squar(float b)
{
	double c = 0, res;
	res = b;
	while (c - res > 0.00001 || c - res < -0.00001)
	{
		c = res;
		res = (c + b / res) / 2;
	}
	return res;
}

double pow(float a, unsigned int b)
{
	double res = 1;
	for (; b > 0; b--)
	{
		res = res * a;
	}
	return res;
}
