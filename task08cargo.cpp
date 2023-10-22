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
