#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "input panjang pola: ";
	cin >> n;
	
	cout << "pola 3\n";
	
	for(int i = 1; i <= n; i++){
		for (int x = n; x > i; x--){
			cout << " ";
			
		}
		for(int y = 1; y <= (2*i - 1); y++){
			cout << "*";
		
		}
		cout << endl;
	}
	cin.get();
	return 0;
}

