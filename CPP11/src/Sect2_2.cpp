/*
 * Sect2_2.cpp
 *
 *  Created on: 12.06.2013
 *      Author: gert
 */

#include <iostream>
#include <complex>

namespace Sect2_2
{
	double square(double a)
	{
		return a*a;
	}

	int main()
	{
		std::complex<double> z(1.1,2.3);

		auto b = true;
		if(b) std::cout << "yay\n";

		std::cout << "pretty cool!\n";

		const int namedconst = 12;
		std::cout << namedconst << "\n";

		double a1 = 1.4*square(namedconst);
		std::cout << a1 << "\n";

		return 0;
	}
}


