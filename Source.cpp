#include <iostream>
using namespace std;
int main() {
	int n, a, b, c;
	cout << "masukkan nilai ke n =" << endl;
	cin >> n;
	cout << endl << endl;
	b = 1;
	c = 0;
	a = b + c ;

	cout << a << endl;
	for (int i = 1; i < n; i++) {
		a = b + c;
		c = b;
		b = a;
		cout << a << endl;
	 }





	cin.get();
	return 0;
}