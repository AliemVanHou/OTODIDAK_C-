#include <iostream> 
using namespace std;

int main () {
	int n;
	
	cout << "Masukkan N: ";
	cin >> n;
	
	//Pola 1
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	//pola 2
	for (int i=n; i>=1; i--) {
		for (int j=1; j<i; j++){
			cout << " ";
		} 
		for (int k=n; k>=i; k--){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	//pola 3
	for (int i=1; i<=n; i++) {
		for (int j=n; j>=i; j--){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	//Pola 4
	for (int i=1; i<=n; i++) {
		for (int j=1; j<i; j++) {
			cout << " ";
		}
		for (int k=n; k>=i; k--) {
			cout << "*";
		}
		cout << endl;
	}	
	return 0;
}
