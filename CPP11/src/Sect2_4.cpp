/*
 * Sect2_4.cpp
 *
 *  Created on: Jun 17, 2013
 *      Author: gert
 */

#include "Sect2_4.h"

#include <stdexcept>

namespace Sect2_4
{
	constexpr double C = 299792.458;

	Vector::Vector(int s)
	{
		if(s < 0) throw std::length_error{"Vector::Vector()"};
		elem = new double[s];
		sz = s;
	}

	double& Vector::operator[](int i)
	{
		if(i < 0 || size()<=i) throw std::out_of_range{"Vector::operator[]"};
		return elem[i];
	}

	int Vector::size() { return sz; }

	void f(Vector& v)
	{
		try
		{
			v[v.size()] = 7;
		}
		catch (std::out_of_range)
		{
			//("you suck!");
		}
	}

	void speed(double speed)
	{
		const double local_max = 160.0/(60*60);

		static_assert(local_max<C, "Can't go over C.");
	}

	int main()
	{
		Vector hurr(6);

		hurr[4] = 123;



		return 0;
	}
}
