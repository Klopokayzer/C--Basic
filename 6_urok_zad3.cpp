#include <iostream>
#include <fstream>
#include <cstring>
#include <malloc.h>
using namespace std;

int main (){
	//3 задание
	
	string out1;
	ifstream fisa;
	fisa.open("file1.txt");
	getline(fisa, out1);
	fisa.close();
	string slovo;
	cin>>slovo;
	cout<<out1<<" "<<slovo<<endl;
	if (out1.find(slovo, 0) + 1){
		cout << "Est' sovpadenie" << endl;
	}else {
		cout << "Sovpadenie ne naideno" << endl;
	}
	return 0;
}