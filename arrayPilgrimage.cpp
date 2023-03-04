// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 1

#include <iostream>
using namespace std;
int val;
int lower;
int upper;
int main()
{
    
    string cities[]= { "Boulder", "NYC" , "LA" , "Chicago" , "Houston"};
    int sequence[100];
    char letter[52];
    double distance[10];
    int val = 2, upper=65, lower=97;
    for(int i = 0;i <10 ;i++){
        distance[i] = i+5;
    }
    for (int i = 1; i <= 100; i++){
    sequence[i-1] = 6*i;
}
    int count=0;
    for(int i=0; i<52; i+=2){
        letter[i] = char(count+65);
        letter[i+1] = char(count+97);
        count++;
    
}
    for(int i= 0; i < 10;i++){
cout << distance[i] << endl;
}
    for(int i= 0; i<5; i++){
    cout << cities[i] << endl;    
}
    for(int i= 0; i < 100; i++){
    cout << sequence[i] << endl;
}
    for(int i= 0; i < 52; i++) {
    cout << letter[i] << endl;
    }
    return 0;
}
