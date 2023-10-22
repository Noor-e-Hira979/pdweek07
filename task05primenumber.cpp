#include<iostream>
using namespace std;
bool isPrime(int number);

main(){
    int number;
    cout<<" Enter Number: ";
    cin>>number;
   
   
    cout<<isPrime(number);
}
bool isPrime(int number){
 if (number<=1){
    return false;
 }
 
  int answer=0;
   for(int i = 2; i<=number ; i++){
   
answer= number%i;
if(answer==0){
return false;
   
  }}
 return true;
 }
   
 

