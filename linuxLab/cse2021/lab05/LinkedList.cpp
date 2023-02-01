// LinkedList.cpp
#ifndef LL_H
#define LL_H
#include <iostream>
using namespace std;

template <typename T>
class LinkedList
{
private:
  struct NodeType
  {
    T data;
    NodeType* next;

    NodeType(): data(), next(nullptr)
    {}
    NodeType(const T& d): data(d), next(nullptr)
    {}
  };
  
public:
  // Default constructor
  LinkedList(): size(0)
  {
    head = new NodeType();
  }

  //Destructor
  ~LinkedList()
  {
    clear();
    delete head;
  }
  // returns true if the linked list is empty
  bool empty( ) const
  {
    return get_size() == 0;
  }
  // Returns the list to the empty state.
  void clear()
  {
    while(!empty()){
      pop_front();
    }
  }

  // Returns the number of items in the list.
  int get_size() const
  {
    return size;
  }
  // Checks if item is in the list.
  bool find(const T& item) const
  {
    NodeType* ptr = head->next;
    
    while(ptr != nullptr && ptr->data != item){
      ptr = ptr -> next;
    }
    if(ptr != nullptr){
      return true;
    }else{
      return false;
    }
  }
  // Inserts item at the front.
  void push_front(const T& item) {
    NodeType* ptr = new NodeType(item);
    ptr ->next = head ->next;
    head ->next = ptr;
    size++;
  }

  // Removes the first item.
  void pop_front()
  {
    NodeType* ptr = head ->next;
    head ->next = ptr-> next;
    delete ptr;
    size--;
  }
  // Prints the list.
  void print() const
  {
    NodeType* ptr = head -> next;
    while(ptr != nullptr){
      cout << ptr-> data << ", ";
      ptr = ptr ->next; 
    }
    cout << endl;
  }
public:
  class iterator
  {
  public:
    iterator(): current(nullptr)
    { }

    T& operator*()
    {
      return current->data;
    }

    iterator& operator++()
    {
      current = current->next;
      return *this;
    }

    bool operator==(const iterator& rhs) const
    {
      return current == rhs.current;
    }
    bool operator!=(const iterator& rhs) const
    {
      return !(*this == rhs);
    }

  private:
    NodeType* current;

    friend class LinkedList<T>;

  };
  iterator begin()
  {
    iterator itr;
    itr.current = head->next;
    return itr;
  }

  iterator end()
  {
    iterator itr;
    itr.current = nullptr;
    return itr;
  }
private:
  int size; // the size of the linked list.
  NodeType* head; // points to the header node.
};
#endif
