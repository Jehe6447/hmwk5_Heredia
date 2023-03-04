// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 3b

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
// function that inserts a value after the given index in the array
bool insertAfter(string array[],int numE,int size,int index,string stringtoInsert){
  // if index is greather than or equal to size or number elements is equal to the size return false
  if(index>= size || numE== size) return false;
    // for loop to incrimint index less than i
    for(int i= numE;i>index;i--){
        // set array to move elements over minus 1
        array[i]= array[i-1];
    }
     // set string to insert
    array[index+1]=stringtoInsert;
    return true;
}

int secondPlace(string array[],string stringtoInsert, string stringtoFind,int numE, int size, int count){
if(numE + count > size) return numE;
for(int index=0; index < numE;index++){
    if(array[index]== stringtoFind){
        insertAfter(array,numE,size,index,stringtoInsert);
    numE++;
    }
}
int x=0;
for(int i=0; i< size;i++){
    if(array[i]!= "") x++;
}
return numE;
}
