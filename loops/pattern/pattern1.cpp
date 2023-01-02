#include <iostream>
using namespace std;

int main(){
int input,i=1,j=1;
cout<<"Enter the dimension of the pattern : ";
cin>>input;
cout<<endl;
while(i<=input){
    j=1;
    while(j<=input){
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

}