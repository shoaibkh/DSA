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

int revNum(int num){
    int revNumber = 0;
    while(num>0){
        int r = num%10;
        revNumber = (revNumber*10)+r;
        num /= 10;
    }
    return revNumber;
}

bool isPowerOfTwo(unsigned long long n) {
    return n != 0 && ( (n & (n - 1)) == 0 );
}

int main(){
    cout<<decToBinary(2)<<endl;
    cout<<decToBinary(3)<<endl;
    cout<<binaryToDec(10)<<endl;
    cout<<binaryToDec(101)<<endl;
    cout<<"power "<<(8&7)<<endl;
    cout<<"rev num "<<revNum(122)<<endl;
    // unsigned long long x;
    // while (cin >> x) {                       // reading loop is fine; test itself has no loop
    //     cout << x << (isPowerOfTwo(x) ? " is " : " is NOT ") << "a power of 2\n";
    // }
    
    return 0;
}
