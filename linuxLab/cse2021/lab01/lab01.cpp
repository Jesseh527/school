#include <fstream>
#include <iostream>
#include "funcs.h"
using namespace std;
int main(){
  int list[CAPACITY];
  int number, size, i, k, index;
  ifstream input("search.txt");

  while (input >> number)   {
    list[i] = number;
    i++;
  }
  input.close();
  
  size = i;
  cout << "The array: ";  
  for(int x = 0; x < size; x++ ){
	  cout << list[x];
	  cout << " ";
       
	}
  cout << endl;
  cout << endl;
  cout << "Enter the key: ";   
  cin >> k;
  cout << endl;
  cout << endl;

	// add your code to call function and print the results
  index = linear_search(list,size,k);
  if (index != -1){
    cout << "The key " << k << " is at the index " << index << "." << endl;
  }else{
    cout << "the key " << k << " is not in the array." << endl;
  }

    return 0;
}
