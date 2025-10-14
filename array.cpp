#include <iostream>
using namespace std;


int findMin(){
    int smallest = INT_MAX;
    int marks[] = {10,20,30,40,50};
    int size = sizeof(marks)/sizeof(int);
    for(int i =0; i<size; i++){
        smallest = max(marks[i], smallest);
    }
    return smallest;
}

int findMax(){
    int maximum = INT_MIN;
    int marks[] = {10,20,30,40,50};
    int size = sizeof(marks)/sizeof(int);
    for(int i =0; i<size; i++){
        maximum = max(marks[i], maximum);
    }
    return maximum;
}

int main(){
    cout<<findMax()<<endl;
    return 0;
}