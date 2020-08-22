#pragma once
#include <iostream>
using namespace std;

namespace Ukraine
{
	class Kyiv
	{
	private:
		int people;
	public:
		Kyiv() : people(0)
		{	}
		Kyiv(int p) : people(p)
		{	}
		int GetPeople()
		{
			return people;
		}
	};
}