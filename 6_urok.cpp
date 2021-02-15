#include <iostream>
#include <fstream>
#include <cstring>
#include <malloc.h>
using namespace std;

void printArray(int count1, char* str1){
	for (int i = 0; i < count1; i++){
		cout << *(str1 + i);
		if (i < count1 - 1) cout << ", ";
	}
	cout << endl;
}

int main (){
	//1 задание
	ofstream a("file1.txt");
	a << "Hello, this is just typing for a test." << endl;
	ofstream b("file2.txt");
	b << "Hello, this is just typing for a test2." << endl;
	
	//2 задание
	int count1 = 0;
	string out1;
	char* str1 = (char *) calloc(10, sizeof(char));
	ifstream fisa;
	fisa.open("file1.txt");
	getline(fisa, out1);
	count1 = out1.length();
	fisa >> str1;
	fisa.close();
	str1 = (char *) realloc(str1, count1 * sizeof(char)); //Почему-то прописывается с " ust typing" если вывести  printArray
	cout << out1 << endl;
	cout << count1 << endl;
	printArray(count1, str1);
	
	int count2 = 0;
	string out2;
	char* str2 = (char *) calloc(10, sizeof(char));
	ifstream fisb;
	fisb.open("file2.txt");
	getline(fisb, out2);
	count2 = out2.length();
	fisb >> str2;
	fisb.close();
	str2 = (char *) realloc(str2, count2 * sizeof(char));
	cout << out2 << endl;
	cout << count2 << endl;
	printArray(count1, str2);
	// в общем так и не получилось засунуть данные файла в динамическую память
	ofstream c("file3.txt");
	c << out1 << " " << out2 << endl;

	return 0;
	
}