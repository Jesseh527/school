#include <iostream>
#include <vector>
// Do NOT include <algorithm>
using namespace std;
// Implement Here for C++ code if necessary
int solution(vector<int>& a, vector<int>& e){
// Implement Here for C++ code
    int maxDays = 0;
    int n = a.size();
    int curentTaskDays = 0;
    int max;
    int min;
    vector<int> employeeOrder{2,0,1};
    for (int i = 0; i < n ;i++ ){
        if (i < 3){
            max = std::max(a[i],e[employeeOrder[i]]);
            min = std::min(a[i],e[employeeOrder[i]]);
        }else{
            max = std::max(a[i],e[i]);
            min = std::min(a[i],e[i]);
        }


        curentTaskDays =  max/min;

        if (maxDays < curentTaskDays){
            maxDays = curentTaskDays;
        }
    
    }

    return maxDays;

};
int main(void){

 vector<int> assignment1{ 5,2,4 };
 vector<int> employee1{ 1,7,5 };
 vector<int> assignment2{ 3,18,15,9 };
 vector<int> employee2{ 6,5,1,3 };
 cout << "Solution1 = " << solution(assignment1, employee1) << endl;
 cout << "Solution2 = " << solution(assignment2, employee2) << endl;

 return 0;
}