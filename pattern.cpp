#include <iostream>
using namespace std;

void squarePattern( int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void continuousNumberPattern( int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}

int main() {
    squarePattern(5);
    continuousNumberPattern(5);
    return 0;
}