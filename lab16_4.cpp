#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d){
	int random[4] = {a, b, c, d};
	int base[4];
	for(int i = 0; i < 4; i++){
		base[i] = rand()%4;
		for(int j = 0; j < i; j++){
			if(base[i] == base[j]){
				i--;
				break;
			} 
		}
	}
	a =random[base[0]];
	b =random[base[1]];
	c =random[base[2]];
	d =random[base[3]];
}
