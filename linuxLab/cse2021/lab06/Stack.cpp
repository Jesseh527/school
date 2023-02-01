// Stack.cpp
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
template <typename T>
class Stack
{
public:
 Stack()
 {
 topOfStack = -1;
 items = new T[CAPACITY];
 }

 //Desctructor
 ~Stack()
 {
   clear();
 }

 // Checks if the stack is empty.
 bool empty() const
 {
   return (topOfStack == -1);
 }

 // Makes the stack to the empty state.
 void clear()
 {
   while(!empty()){
     pop();
   }

 }

 // Insert item in the stack.
 void push(const T& item)
 {
   if( topOfStack < CAPACITY - 1){
     topOfStack++;
     items[topOfStack]= item;
   }
 }
 // Return the top element.
 const T& top() const
  {
    if(!empty()){
      return items[topOfStack];
    }
}

 // Removes the top element.
 void pop()
 {
   if(!empty()){
     topOfStack--;
   }
 }

 static const int CAPACITY = 50;
private:

 int topOfStack; // -1 for empty stack
 T* items;
};
#endif

