// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 2

#include <iostream>
#include <iomanip>
using namespace std;

// function declaration
double min(double array[],int array_size){
   // variable declaration
  double min;
  // loop to access all values
    for(int i=0; i < array_size;i++)
{
    // if first element 
      if(i==0)
      {
        // then assign value of ith value to variable 
        min = array[i];
   }
     // else 
    else{
      // check if min is grgeater than ith value
      if(min>array[i])
      {
          // then assign value of ith value to variable
          min=array[i];
   }
}
    
}// return variable
return min;
}
// function declaration
double sum(double array[], int array_size)
{
  //variable declaration
  double sum;
  // loop to access values
    for(int i=0; i< array_size;i++){
      //add each of those values to a sum
        sum= sum+ array[i];
    }// return sum
    return sum;
}
// function declaration 
double average(double array[],int array_size){
   // variable declaration
  double avg;
    // calculate average
    avg= sum(array,array_size)/ array_size;
      // return average   
      return avg;
}

int main()
{
   // variable declaration
   int len = 3;
   // array declaration 
   double array[len]= {1.24,5.68,3.456};
   // output
   cout << "Min: " << fixed << setprecision(3) << min(aray,len) << endl;
   cout << "Sum: " << fixed << setprecision(3) << min(array,len << endl;
   cout << "Avg: " << fixed << setprecision(3) << min(array,len << endl;
   return 0;
}
