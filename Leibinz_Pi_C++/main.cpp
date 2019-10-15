#include <iostream>
#include <math.h>

using namespace std;

int main(void) {

	bool sw = true;
	double res = 0.0;
	int denom = 3;
	int max = 420000; //nulla hozzaadasaval a vegen pontosabb lesz

	res = 1.0 - (1.0 / denom);

	while (denom < max)
	{
		denom += 2;
		sw = !sw;
		(sw) ? (res -= (1.0 / denom)) : (res += (1.0 / denom));
	}

	printf("A pi szamjegyei: %.12f\n", 4 * res);

	return 0;
}