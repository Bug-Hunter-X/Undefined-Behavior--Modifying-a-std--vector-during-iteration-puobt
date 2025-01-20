std::vector<int> myVector; 

for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

for (int i = 0; i < myVector.size(); ++i) {
  std::cout << myVector[i] << " ";
}

//This loop will cause undefined behavior if you modify the vector while iterating
for (int i = 0; i < myVector.size(); ++i) {
  if(myVector[i] % 2 == 0){
    myVector.erase(myVector.begin()+i);
  }
}