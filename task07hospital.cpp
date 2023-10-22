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

   
    
