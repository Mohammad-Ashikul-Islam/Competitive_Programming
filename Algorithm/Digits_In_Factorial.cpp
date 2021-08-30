// A optimised program to find the
// number of digits in a factorial
#include <bits/stdc++.h>
using namespace std;
#define M_E 2.71828182845904523536
#define M_LOG2E 1.44269504088896340736
#define M_LOG10E 0.434294481903251827651
#define M_LN2 0.693147180559945309417
#define M_LN10 2.30258509299404568402
#define M_PI 3.14159265358979323846 //double M_PI = 4.0*atan(1.0); can be used too
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.785398163397448309616
#define M_1_PI 0.318309886183790671538
#define M_2_PI 0.636619772367581343076
#define M_1_SQRTPI 0.564189583547756286948
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2 1.41421356237309504880
#define M_SQRT_2 0.707106781186547524401
// Returns the number of digits present
// in n! Since the result can be large
// long long is used as return type
long long findDigits(int n)
{
	// factorial of -ve number
	// doesn't exists
	if (n < 0)
		return 0;

	// base case
	if (n <= 1)
		return 1;

	// Use Kamenetsky formula to calculate
	// the number of digits
	double x = ((n * log10(n / M_E) +
				log10(2 * M_PI * n) /
				2.0));

	return floor(x) + 1;
}

// Driver Code
int main()
{
	cout << findDigits(5) << endl;
	cout << findDigits(50000000) << endl;
	cout << findDigits(1000000000) << endl;
	cout << findDigits(120) << endl;
	return 0;
}
