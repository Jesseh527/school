#include "bst.cpp"

int main()
{
  BinarySearchTree <int> bst;
  int numin;
  //inset num
  cout << "insert the values (to stop, enter 0): " << endl;
  cin >> numin;
  while(numin !=0)
    {
      bst.insert(numin);
      cin >> numin;
    }
  
  cout << endl;
  cout << "Values printed: " << endl;
  bst.printBST();
  cout << endl;
  
  //remove num
  cout << "remove value (enter 0 to stop): " << endl;
  cin >> numin;
  while(numin != 0){
    bst.remove(numin);
    cin >> numin;
  }

  cout << endl;
  cout << "values left:" << endl;
  bst.printBST();
  cout << endl;
  
  /// print range
  int k1,k2;
  cout << "please enter range: ";
  cin >> k1 >> k2;
 cout << "elements in the ranged:" << endl;
 bst.printRange(k1,k2);
 cout << endl;
 
 BinarySearchTree <string> strbst;
 string strin;
 //inset string
 cout << "insert the string (to stop, enter \"exit\"): " << endl;
 cin >> strin;
 while(strin != "exit"){
   strbst.insert(strin);
   cin >> strin;
 }
  
 cout << endl;
 cout << "Strings printed: " << endl;
 strbst.printBST();
 cout << endl;

    

}
