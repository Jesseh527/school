#include "Student.cpp" 
#include <string>
#include <iostream>
int main(){

        int capacity = 0;
	int size = 0;
	cout << "enter capasity: ";
	cin >> capacity;
 
        Student* groups = new Student[capacity];
	int id;
	string name;

	cout << "id? ";
	cin >> id;
	while (id != 0){
		cout << "name? ";
		cin >> name;
		Student newstudent(id,name);
		groups[size] = newstudent;
		size++;
		cout << "id? ";
		cin >> id;
	}
	cout << endl;
	cout << "The students are:" << endl;
	for( int i = 0; i < size; i++){
		groups[i].print_student();
	
	}
	
}
