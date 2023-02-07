#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d)
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int randomIndex = rand() % 4;
        switch (randomIndex)
        {
            case 0:
                std::swap(*a, *b);
                break;
            case 1:
                std::swap(*a, *c);
                break;
            case 2:
                std::swap(*a, *d);
                break;
            case 3:
                std::swap(*b, *c);
                break;
            default:
                break;
        }
    }
}