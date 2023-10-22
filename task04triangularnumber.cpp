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