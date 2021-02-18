#include <iostream>

//1 задание
#define ZADAN1(x, y) ((((x) >= 0) && ((x) < (y))) ? "True" : "False")

//2 задание 
#define ZADAN2(arr,num, num2) *(*(arr+(num-1))+(num2-1))

//3 задание
#define ZADAN3(arr2) std:: cout<< sizeof(*(arr2))/sizeof(int) << endl;

using namespace std;
int main () {
	
	//1 задание
	int a = 7;
	int b = 10;
	cout << ZADAN1(a, b) << endl;
	
	//2 задание
	int n = 2; 
	int m = 2;
	
	int** arr = new int *[n];
	for (int i = 0; i < n; i++)
	arr[i] = new int [m];
	
	for (int i = 0;i < n; i++)
		for (int j = 0; j < m; j++) 
		{	
			cout<<"Enter\n";
			cin>>arr[i][j];
		}
	
	for (int i = 0;i < n; i++)
		{
			for (int j = 0; j < m; j++) 
			cout<<arr[i][j]<<" ";
			cout<<"\n";
		}
	int stolb = 1;
	int stroka = 2;
	cout << ZADAN2(arr, stroka, stolb) << endl;
	
	//3 задание
	int arr2[7] = {1,2,3,4,5,12,23};
	ZADAN3(&arr2)
	return 0;
}
