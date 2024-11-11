#include <cmath>

#include "var.h"
#include "func.h"
using namespace nsFunc;
using namespace nsVar;

double nsFunc::S(double a){
	int i = 0;
	int k = 1;
	double S1, a1 = 1, S2, a2 = 1, s, R1, R2;

	S1 = 0;
	S2 = 0;
	if (abs(a) >= 1) {
		s = (1 + pow(a, 2) + sqrt(abs(sin(a)))) / ((pow(sin(2 * a * a), 2)) + 1);

		return s;
	}

	else {
		while (i <= 5) {
			R1 = a / i;
			a1 *= R1;
			S1 += a1;
			i++;
		}
		a = 1;
		while (k <= 6) {
			R2 = a / k;
			a2 *= R2;
			S2 += a2;
			k++;
		}
	}
	s = S1 + S2;
	return s;


}