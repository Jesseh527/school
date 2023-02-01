//lab13.cpp
#include "MergeSort.cpp"
#include <fstream>
#include <iostream>
int main(){
  ifstream input("sort.txt");
  int number;
  vector<int> v;
  while (input >> number)
    {
      v.push_back(number);
    }
  input.close();
  mergeSort(v);
  
  cout <<  "The merge sort: ";
  for(int i=0; i < v.size();i++){
    cout << v[i] << " ";
  }
}
