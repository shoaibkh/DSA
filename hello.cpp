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
    // int a;
    // int b;
    // cout << "enter value of a"<<endl;
    // cin >> a;
    // cout << "enter value of b"<<endl;
    // cin >> b;
    // cout << "value of a is "<<a<<endl;
    // cout << "value of b is "<<b<<endl;

    // cout << "sum of a and b is " <<(a+b)<<endl;
    char ch;
    cout<<"enter any character"<<endl;
    cin>>ch;
    if((int)ch>=65 && (int)ch<=90){
        cout<<"the character is uppercase"<<endl;
    }else if((int)ch>=97 && (int)ch<=122){
        cout<<"the character is lowercase"<<endl;
    }
    return 0;
}