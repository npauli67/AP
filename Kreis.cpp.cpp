
#include <iostream>
	#define PI 3.14

using namespace std;

int main()
{
	double Radius;

	double Flaeche;

	cout << "Geben Sie den Radius ein! \n";

	cin >> Radius;



	Flaeche = PI * Radius * Radius;

	cout << "Die Flaeche betraegt" << " " << Flaeche;


	return 0;

}
