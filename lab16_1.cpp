#include <iostream>
using namespace std;

int main(){
int a = 5;
char b = 'A';
char &c = b;
int *x = &a;
char *y = &b;
int **z = &x;
cout << a << " " << b << " " << c << " " << (void*)x << " " << (void*)y << " " << (void**)z << "\n";	
cout << &a << " " << (void*)&b << " " << (void*)&c << " " << x << " " << (void*)y << " " << z  << "\n";
c = 'F';
cout << a << " " << b << " " << c << " " << (void*)x << " " << (void*)y << " " << (void**)z << "\n";	
*y = 'W';
cout << a << " " << b << " " << c << " " << (void*)x << " " << (void*)y << " " << (void**)z << "\n";	
*x = 6;
cout << a << " " << b << " " << c << " " << (void*)x << " " << (void*)y << " " << (void**)z << "\n";	
**z = 7;
cout << a << " " << b << " " << c << " " << (void*)x << " " << (void*)y << " " << (void**)z << "\n";	
	
	return 0;
}