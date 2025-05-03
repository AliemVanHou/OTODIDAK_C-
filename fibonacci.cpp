#include <iostream> 
using namespace std;

int main () {
	int a,b,c,n;
		b = 1;
	
	cout << "Masukkan Jumlah Fibonacci: ";
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cout << a << " ";
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
