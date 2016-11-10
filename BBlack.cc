#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

#define dblSpace \n\n

using namespace std;

    int bank; //User's money
    int RandIndex1;//random value placeholders
    int RandIndex2;//random value placeholders
    int bet;//user wager
    int pot;//total wager pot value
    int chance;// not implemented yet
    int sum;//sum of random card values
    int selection;// used within menus for selection
    int card [13] = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    vector<int> hand{0};
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
   
void hit(vector<int>& hand){
  hand.push_back(card[rand() % 13]);
  sum += hand.back();
  print(hand);
  letsplay();
}



void print(vector<int>&hand){
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
    cin >> selection;
        if (selection == 1)
        {
            hit(hand);
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