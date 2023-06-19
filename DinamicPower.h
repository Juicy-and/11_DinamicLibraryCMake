#pragma once
#include <iostream>

#ifdef DINAMICLIBRARY_EXPORTS
#define DINAMICPOWER_API __declspec(dllexport)
#else
#define DINAMICPOWER_API __declspec(dllimport)
#endif

namespace DinamicPower
{
	class Leaver
	{
	public:
		DINAMICPOWER_API
		void leave(std::string name);
	};
}
