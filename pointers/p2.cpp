#include<Iostream>
using namespace std;


int main(){




   int a = 10;

   int *p = &a;

 cout<<p<<endl;
p = p + 1;
// p gets incremented by 4 bytes
//it points to new address which is 4 bytes ahead
cout<<p<<endl;
   

    return 0;
}