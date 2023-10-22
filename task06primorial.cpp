#include<iostream>
using namespace std;

int primorial(int number);

main(){
    int number;
    cout<<" Enter Number: ";
    cin>>number;
   
   
    cout<<primorial(number);
}
int primorial(int number){
 int answer;
 int primorial;
 int calculate;
   for(int i = 2; i<=number ; i++){
     for(int p = 1; p<=i ; p++){
   
answer= i%p;
calculate++;
if (calculate==2){
    primorial=primorial*i;
}
     }}}

 