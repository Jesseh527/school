//lab05.cpp
#include <string>
#include "LinkedList.cpp"
#include "Employee.cpp"


int main()
{
  int x;
  int k;
  int key;

  //creates list
  LinkedList<int> intll;

  //loop to put items in front of the list untill 0 is put through
  cout << "integer: ";
  cin >> x;
  while(x != 0){
    intll.push_front(x);
    cout << "integer: ";
    cin >> x;
  }
  
  //prints size of list
  cout<< " the size of the list is " << intll.get_size()<< endl;
  
  //prints the lsit
  cout << "The list:" << endl;
  intll.print();

  //prompts user to enter key
  cout <<"the key to look for: ";
  cin >> key;
  

  //finds if key is in list
  cout << " is key in list?" << intll.find(key) << endl;

  //prompts user to ennter the number of values to be removed
  cout << " How many values do you want to remove?: ";
  cin >> k;
  cout << endl;

  //loop to remove value
  while(!intll.empty() && k > 0){
    intll.pop_front();
    k--;
  }
  //print whats left of list
  cout << "The linked list is: " << endl;
  intll.print();
  cout << endl;

  string name;
  // creates a linked list for strings
  LinkedList<string> strll;


  
  //input string and loop for puting into linked list
  cout<< "create a lsit of string:" << endl;
  cin >> name;
  while(name != "exit"){
    strll.push_front(name);
    cin >> name;    
  }
  cout << endl;
  //prints size of string list and prints the list
  cout << "The size of the Linked List is: "<< strll.get_size()<<endl;
  
  cout << "The linked list is: " << endl;
  strll.print();  
  //prompts user to ennter the number of values to be removed
  cout << " How many values do you want to remove?: ";
  cin >> k;

  //loop to remove value
  while(!strll.empty() && k > 0){
    strll.pop_front();
    k--;
  }
  //print whats left of list
  cout << "The linked list is: " << endl;
  strll.print();
  cout << endl;


  
  //creates a linked list for employee
  LinkedList<Employee> empll;
  int id;
  string dept;

  //input employee info and loop to put tehm in a linked list
  cout << "Create a list of employees:" << endl;
  cout <<"Enqueue employee id, name, dept(enter id 0 to stop): ";
  cin >> id >> name >> dept;

  while(id != 0){
    Employee e(id, name, dept);
    empll.push_front(e);
    
    cout <<"Enqueue employee id, name, dept(enter id 0 to stop): ";
    cin >> id >> name >> dept;
   
  }
  
  //prints size of employee list and prints the list
  cout << "The size of the Linked List is: "<< empll.get_size()<< endl;
  
  cout << "The linked list is: " << endl;
  empll.print();  
  //prompts user to ennter the number of values to be removed
  cout << " How many values do you want to remove?";
  cin >> k;

  //loop to remove value
  while(!empll.empty() && k > 0){
    empll.pop_front();
    k--;
  }
  //print whats left of list
  cout << "The linked list is: " << endl;
  empll.print();

  
}
