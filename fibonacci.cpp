//Sum of even-valued fibonacci numbers below 4 milllion
#include <iostream>
using namespace std;
int fib();
int main(int argc,char* argv[]){
cout<<fib()<<endl;
return 0;
}
int fib(){
    int lo=1;
    int hi=1;
    int z=lo;
while(hi<4000000){
    z +=hi;
    hi=lo+hi;
    lo=hi-lo;

      }
      return z;
}
