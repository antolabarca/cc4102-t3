#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

int seed = 1; // = time(NULL); para que el seed cambie en cada prueba 

void createData(int N, string filename)
{
	ofstream ofile;
  ofile.open(filename, ios::out | ios::app | ios::trunc);

  srand(seed);

 	int randnumbers[N];
 	randnumbers[0] = rand()%10;

  	for (int i = 1; i < N; ++i)
  	{
  		randnumbers[i] = rand()%10 + randnumbers[i-1] + 1; //numero random mayor al anterior
  	}

  	for (int i = 0; i < N; ++i)
  	{
  		ofile << randnumbers[i] << "\n";
  	}

  	ofile.close();
}