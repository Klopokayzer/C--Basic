#include <iostream>

int main ()
{
	// 1 задание. 
	int a = 10;
	char symb = 'O';
	double b = 4.5;
	
	int massiv[5];
	massiv[0]=2; 
	massiv[1]=13;
	massiv[2]=43;
	massiv[3]=4; 
	massiv[4]=97;
	
	int massivm [2][3] = {{12, 14, 15},{26, 13, 54}};
	
	struct student {
    char name[10];
    char surname[10];
    int age;
} GeekBrains = {"Ruslan", "Bakhvalov", 26};


	// 5 задание
	union var {
		int i;
		char c;
		float f;
	};
	union var x;
	x.i = 5;
	struct tipdan {
		union var value;
		int is_int   : 1;
		int is_char  : 1;
		int is_float : 1;
	};
	// я ничего не понял дальше
	return 0;
}