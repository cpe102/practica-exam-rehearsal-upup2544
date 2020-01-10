#include<iostream>
using namespace std;

int main(){
    float y;
    string x;
    cout<<"What is your name?:";
    cin>>x;
    cout<<"What is your GPA?:";
    cin>>y;
if(y<3.50){
    cout<<"Try harder, "<<x<<"!!!";
}else{
    cout<<x<<"InW Jrim Jrim!!!";
}
return 0;
}
