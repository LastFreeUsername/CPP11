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
	constexpr double square(double a)
	{
		return a*a;
	}


	bool accept()
	{
		std::cout << "Hurro? (y or n)\n";
		char answer {0};
		std::cin >> answer;
		switch(answer) {
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout << "I'll take that as a no.\n";
			return false;
		}
	}

	void copy_fct()
	{
		int v1[10] {0,1,2,3,4,5,6,7,8,9};
		int v2[10];

		for(auto i=0; i!=10; ++i) // copy elements
		{

		}
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

		accept();

		return 0;
	}



}


