//lab11.cpp
#include "Map.cpp"
int main(){
  Map<int,string> studentDB;
  int id;
  string name;
  // enter name and id to input it into a map
  cout << "using index operators to insert new pairs" << endl;
  cout << "Student ID? ";
  cin >> id;
  while(id != 0) {
    cout << "Student Name? ";
    cin >> name;
    cout << endl;
    studentDB[id]=name;

    cout << "Student ID? ";
    cin >> id;
  }
  cout << "\nall student information" << endl;
  studentDB.printMap();
  

  // finds student name using id
  cout << "\nid of student you want to know: ";
  cin >> id;
  cout << "The corisponding name is: " << studentDB[id]<<endl;


  
  

  //chages student name
  cout << "\nchange which one? ";
  cin >> id;
  cout << "... to what name? ";
  cin >> name;
    
  studentDB[id]=name;
  studentDB.printMap();

  //remove student
  cout << "\nremove wich one? ";
  cin >> id;
  studentDB.remove(id);
  studentDB.printMap();

}
