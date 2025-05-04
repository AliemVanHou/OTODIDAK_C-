#include <iostream> 
using namespace std;

int main () {
	int n;
	
	cout << "Masukkan N: ";
	cin >> n;
	
	//Sama Kaki Satu
	for (int i=1; i<=n; i++) {
		for (int y=n; y>i; y--) {
			cout << " ";
		}
		for (int k=1; k<= (2*i-1); k++) {
			cout << "*";
		}
		cout << endl;
	};
	cout << endl;
	
	//Sama Kaki dua
	for (int i=1; i<=n; i++) {
		for (int j=1; j<i; j++) {
			cout << " ";
		}
		for (int k=1; k<= 2*(n-i) + 1; k++){
			cout << "*";
		}
		cout << endl;
	}
		
	
}
