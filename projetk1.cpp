#include <iostream>

using namespace std;

int silnia (int n){
	if(n < 1)
		return 0;
	int result = 1;
	while(n != 0){
		result *= n;
	       n--;	
	}
	return result;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Silnia" << endl;
	cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie == 1)
		cout << silnia(a);
    } while(wyjscie != 0);
    return 0;
}
