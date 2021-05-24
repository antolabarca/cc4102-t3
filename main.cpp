#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "create_data.cpp"
#include "binary_search.cpp"

using namespace std;

int N = 8;
string filename = "test.txt";


int main(int argc, char const *argv[])
{
	createData(N, filename);

	int x = busquedaBinaria(24, filename, 0, N-1);
	cout << x << endl;
	return 0;
}