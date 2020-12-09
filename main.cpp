#include <iostream>
#include<fstream>
#include <vector>

using namespace std;
int liczba, ile;
int czynniki = 3;

vector <int> tablica;

int main() {
	
	ifstream dane;
	dane.open("liczba.txt");
	dane>>liczba;
	
	if(liczba % 2 == 0 )return true;
	
	while(liczba>1){
		if(liczba%czynniki==0){
			ile++;
			if(czynniki != tablica[ile-1]){
				tablica.push_back(czynniki);
			}
		}
		
		while(liczba%czynniki==0){
			liczba /= czynniki;
		}
		czynniki = czynniki + 2;
		if(ile > 3)return false;
	}
	if(ile == 3) return true;
	if(ile < 3) return false;
	return 0;
}
