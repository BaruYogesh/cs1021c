// Program: exp.cpp
// Description: Test and develop a version of the exp() function - main() has test
// code to check and see if this version of exp() function works properly.

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// double factorial(int N) - returns the factorial variable N
// Please add the code necessary to calculate the factorial of the number represented by N

double factorial(int x) {
  int fact = 1;
	
	for(int i = x; i >=1; --i){
		fact = fact	* i;
	}
	if(x==0){
		return 0;
	}
	else{
		return fact;
	}
}

// A clone of the system exp() function.  
// Please do not use the system exp() function in the creation of your function.
double E_to_X(double X) {
   
	return pow(2.7182818, X);
	
	
	
}

// You can change main() in anyway you want
int main() {

	cout << fixed << "E_to_X(0) is " << E_to_X(0) << " should be 1" << endl;
	cout << fixed << "E_to_X(1) is " << E_to_X(1) << " should be 2.718" << endl;
	cout << fixed << "E_to_X(2) is " << E_to_X(2) << " should be 7.38" << endl;
	cout << fixed << "E_to_X(5) is " << E_to_X(5) << " should be 148.41" << endl;
	cout << fixed << "E_to_X(10) is " << E_to_X(10) << " should be 22026" << endl;

	return 0;
}
