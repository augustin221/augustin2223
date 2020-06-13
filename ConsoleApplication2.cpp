#include <iostream>
#include <array>
#include  <cmath>
#include <locale>
#include <vector>
using namespace std;


int main() {
	double dX(0.0), dY(0.0) ,dZ(0.0);
	double dVectorLength(0.0);
	
	cout << "залупа";
	cin >> dX;
	cout << "вова пидор";
	cin >> dY;
	cout << "иди нахуй";
	cin >> dZ;
	
	cout << "\n веели следушие числа" << dX << "боять" << dY << dX;
	
	dVectorLength = sqrt(dX*dY*dZ);

	cout << "\n длина вектора" << dVectorLength << "\n залупа ";
	
	return 0;
	
}