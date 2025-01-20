#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> myVector; 

  for (int i = 0; i < 10; ++i) {
    myVector.push_back(i); 
  }

  //Correct way to remove even numbers
  myVector.erase(std::remove_if(myVector.begin(), myVector.end(), [](int i){ return i % 2 == 0;}), myVector.end());

  for (int i = 0; i < myVector.size(); ++i) {
    std::cout << myVector[i] << " ";
  }
  std::cout << std::endl;
  return 0; 
} 