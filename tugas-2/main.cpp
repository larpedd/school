#include <iostream>

using namespace std;

int main() {
	
	int nilai;

	cout << "Masukan Nilai: ";

	cin >> nilai;

	if ( nilai > 95 ) {
		cout << "Nilai: A";
	} else if ( nilai > 85 ) {
		cout << "Nilai: B";
	} else if ( nilai > 75 ) {
		cout << "Nilai: C";
	} else {
		cout << "Nilai: D";
	}
	
	return 0;
}
