#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

    int bank;
    int RandIndex1;
    int RandIndex2;
    int bet;
    int pot;
    int chance;
    int sum;
    int selection;
    int card [13] = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    
    vector<int> hand;
    bool firstRound = true;

    
    void fold();
    void hit();
    void letsplay();
    void start();
    void menuselect();
   
void fold(){
    cout << "Would you like to play again?"<< endl;
       cout << "\t[1] Yes\n\t[2] No" << endl;
       int confirm;
       cin >> confirm;
       if (confirm == 1)
       {
           menuselect();
       }
       else
       {
           cout << "Goodbye!" << endl;
       }
}
   
void hit(){
  hand.push_back(card[rand() % 13]);
  sum += hand.back();
  
  letsplay();
}
    


void print(){
  cout << "Your hand contains a ";

  for (int i = 0; i < hand.size(); i++){
      if (i == hand.size() -1 ){
        cout << "and a " << hand.at(i) << ".\n";
        break;
      }

      cout << hand.at(i) << ", ";
  }

}

void letsplay(){
    srand (time (NULL));

    while(firstRound){
      hand.push_back(rand() % 13);
      cout << "You have been dealt a " << card [RandIndex1] << " and a ";
      hand.push_back(rand() % 13);
      cout << card [RandIndex2] << endl;
      
      sum = card[RandIndex1] + card[RandIndex2];
      firstRound = false;
    }
    
    cout << "\n";
    cout << "You are now at: " << sum << endl;
    cout << "Hit or Fold or stay?" << endl;  //create stay right here
    cout << "\t[1] Hit\n\t[2] Fold" << endl;
    int r = rand() % 2 + 1;
        if (selection == 1)
        {
            hit();
        }
        else if (selection == 2)
        {
            fold();
        }
}

void start(){
    /*initial bank value will be added at the start of the game
     the bank value will by default be 100. */
    bank = 100;
    cout << "<----Welcome to Blackjack Alpha---->\n" << endl;
    menuselect();
}

void menuselect(){
    cout << "The minimum bet in is 5, would you like to bet, raise, or fold?\n" << endl;
    cout << "Your bank: " << bank <<"\n" << endl;
    cout << "\t[1]Bet\n\t[2]Raise\n\t[3]Fold" << endl;
    cin >> selection;
   if (selection == 1) 
   {
       bank = bank - 5;
       letsplay();
   }
   else if (selection ==2 )
   {
       cout << "How much would you like to bet?\n" << endl;
       cin >> bet;
       if (bet > bank)
       {
           cout << "You're fucking broke scrub. GEtG00d3\n" << endl;
           cout << "**Please input a value within your bank limit: " << bank<< "**\n" << endl;
           menuselect();
       }
       else if (bet < 5)
       {
           cout << "Really nigguh?" << endl;
           cout << "I literally just told you the minimum bet in was 5" << endl;
           cout << "You stupid? \n\n" << endl;
           menuselect();
       }
       else if (bet > 5 && bet < bank)
       {
           bank = bank - bet;
           letsplay();
       }
   }
   else if (selection == 3)
   {
       fold();
   }
} 

int main()
{
    start();
    return 0;
}