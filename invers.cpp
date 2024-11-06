#include<iostream>
using namespace std;


void Inverse(string value){

    int size=value.length();
    string array[size];
    int last=size-1;

    for(int i=0;i<size;i++){
        array[i]=value[last];
        last--;
    }
    for(int i=0;i<size;i++){
       cout<<array[i];
        
    }
  

}

int main(){
    string input;
    cout<<"enter you values: ";
    getline(cin,input);
    Inverse(input);
   

}
