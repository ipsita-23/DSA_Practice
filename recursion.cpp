#include<iostream>
using namespace std;
void printkrdo(int n){
    if(n==0){
        return;
    }
    printkrdo(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printkrdo(n);
}
C:\Users\My Pc\cp\I_Parking_Lot.cpp