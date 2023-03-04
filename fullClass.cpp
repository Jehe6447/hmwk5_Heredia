// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 5 Problem 5

// function declaration
int fullClass(bool classroom[][4],int rows, int waitlist){
    // if rows is 0
    if(rows == 0){
      // then output waitlist as it is and return it   
      cout << "Remaining Students: " << waitlist <<endl; 
        return waitlist;
    }
    // else
    else{
      // first for loop for rows 
      for(int i=0; i<rows;i++){
          // second for loop for columns 
          for(int j= 0; j<4; j++){
            // if the elements equal 0   
            if (classroom[i][j] == 0){
               // then if waitlist is greater than 0     
                if (waitlist >0){
                  // the 2d array equals 1      
                  classroom[i][j] = 1;
                    // decrement wailist by 1    
                    waitlist--;
                    }   
                }
               // output the element
              cout << classroom[i][j]<< "";

            }  
        // move to next line
       cout << endl;
        }
      // output updated waitlist 
      cout << "Remaining Students: " << waitlist<< endl;
return waitlist;
}
}

int main()
{
  // variable declaration
  bool classroom[4][4]= {{0,1,1,1},{0,0,0,0},{1,1,0,0},{0,1,0,1}};
  int waitlist = 6;
  // function call
  fullClass(classroom, 4, waitlist);
}
