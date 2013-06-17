/*
 * Sect2_4.h
 *
 *  Created on: Jun 17, 2013
 *      Author: gert
 */

#ifndef SECT2_4_H_
#define SECT2_4_H_

namespace Sect2_4
{
	class Vector {
	public:
		Vector(int s);
		double& operator[](int i);
		int size();
	private:
		double* elem;
		int sz;

	};

	int main();
}


#endif /* SECT2_4_H_ */
