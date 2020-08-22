#pragma once
#include <iostream>
using namespace std;

namespace Poland
{
	class Warsaw
	{
	private:
		int people;
	public:
		Warsaw() : people(0)
		{	}
		Warsaw(int p) : people(p)
		{	}
		int GetPeople()
		{
			return people;
		}
	};

}