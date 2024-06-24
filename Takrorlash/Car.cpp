#include <string>
#include <iostream>

using namespace std;

class Mathematics {
public:
	string ToqYokiJuftSonniTopish(int son)
	{
		if (son % 2 == 0)
		{
			return "Juft son";
		}
		else if (son == 0)
		{
			return "Qiymat mavjud emas.";
		}
		else
		{
			return "Toq son";
		}
	}

	int KattaSon(int x, int y)
	{
		return x > y ? x : y;
	}
};