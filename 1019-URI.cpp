//Por Rodrigo Costa
#include <iostream>
#include <math.h>

using namespace std;

	int N, horas, minutos, segundos;


int ent();	
int proc();
int main()
{
	ent();
	proc();

		cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;
}


int ent(){
	cin >> N;
	return N;
}

int proc(){
	
	horas = (N/3600);
  	minutos = (N -(3600*horas))/60;
    segundos = (N -(3600*horas)-(minutos*60));

return horas, minutos, segundos;
}

