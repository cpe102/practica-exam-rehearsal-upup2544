#include<iostream>
using namespace std;

int main(){
    float n=1,x,sum=0; 
while(n>0){
 cout<<"Enter x: ";
    cin>>x;
if(x==0){
    cout<<"sum = "<<sum;
    return 0;
}
    if(x>0){
        sum=sum+x;
    }
    n++;}
}
