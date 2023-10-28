#include <iostream>

int main(){
  //a programs that iterates through 0-100
  //when a multiply of 3, replace the number with fizz
  //when a multiply of 5, replace the number with buzz
  //when a multiply of 3 and 5, replace the number with fizz buzz

//increment from 1 - 100
  for(int i = 1; i <= 100; i++){
    //if i is a multople of 3 AND if i is a multiple of 5 
    if(i%3 == 0 && i%5 == 0){
      std::cout << "FizzBuzz\n";
    }
    //if i is a muliple of 3
    else if(i%3 == 0 ){
      std::cout << "Fizz\n";
    }
    //if i is a muliple of 5
    else if (i%5 == 0){
      std::cout << "Buzz\n";
    }
    //print i as a number
    else{
      std::cout << i << "\n";
    }
    
  }
  return 0;
}