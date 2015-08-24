#include "stack.h"
using namespace std;


//default constructor
Stack::Stack() {
  stack[0] = '\0';
  top = 0;
}

//push method
void Stack::Push( char val ) {
  stack[top] = val;
  top=top+1;
}

//method to get the length of the stack
int Stack::Length() {
  cout << top << "items currently in stack" << endl;
  return( top );
}

//method to get to the top of the stack
char Stack::Top() {
  //cout << "reached Top method" << endl;
  return( stack[top-1] );
}

//method to pop
char Stack::Pop() {
  top=top-1;
  return( stack[top] );
}

//method to determine if stack is empty
bool Stack::Empty() {
  bool val;
  val = true;
  if( top > 0 ) {
    val = false;
  }
  return( val );
}

//method to determine if stack is full
void Stack::Full() {
  if( top == MAX_SIZE )
    cout << "The stack is full" << endl;
  else
    cout << "The stack is NOT full" << endl;
}

//method to completely empty stack
void Stack::Clear() {
  while( !Empty() ) {
    Pop();
  }
}
