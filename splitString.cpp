// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 4

// function declaration
int split(string input_string, char seperator, string arr[], int arr_size){
  // varriable declaration
  int currentPieces = 0;
  int seperatorCount = 0;
  int index = 0;
  // storing my string length in a variable
  const int stringLength = input_string.length();
  // if the input string has no elements return 0
  if (input_string == "") return 0;
 // for loop for rows
  for (int i = 0; i < stringLength; i++) {
    int length_to_do = i - index;
    if (currentPieces < arr_size) {
      if (input_string[i] == seperator) {
        arr[currentPieces] = input_string.substr(index, length_to_do);
        currentPieces++;
        seperatorCount++;
        index = i + 1;
      }
      // if 
      if (i + 1 == stringLength) {
        arr[currentPieces] = input_string.substr(index, length_to_do + 1);
        currentPieces++;
      }
    }
    else return -1;
  }
  if (seperatorCount == 0) {
    arr[0] = input_string;
    return 1;
  }
  return currentPieces;
}
