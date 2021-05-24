#include <iostream>

using namespace std;


int busquedaBinaria(int x, string filename, int init, int fin)
{
	ifstream f(filename);
	string line;
	int index, actual;

	index = (init+fin)/2;

	for (int i = 0; i <= index; ++i)
	{
		getline(f,line);
	}
	
	actual = stoi(line);

	if (x == actual)
	{
		return index;
	}

	if (init != fin)
	{
		if (actual > x)
		{
			return busquedaBinaria(x, filename, init, index-1);
		}
		else
		{
			return busquedaBinaria(x, filename, index+1, fin);
		}
	}
	
	return -1; // the element is not in the file
}