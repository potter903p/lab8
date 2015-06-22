#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
#include <new>
using namespace std;
void newHandler()
{
	cerr<<"In the newHandler()\n";
	abort();
}
int main()
{
Mino * mino_ptr;

double * ptr[50];
set_new_handler(newHandler);

srandom(time(NULL));

for(int i=0;i<1000;++i)
{
mino_ptr = genMino();
mino_ptr->paint();

ptr[i]=new double[500000000];
cout<<"\n\nptr["<<i<<"]new success\n\n";
delete mino_ptr;
}
return 0;
}
