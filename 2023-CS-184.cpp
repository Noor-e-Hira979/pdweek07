task#01
#include<iostream>
using namespace std;
void printStars(int rowSize);

main(){
    int rowSize;
    cout<<"Enter desired number of rows: ";
    cin>>rowSize;
    printStars(rowSize);

}
void printStars(int rowSize)
{
    for(int row=1; row<=rowSize; row++)
    {
        for(int col= 15;col> row;col--){
            cout<<"*";
        
        }
        cout<<endl;
    }
}

task#02
#include<iostream>
using namespace std;
void printStars(int rowSize);
main(){
     int rowSize;
    cout<<"Enter desired number of rows: ";
    cin>>rowSize;
    printStars(rowSize);

}
void printStars(int rowSize)
{
   for(int row=1; row<=rowSize; row++)
    {         
        
        for(int col= 1;col<= row;col++){
   

            cout<<"*";
        
        }
        cout<<endl;
    }
      
    
    
    for(int row=1; row<=rowSize; row++)
    {
        for(int col= 30;col> row;col--){
            cout<<"*";
        
        }
        cout<<endl;
}}
 

task#03
#include<iostream>
using namespace std;
void amplify(int num);
main(){
   int num;
   cout<<"Enter the number to Amplify: ";
   cin>>num;
    amplify(num);

}
void amplify(int num){
    int i;
    for( i=1 ; i<=num; i++){
  if(i%4==0){
         cout<<i*10<< ", ";
    }
  if(i==num){
    cout<<i;
  }
    else
    {cout<<i<<", ";}
    
}}


task#04
#include<iostream>
using namespace std;
void triangle(int tri);

main(){
    int tri;
    cout<<"Enter the number of triangle: ";
    cin>>tri;
    cout<<"Dots in the Triangle: ";
      triangle(tri);
   
}
void triangle(int tri){
    int sum = 0;
for(int i=1; i<=tri; i=i+1){
    sum = sum + i;
}
cout << sum;
}

task#05
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
   

task#06
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

 
task#07
#include<iostream>
using namespace std;
int hospital(int days);
int tTreated;
int tUntreated;
main(){
int days;
cout<<"Enter Number of days you visited Hospital: ";
cin>>days;
hospital(days);
cout<<"Treated: "<<tTreated <<endl;
cout<<"Untreated: "<<tUntreated ;
}

int hospital(int days){

    int sum=0;
    int doctors=7;
    int treated=0;
    int untreated=0;
    int patients;

    for (int i=1; i<=days; i++){
        cout<<"Number of patients who visited hospital on day " << i <<": ";
        cin>>patients;
     

if (tTreated<tUntreated && i%3==0){
    
        doctors=doctors+1;
    }
    if(patients<=doctors){
        treated=patients;
        untreated=0;
    }
    else{
        treated=doctors;
        untreated=patients-doctors;
    }
    tTreated=tTreated+treated;
    tUntreated=tUntreated+untreated;
}

    
    
    return 0;


}

   
 task#08
#include<iostream>
#include<iomanip>
using namespace std;
int transportation(int cargo);

main(){
int cargo;
cout<<"Enter the count of cargo for tranportation: ";
cin>>cargo;
transportation(cargo);
}

int transportation(int cargo){
int sum=0;
int minibus;
int truck;
int train;
int total;
int tonnage;
int percentage;
int permini=0;
int pertrain=0;
int pertruck=0;

for (int i=1; i<=cargo; i++){
    
        cout<<"Enter the tonnage of cargo for " << i <<": ";
        cin>>tonnage;
sum=sum+tonnage;
percentage=(cargo/sum)*0.1;

        if(tonnage<=3){
minibus=tonnage*200;
permini=(tonnage/sum)*0.1;
        }
        if(tonnage>=11){
            truck=tonnage*175;
        pertruck=(tonnage/sum)*0.1;  
        }
        if (tonnage>11){
train=train*25;
pertrain=(tonnage/sum)*0.1;
        }}
total=(minibus+truck+train)/sum;
cout<<total;
cout<<permini;
cout<<pertruck;
cout<<pertrain;




return 0;
}

