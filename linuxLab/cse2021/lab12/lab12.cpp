#include "BinaryHeap.cpp"


int main(){
  //declare binary heap
  BinaryHeap <int> printQueue;

  //insets input into print queue
  int job;
  cout << "the priority of print job? ";
  cin >> job;
  while(job != -1){
    printQueue.insert(job);
    cout << "The priority of print job? ";
    cin >> job;  
  }

  //print priority of jobs
  cout << "\nThe priority of print jobs: ";
  printQueue.printJobs();
  cout << endl;

  //delete min (job) amount of times
  cout << "Enter the number of jobs the printer will run: ";
  cin >> job;
  for(int i = job;i > 0; i--){
    printQueue.deleteMin();
  }
  cout << endl;
  
  // prints remaining priority
  cout <<  "The priority of remaining print jobs: ";
  printQueue.printJobs();
  cout << endl;
}
