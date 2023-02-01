#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
 // Default constructor
  Student():id(0),name("")
 {
 }
 // Creates a student with the specified id and name.
  Student(int idvalue, const string& namevalue)
 {
   id = idvalue;
   name = namevalue;
 }
 // Returns the student name.
 string get_name() const
 {
   return name;
 }
 // Returns the student id.
 int get_id () const
 {
   return id;
 }
 // Sets the student name.
 void set_name(const string& namevalue)
 {
  this-> name = namevalue;
 }
 // Sets the student id.
 void set_id(int idvalue)
 {
  this-> id = idvalue;
 }
 // Prints the student id and name.
 void print_student() const
 {
 std:cout << id << " " << name << endl;
 }
private:
 // student name
 string name;
 // student id
 int id;
};
#endif

