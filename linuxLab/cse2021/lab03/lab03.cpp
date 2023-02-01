
#include "Student.cpp"
#include <string>
#include <iostream>
using namespace std;

int main(){
	NodeType*team = nullptr;
	NodeType*ptr = nullptr;
       	NodeType*pre = nullptr;
	NodeType*cur = nullptr;
        
	//Student* groups = new Student[capacity];
	int id;
	string name;
	
	
	cout << "id and name: ";
	cin >> id >> name;
	
	while(id != 0){
		Student ns(id,name);
		ptr = new NodeType(ns);
		ptr -> next = team;
		team = ptr;
		cout << "a new student is added" << endl;

		cout << " id and name: ";
		cin >> id >> name;
	}
	cout << endl;

	ptr = team;
	while(ptr != nullptr){
	  ptr -> student.print_student();
	  ptr = ptr -> next;
	}
	cout << endl;
	
	cout << "id to be removed: ";
	cin >> id;
	cout << endl;

	pre = team;
	if(team -> student.get_id() == id){
	  team = team -> next;
	  delete pre;
	}
	else{
	  while((pre -> next != nullptr) && (pre -> next -> student.get_id() != id)){
	    
	    pre = pre -> next;
	    
	  }
	  if(pre -> next != nullptr){
	    cur = pre -> next;
	    pre -> next = cur -> next;
	    delete cur;
	  }
	}

	
	ptr = team;
	while(ptr != nullptr){
	  ptr -> student.print_student();
	  ptr = ptr -> next;
	}

}
