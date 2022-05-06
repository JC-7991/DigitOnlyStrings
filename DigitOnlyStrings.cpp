#include <iostream>
 
const int MAX = 10;
 
bool isDigit(char ch){
  
  if(ch >= '0' && ch <= '9'){
    return true;
  }
  
  return false;

}
 
bool allDigits(std::string str, int len){
 
  bool present[MAX] = {
    false
  };
 
  for(int i = 0; i < len; i++){
 
    if(isDigit(str[i])){

      int digit = str[i] - '0';
      present[digit] = true;

    }

  }

  for(int i = 0; i < MAX; i++){

    if(!present[i]){
      return false;
    }
    
  }
 
  return true;

}
 
int main(){

  std::string str;
  std::cout << "Enter a string: ";
  getline(std::cin, str);
  std::cin.clear();

  int len = str.length();
 
  if(allDigits(str, len)){
    std::cout << "Yes.\n";
  }

  else{
    std::cout << "No.\n";
  }
 
  return 0;

}