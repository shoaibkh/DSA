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

int binaryToDec(int binNum){
    int ans = 0, pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        ans += (rem*pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    cout<<decToBinary(3)<<endl;
    cout<<binaryToDec(11)<<endl;
    return 0;
}