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

int main() {
    squarePattern(5);
    return 0;
}