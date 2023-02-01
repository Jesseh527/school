//lab06.cpp
#include "Stack.cpp"
#include <string>

int main()
{
  char c;
  bool b = true;
  Stack<char>chrs;//declare char stack
  
  cout << "Enter the sequence: " << endl;
  cin >> c;
  
  while(c != 'x'){
    if(c == '('){
      chrs.push(c);
    }else{
      if(chrs.empty()){
	b = false;
	break;
      }else{
	chrs.pop();
      }
    }
    cin >> c;
  }
  if(!chrs.empty() || !b){
    cout << "The parentheses are unbalanced." << endl;
  }else{
    cout << "The parentheses are balanced." << endl;
  }
}
 
