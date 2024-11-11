#include <iostream>
#include <cmath>
#include <iomanip>

#include "var.h"
#include "func.h"


using namespace nsVar;
using namespace nsFunc;

using namespace std;

int main() {

	cout << "r_p = ";cin >> r_p;
	cout << "r_k = ";cin >> r_k;
	cout << "n = "; cin >> n;
	dr = (r_k - r_p) / n;
	cout << "---------------------------" << endl
		<< "|" << setw(5) << "r" << "  |"
		<< setw(10) << "result" << "       |" << endl
		<< "---------------------------" << endl;
	r = r_p;
	while (r <= r_k) {

		result = (S(sqrt(r) + 1)) - (pow(S(sqrt(r) - 1), 2)) + 1;
		cout << fixed;
		cout << "|" << setprecision(0) << setw(5) << r << "  |"
			<< setw(14) << setprecision(3) << result << "   |" << endl;
		r += dr;
	}
	cout << "---------------------------" << endl;
	return 0;
}