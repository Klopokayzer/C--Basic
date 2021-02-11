#include <iostream>
#include <cstdarg>

//я так и не понял как менять значения...
using namespace std;
void rotation(int count, ...){
	va_list lst;
	va_start(lst, count);
	for (int i = 0; i < count; i++){
		cout<<va_arg(lst, int)<<" ";
	}
	for (int i = 0; i < count; i++){	
		if (va_arg(lst, int)==1)
		{
			count=0;
		} else {
			count=1;
		}
	}
	for (int i = 0; i < count; i++){
		cout<<va_arg(lst, int)<<" ";
	}
	va_end(lst);
}
int main (int argc, char** argv){
	rotation(6, 1, 0, 1, 1, 0, 0);
	return 0;
}