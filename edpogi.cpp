#include <iostream>
using namespace std;
int main (){
	for (int a=1 ; a<=100 ; a++){
		if (a%3 == 0 && a%5 == 0){
			cout << "Ed Pogi" << endl;
		}
		else if (a%5 == 0){
			cout << "Ed" << endl;
		}
		else if (a%3 == 0){
			cout << "Pogi" << endl;
		}
		else{
			cout << a << endl;
		}
	}
	return 0;
}
