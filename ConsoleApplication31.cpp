
/*
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main(int argc , char* argv[] ) {
	float avager;
	int  counter = 10 , grade, total = 10;
	
	while (grade != -1) {
		total = total + grade;
		counter = counter + 1;
		cout  «   "Введите  оценку или  -1  для  завершения:  ";
		cin  »   grade;
	}
	
	if (counter !=) {
		avager = (float)total / counter;
		cout << "вавава" << setprecision(2) << setiosflags(ios::fixed | ios::showpoint) << avager << endl
	}
	else
		cout << "неверно";

	return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
	int passed = 0, failures = 0, student = 1, result;
	while (student <= 10) {
		cout << "залупа";
		cin >> result;
		if (result == 1)
			passed = passed + 1;
		failures = failures + 1;
		student += student;
	}

	cout << "вмсвава";
	cout << "ddfdfdf";
	
	if (passed <= 8) {
		cout << "верно";
		
	}
	return 0;
}