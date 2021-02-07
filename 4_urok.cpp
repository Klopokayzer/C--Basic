#include <iostream>
using namespace std;
int main (){
	// 1 задание
	int a = 25;
	if (a>=10 && a<=20){
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	// 2 задание, 
	int c;
	int k;
	float j;
	cin>>c;
	for (k = 2; k <= c; k++){
		if (c%k==0){
			j++;
		}
	}
	if (j > 1) {
		cout << "Chislo " << c << " ne prostoe" << endl;
	} else {
		cout << "Chislo " << c << " prostoe" << endl;
	}
	// 3 задание
	int const aa = 5;
	int const ab = 5;
	if (aa == 10 && ab == 10 || aa+ab==10) //если я правильно понял задание, что обе константы должны быть по 10, если любая из них должна быть 10, то вместо && будет ||.		
	{
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	
	// 4 задание
	int year;
	cin>>year;
	if (year%4==0){
		if(year%400==0){
			if(year%100!=0){
				cout<<"Year"<<" "<<year<<" "<<"obychniy"<<endl;
			}else cout<<"Year"<<" "<<year<<" "<<"visokosniy"<<endl;
		}else{
			cout<<"Year"<<" "<<year<<" "<<"obychniy"<<endl;
		}
	}else {
		cout<<"Year"<<" "<<year<<" "<<"obychniy"<<endl;
	}
	return 0;
}