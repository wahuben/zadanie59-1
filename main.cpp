#include <iostream>
#include<fstream>
#include <vector>

using namespace std;
int liczba, ilosc;
int czynniki = 3;

vector <int> tablica;

int main() {
	
	ifstream dane;
	dane.open("liczba.txt");
	dane>>liczba;
	
	if(liczba % 2 == 0 )return true;
	
	while(liczba>1){
		if(liczba%czynniki==0){
			ilosc++;
			if(czynniki != tablica[ilosc-1]){
				tablica.push_back(czynniki);
			}
		}
		
		while(liczba%czynniki==0){
			liczba /= czynniki;
		}
		czynniki = czynniki + 2;
		if(ilosc > 3)return false;
	}
	if(ilosc == 3) return true;
	if(ilosc < 3) return false;
	return 0;
}
