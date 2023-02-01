// lab07.cpp
#include "Employee.cpp"
#include "DoublyLinkedQueue.cpp"
int main()
{
  //ints
  int rnum;
  
  Queue<int> intque;//1
  cout << "Enqueue positive numbers (enter -1 to stop): ";
  int num;
  cin >> num;
  while(num != -1){
    intque.enqueue(num);
    cin >> num;
  }
  intque.print();
  cout << "How many NUmbers to be removed from queue: ";
  cin >> rnum;
  for(int i = 0;i< rnum; i++){
    intque.dequeue();
  }
  intque.print();

  //strings
  
  Queue<string> strque;
  cout << "Enqueue string (enter exit to stop): ";
  string entStr;
  cin >> entStr;
  while(entStr != "stop"){
    strque.enqueue(entStr);
    cin >> entStr;
  }
  strque.print();
  cout << "How many strings to be removed from queue: ";
  cin >> rnum;
  for(int i = 0;i< rnum; i++){
    strque.dequeue();
  }
  strque.print();
  //Employee
  Queue<Employee> empque;
  int id;
  string name;
  string dept;

  cout <<"Enqueue employee's id, name, dept (enter id 0 to stop): ";
  cin >> id >> name >> dept;
  
 while(id != 0){
   Employee e(id,name,dept);
   empque.enqueue(e);
   cout << "Enqueue employee's id, name, dept: ";
   cin >> id >> name >> dept;
 }
 empque.print();

 cout << "How many employees to be removed from queue: ";
 cin >> rnum;
 for(int i = 0;i< rnum; i++){
   empque.dequeue();
 }
 empque.print();
 
}
