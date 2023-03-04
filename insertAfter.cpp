// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 3


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <cassert>

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
