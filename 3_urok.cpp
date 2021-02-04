#include <iostream>
#include "3_urok_b.cpp"
using namespace std;

int main ()
{
	// 1 задание
	int const a = 5;
	int const b = 44;
	int const c = 14;
	int const d = 9;
	float aa = static_cast<float>(a);
	float ab = static_cast<float>(b);
	float ac = static_cast<float>(c);
	float ad = static_cast<float>(d);
	float af = aa*(ab+(ac/ad));
	cout<<af<<endl;
	//2 задание
	int g;
	int j = 21;
	int k;
	cin>>g;
	k = (g < 21) ? 21-g : (g-21)*2;
	cout<<k<<endl;
	//3 задание (второй Файл подключен через include, на всякий случай пишу)
	extern int var1;
	extern int var2;
	extern int var3;
	extern int var4;
	float aa1 = static_cast<float>(var1);
	float ab1 = static_cast<float>(var2);
	float ac1 = static_cast<float>(var3);
	float ad1 = static_cast<float>(var4);
	float af1 = aa1*(ab1+(ac1/ad1));
	cout<<af1<<endl;
	//4 задание
	int arr[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
		{{10, 11, 12},{13,14,15},{16,17,18}},
			{{19,20,21},{22,23,24},{25,26,27}}};
	int *pa = &arr[1][1][1];
	int tt = *pa;
	cout<<tt<<endl;
	return 0;
}