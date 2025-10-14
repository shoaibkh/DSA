#include <iostream>
using namespace std;


int findMin(){
    int smallest = INT_MAX;
    int marks[] = {10,20,30,40,50};
    int size = sizeof(marks)/sizeof(int);
    for(int i =0; i<size; i++){
        smallest = min(marks[i], smallest);
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

int findIndexOfMax(){
    int largest = INT_MIN;
    int marks[] = {10,20,60,40,50};
    int size = sizeof(marks)/sizeof(int);
    int index = 0;
    for(int i =0; i<size; i++){
        if(marks[i]>largest){
            largest = marks[i];
            index = i;
        }
    }
    return index;
}

int findIndexOfMin(){
    int smallest = INT_MAX;
    int marks[] = {50,20,30,40,50};
    int size = sizeof(marks)/sizeof(int);
    int index = 0;
    for(int i =0; i<size; i++){
        if(smallest>marks[i]){
            index = i;
            smallest = marks[i];
        }
    }
    return index;
}



int main(){
    cout<<findIndexOfMin()<<endl;
    return 0;
}