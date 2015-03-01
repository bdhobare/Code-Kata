#include <iostream>
using namespace std;
string encrypt(string input);
//return ASCII sum of each character in the code
int decrypt(string input){
    //The key to be used for encrypting and decrypting
    char key[3]={'a','b','c'};
    int sum;//hold the final summation
    string output=input;
    for(int i=0;i<input.size();++i){
        output[i]=input[i]^key[i% (sizeof(key)/sizeof(char))];
    }
    //sum the ASCII values in the string
    for(int  i=0;i<output.size();++i){
        sum +=(int)output[i];
    }
    cout<<"The decrypted/original message is:"<<output<<endl;

    return sum;
}
int main(int argc,char* argv[]){
    //Encrypt the message
    string encrypted=encrypt("message");
    //Decrypt the message
    int decrypted=decrypt(encrypted);
   cout<<"The sum of ASCII codes in the original text:"<<decrypted<<endl;

    return 0;

}
//Additional method to encrypt for testing purposes
string encrypt(string input){
    //The key to be used for encrypting and decrypting
    char key[3]={'a','b','c'};
    string output=input;
    for(int i=0;i<input.size();++i){
        output[i]=input[i]^key[i% (sizeof(key)/sizeof(char))];
    }
    return output;
}
