#include <iostream>
#include <stdlib.h>
int main() {
  
srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";
std::cin >> user;

if(user == computer){
  std::cout << "It's a tie!\n";
}else if(user == 1){
  if(computer == 2){
    std::cout << "You draw rock. Computer draws paper. Paper covers rock. You lose!";
  }else{
    std::cout << "You draw rock. Computer draws scissors. Rock smashes scissors. You win!";
  }
}else if(user == 2){
  if(computer == 1){
    std::cout << "You draw paper. Computer draws rock. Paper covers rock. You win!";
  }else{
    std::cout << "You draw paper. Computer draws scissors. Scissors cuts paper. You lose!";
  }
}else if(user == 3){
  if(computer == 1){
    std::cout << "You draw scissors. Computer draws rock. Rock smashes scissors. You lose!";
  }else{
    std::cout << "You draw scissors. Computer draws paper. Scissors cuts paper. You win!";
  }


}
}











