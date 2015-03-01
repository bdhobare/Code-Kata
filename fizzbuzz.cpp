#include <sstream>
#include <string>
#include <iostream>
#define FIZZ "FIZZ"
#define BUZZ "BUZZ"
#define FIZZBUZZ "FIZZBUZZ"
using namespace std;
//Forward declaration
string fizzbuzz(int number);
int main(int argc,char* arvg[]){
    int input;
    //get input,can be file or cin
    cout<<"Enter a number:";
    cin>>input;
    //call the function
    cout<<fizzbuzz(input)<<endl;
    return 0;
    }
    //Method definition
    string fizzbuzz(int number){
      if(number !=0 && number%3==0 && number%5==0){
          return FIZZBUZZ;
          }else if(number !=0 && number%3==0){
          return FIZZ;
          }else if(number !=0 && number%5==0){
          return BUZZ;
          }else{
            return static_cast<ostringstream*>( &(ostringstream() <<number) )-> str();
          }
    }
