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
    cout<<"number of a is "<<a<<endl;
}

void continuousCharacterPattern( int n){
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    cout<<"ch of a is "<<a<<endl;
}

void trianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void reverseTriangelPattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void triangelOfNumber(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

void triangelOfAlphabate(int n){
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void invertedTriangel(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void pyramidTriangel(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j<i+1; j++){
            cout<<j+1;
        }
        for(int j = i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void hollowDiamond(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j = 0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            for(int j = 0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    // squarePattern(5);
    // continuousNumberPattern(2);
    // continuousCharacterPattern(2);
    // trianglePattern(5);
    // reverseTriangelPattern(5);
    // triangelOfNumber(5);
    // triangelOfAlphabate(5);
    // pyramidTriangel(4);
    hollowDiamond(4);
    return 0;
}