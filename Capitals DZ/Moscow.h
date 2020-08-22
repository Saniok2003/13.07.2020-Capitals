#pragma once
#include <iostream>
using namespace std;

namespace Russia
{
	class Moscow
	{
	private:
		int people;
	public:
		Moscow() : people(0)
		{	}
		Moscow(int p) : people(p)
		{	}
		int GetPeople()
		{
			return people;
		}
	};

}