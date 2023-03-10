#include <cstring>
#define NODE_SIZE 24

class Node {
 public:
  Node() {}

  // Mutator - set the value to some string
  void SetValue(const char * value) {
    // BUG: should use strncpy(_value, value, NODE_SIZE-1);
    strcpy(_value, value);
  }

  // Accessor for value as a string
  const char* GetValue() const {
      return _value;
  }

  // Accessor for ASCII code for ith individual character of the value
  int GetCode(int i) const {
      return (int) _value[i];
  }

 private:
  char _value[ NODE_SIZE ];
};
