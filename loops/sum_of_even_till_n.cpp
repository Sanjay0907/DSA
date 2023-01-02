#include <iostream>
using namespace std;

int main(){
int num,count=0,sum=0;
cout<<"Enter the number till which you want to find the sum of N"<<endl;
cin>>num;

while(count<=num){
if(count%2==0){
    sum+=count;
}
count++;
}
cout<<"The sum of all the even number till "<<num<<" is "<<sum;
}