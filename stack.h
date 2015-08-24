#include <iostream>
#include <cstring>
using namespace std;

//constant declaration
const unsigned MAX_SIZE = 50;

class Stack {
 public:
  Stack();
  void Push( char );
  int Length();
  char Top();
  char Pop();
  bool Empty();
  void Full();
  void Clear();

 private:
  char stack[MAX_SIZE+1];
  int top;
};
