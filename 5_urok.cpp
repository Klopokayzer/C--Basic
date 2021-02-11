#include <iostream>
#include <cstdarg>
using namespace std;

void sdvig(int n, int zad4[5]){
	int temp[5];
    int i;
	int f;
	if (n>0){
    for ( i = 0; i < 5; i++ ) {
        temp[( i + n ) % 5] = zad4[i];
    }
    
    for (i = 0; i < 5; i++) {
        zad4[i] = temp[i];
    }
	}else {
		f = 5 + n;
		for ( i = 0; i < 5; i++ ) {
        temp[( i + f ) % 5] = zad4[i];
    }
    
    for (i = 0; i < 5; i++) {
        zad4[i] = temp[i];
    }
	}
}
void rotation(int zad1[]){
	int i;
	for (i =0; i<6; i++)
	{
		if (zad1[i]==1)
		{
			zad1[i] = 0;
		} else {
			zad1[i] = 1;
		}
	}
}
void zapol(int zad2[]){
	int k1=1;
	int k = 0;
	while (k < 8)
	{
		zad2[k] = k1;
		k++;
		k1 +=3;
	}
}
bool sravnen(int zad3[]){
	int sum = 0;
	int sum2 = 0;
	int raz = 0;
	int z = 0;
	bool result = false;
	for (int p=0; p<6; p++)
	{
		sum += zad3[p];
	}
	for (int p=0; p<6; p++)
	{
		sum2 += zad3[p];
		raz = (sum - sum2);
		if ((raz) == (sum2)){
		bool result = true;
		return true;
		break;
		}
		}
	return result;
	}

int main (){
	
	//1 задание
	int zad1[6] = {1, 0, 1, 1, 1, 0};
	for(int i = 0; i< 6; i++)
	{ cout << zad1[i] << " ";}
	cout << endl;
	rotation(zad1);
	for(int i = 0; i< 6; i++)
	{ cout << zad1[i] << " ";}
	cout << endl;
	
	//2 задание
	int zad2[8];
	zapol(zad2);
	int k;
	for(k = 0; k< 8; k++)
	{ cout << zad2[k] << " ";}
	cout << endl;
	
	//3 задание
	int zad3[6] = {3, 2, 4, 1, 5, 3};
	bool result = sravnen(zad3);
	cout << "Balance " << boolalpha<<result << endl;
	
	
	//4 задание
	int n = 2;
	int zad4[5] = {1, 2, 3, 4, 5};
	for (int v = 0; v < 5; v++){
	cout << zad4[v]<<" ";
	}
	cout<<endl;
	sdvig(n,zad4);
	for (int v = 0; v < 5; v++){
		cout << zad4[v]<<" ";
	}
	return 0;
}