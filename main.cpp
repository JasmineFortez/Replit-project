//Name: Jasmine Fortez
//Compiler: replit.com
//Date: 11/15/2021
//Purpose: to count the occurrences of each digit in a string

#include <iostream>
#include <string>
using namespace std;


int* count (const string& s){
  char *charPtr = nullptr; 
  charPtr = new char;

  int *list = new int [10];

  int index = 0;
 for(int i = 0; i < 10; i++){
   *(list + i) = 0;
 }
 for(int i = 0; i < s.size(); i++){
  *charPtr = s.at(i);
  index = static_cast <int> (*charPtr - '0');
  *(list + (index)) += 1;
}

  return list;
}

void count(const string& s, int counts[], int size){
  int arrIndex = 0;
  char *charPtr = nullptr; 
  charPtr = new char;
  for(int i = 0; i < size; i++){
    *(counts + 1) = 0;
  }
  for(int i = 0; i < s.size(); i++){
    *charPtr = s.at(i);
    arrIndex = static_cast <int> (*charPtr - '0');
    *(counts + (arrIndex)) += 1;
  }
  for(int i = 0; i < size; i++){
    cout << "counts [" << i << "] is " << *(counts + i) <<endl;
  }

}
int main() {

  int *counts = count("12203AB39");
  int *ptr = counts;
  
  cout << "String to process is 12203AB39" <<endl;
  for(int i = 0; i < 10; i++){
    cout << "counts [" << i << "] is " << *(ptr + i) <<endl;
  }

  cout << "\nString to process is SSN is 343 32 4545 and ID is 434 34 432039" <<endl;
  int size = 10;

  string s = "SSN is 33143 32 4545 and ID is 434 34 43238";
  int * countArr = new int [10]; 
  count (s, countArr, size);
  
return 0;
} 