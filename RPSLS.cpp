#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;

/*
Rock beats scissors & lizard
Paper beats spock & Rock
Scissors beats paper & lizard
Lizard beats spock & paper
Spock beats scissors & rock
*/

int main() {
  // computers random choice
  srand (time(NULL));
  int computer = rand() % 3 + 1;

  int user = 0;

  cout << "Rock, Paper, Scissors, Lizard, Spock!\n";

  cout << "1) Rock!\n";
  cout << "2) Paper!\n";
  cout << "3) Scissors!\n";
  cout << "4) Lizard!\n";
  cout << "5) Spock!\n";
  cout << "Shoot!\n";
  
  cin >> user;

  switch(user){
    case 1:
      cout << "You choose Rock\n";
      break;
    case 2:
      cout << "You choose Paper\n"; 
      break; 
    case 3:
      cout << "You choose Scissors\n";
      break;
    case 4:
      cout << "You choose Lizard\n";
      break;  
    case 5:
      cout << "You choose Spock\n";
      break;
    default:
      cout << "Invalid!";
  }

  switch(computer){
    case 1:
      cout << "Computer chooses Rock\n";
      break;
    case 2:
      cout << "Computer chooses Paper\n"; 
      break; 
    case 3:
      cout << "Computer chooses Scissors\n";
      break;
    case 4:
      cout << "Computer chooses Lizard\n";
      break;  
    case 5:
      cout << "Computer chooses Spock\n";
      break;
    default:
      cout << "Invalid!";
  }

if (user == computer){
  cout << "It's a tie!\n";
}

// user choose rock
else if (user == 1){
  if (computer == 2){
    cout << "You lose!\n";
  }
  if (computer == 3){
    cout << "You Win!\n";
  }
  if (computer == 4){
    cout << "You Win!\n";
  }
  if (computer == 5){
    cout << "You Lose!\n";
  }
}

// user chooses paper
else if (user == 2){
  if (computer == 1){
    cout << "You Win!\n";
  }
  if (computer == 3){
    cout << "You Lose!\n";
  }
  if (computer == 4){
    cout << "You Lose!\n";
  }
  if (computer == 5){
    cout << "You Win!\n";
  }
}

// user chooses scissors
else if (user == 3){
  if (computer == 1){
    cout << "You Lose!\n";
  }
  if (computer == 2){
    cout << "You Win!\n";
  }
  if (computer == 4){
    cout << "You Win!\n";
  }
  if (computer == 5){
    cout << "You Lose!\n";
  }
}

// user choose lizard
else if (user == 4){
  if (computer == 1){
    cout << "You Lose!\n";
  }
  if (computer == 2){
    cout << "You Win!\n";
  }
  if (computer == 3){
    cout << "You Lose!\n";
  }
  if (computer == 5){
    cout << "You Win!\n";
  }
}

else if (user == 5){
  if (computer == 1){
    cout << "You Win!\n";
  }
  if (computer == 2){
    cout << "You Lose!\n";
  }
  if (computer == 3){
    cout << "You Win!\n";
  }
  if (computer == 4){
    cout << "You Lose!\n";
  }
}


return 0;
}
