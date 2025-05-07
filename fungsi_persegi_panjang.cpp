#include <iostream>

double luas_persegi (double p, double l) {
	double hasil = p * l;
	return hasil;
}

double keliling_persegi (double p, double l) {
	double hasil = 2 * (p + l);
	return hasil;
}

void tampilkan (double p, double l) {
	std::cout << "Luasnya adalah: " << luas_persegi(p,l) << std::endl;
}
void tampilkan2 (double p, double l) {
	std::cout << "Kelilingnya Adalah: " << keliling_persegi(p,l) << std::endl;
}
 
int main () {
	double p,l;
	
	std::cout << "Program Menghitung Luas dan Keliling Persegi Panjang: " << std::endl;
	std::cout << "Masukkan Panjang: ";
	std::cin >> p;
	std::cout << "Masukkan Lebar: ";
	std::cin >> l;
	
	tampilkan (p,l);
	tampilkan2(p,l);

return 0;
}
