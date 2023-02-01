#include <iostream> 
#include <vector> 
// Do NOT include <algorithm> 
 
using namespace std; 
 
 // Implement Here for C++ code if necessary 
void sort_vector(vector<int>& v){
  int i = 0,j = 2, min;
  vector<int> tmp{}; 
  tmp = v;
  int size = v.size();
  while (i < size){
    v[i] = tmp[j];
    if (j == 2){
      j -= 2;
    }else if(j == 1) {
      j += 2;
    }else{
      j++;
    }
    i++;
  }
 
 }

 
int solution(vector<int>& a, vector<int>& e){ 
 
 // Implement Here for C++ code 
  int max = 1;
  int current;
  int size = e.size();
  for(int i = 0; i < size ; i++){
    current = a[i] / e[i];
    if(current > max){
      max = current;
    }
 }
 
  return max;
 
} 
/*void print(vector<int>& v ){
  cout << '[' ;
  for(int i = 0 ; i < v.size(); i++ ){
    cout << v[i]<<',';
  }
  cout << ']' << endl;


}*////to test sort
 
int main(void){ 
   
  vector<int> assignment1{ 5,2,4 }; 
  vector<int> employee1{ 1,7,5 }; 
  vector<int> assignment2{ 3,18,15,9 }; 
  vector<int> employee2{ 6,5,1,3 }; 
  //print(employee1);
  //print(employee1);
  sort_vector(employee1);
  sort_vector(employee2);
  //print(employee1);
  //print(employee1);
 
  
  
  cout << "Solution1 = " << solution(assignment1, employee1) << endl; 
  cout << "Solution2 = " << solution(assignment2, employee2) << endl; 
   
  return 0; 
} 
 