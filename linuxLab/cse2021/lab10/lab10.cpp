#include "Set.cpp"

// print function which use iterator to print every element in a set.print function which uses itorator
template <typename C>
void print(const Set<C> & s)
{
  
  for(typename Set<C>::iterator itr = s.begin(); itr != s.end(); ++itr){
    cout << *itr << ", ";
   
  }
}

//overload set operator + which returns a new set which is the union of two sets.
template <typename C>
Set<C> operator+(const Set<C> & s1, const Set<C> & s2)
{
  Set<C> result;
  
  for(typename Set<C>::iterator itr = s1.begin(); itr != s1.end(); ++itr){
    result.insert(*itr);
  }
  for(typename Set<C>::iterator itr = s2.begin(); itr != s2.end(); ++itr){
    result.insert(*itr);
  }
  return result;
}


//overload set operator - which returns the set difference between two sets
template <typename C>
Set<C> operator-(const Set<C> & s1, const Set<C> & s2)
{
  Set<C> result;
  // ADD YOUR CODE return result;
  for(typename Set<C>::iterator itr = s1.begin(); itr != s1.end(); ++itr){
    result.insert(*itr);
  }
  for(typename Set<C>::iterator itr = s2.begin(); itr != s2.end(); ++itr){
    result.remove(*itr);
  }
  return result;
}


//implement set intersection function which returns the intersection of two sets.
template <typename C>
Set<C> operator*(const Set<C> & s1, const Set<C> & s2)
{
  Set<C> result;
  // ADD YOUR CODE return result;
  for(typename Set<C>::iterator itr = s1.begin(); itr != s1.end(); ++itr){
    if(s2.contains(*itr)){
      result.insert(*itr);
    }
  }
  return result;
}

int main()
  {
    Set<int> setA;
    Set<int> setB;
    int intin;

    //setA
    cout << "enter int for set A (to stop enter 0): " << endl;
    cin >> intin;
    while(intin != 0){
      setA.insert(intin);
      cin >> intin;
    }
    cout << "printed values of set A:" << endl; 
    print(setA);
    cout << endl;

    //setB
    cout << "enter int for set B (to stop enter 0): " << endl;
    cin >> intin;
    while(intin != 0){
      setB.insert(intin);
      cin >> intin;
    }
    cout << "printed values of set B:" << endl; 
    print(setB);
    cout << endl;

    //union int
    Set<int> theUnion = setA + setB;
    cout << " the union of set A and set B: ";
    print(theUnion);
    cout << endl;

    //difrence int
    Set<int> difrence = setA - setB;
    cout << " the difference of set A and set B: ";
    print(difrence);
    cout << endl;

    //intersection 
    Set<int> intersection = setA * setB;
    cout << " the intersection of set A and set B: ";
    print(intersection);
    cout << endl;

  



    Set<string> setS;
    Set<string> setT;
    string strin;
    //setS
    cout << "enter values for set S (to stop enter \"exit\"): " << endl;
    cin >> strin;
    while(strin != "exit"){
      setS.insert(strin);
      cin >> strin;
    }
    cout << "printed values of set S:" << endl; 
    print(setS);
    cout << endl;

    //setT
    cout << "enter values for set T (to stop enter \"exit\"): " << endl;
    cin >> strin;
    while(strin != "exit"){
      setT.insert(strin);
      cin >> strin;
    }
    cout << "printed values of set T:" << endl; 
    print(setT);
    cout << endl;

    //union string
    Set<string> theStrUnion = setS + setT;
    cout << " the union of set S and set T: ";
    print(theStrUnion);
    cout << endl;

    //difrence string
    Set<string> strDifrence = setS - setT;
    cout << " the difference of set S and set T: ";
    print(strDifrence);
    cout << endl;

    //intersection string
    Set<string> strIntersection = setS * setT;
    cout << " the intersection of set S and set T: ";
    print(strIntersection);
    cout << endl;
  

  }


