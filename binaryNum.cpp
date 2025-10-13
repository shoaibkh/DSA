#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while(decNum>0){
        int remNum = decNum%2;
        decNum /= 2;
        ans+=(remNum*pow);
        pow*=10;
    }
    return ans;
}

int main(){
    cout<<decToBinary(3)<<endl;
    return 0;
}