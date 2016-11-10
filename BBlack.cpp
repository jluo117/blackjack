#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
using namespace std;
    int startmenu;
    //double bank;
    double totalcost;
    string cardnumber;
    int cvvnumber;
    int bank;
    int main();
    int RandIndex1;
    int RandIndex2;
    int bet;
    int pot;
    int chance;
    int fundme;
    bool play = true;
    int sum;
    int selection;
    int card [13] = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    int cputotal;
    vector<int> hand;
    bool firstRound = true;
    int cpuhand;
    int card1;
    int card2;
    int card3;
    void fold();
    void hit();
    void letsplay();
    void start();
    void menuselect();
    void stay();
    void mainmenu();
void mainmenu(){cout << "_\\|/_ _\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_ _\\|/_" << endl;
	cout << "_\\|/_         Welcome to the game of Twenty One!         _\\|/_" << endl;
	cout << "_\\|/_   _____________________________________________    _\\|/_" << endl;
	cout << "_\\|/_  | Rules:                                      |   _\\|/_" << endl;
	cout << "_\\|/_  | + Aces = 1 or 11                            |   _\\|/_" << endl;
	cout << "_\\|/_  | + Dealer wins ties unless player has        |   _\\|/_" << endl;
	cout << "_\\|/_  |   blackjack                                 |   _\\|/_" << endl;
	cout << "_\\|/_  |                                             |   _\\|/_" << endl;
	cout << "_\\|/_  | Winnings:                                   |   _\\|/_" << endl;
	cout << "_\\|/_  | + based on the weight of a given win/loss:  |   _\\|/_" << endl;
	cout << "_\\|/_  | + Your score > Dealer's score - 1:1 payout  |   _\\|/_" << endl;
	cout << "_\\|/_  | + Your score < Dealer's score - 1:1 loss    |   _\\|/_" << endl;
	cout << "_\\|/_  | + Blackjack - 3:2 payout                    |   _\\|/_" << endl;
	cout << "_\\|/_  | + Natural(Auto) Blackjack - 3:2 payout + win|   _\\|/_" << endl;
	cout << "_\\|/_  | + Push(Tie) - 1:1 payout + Dealer break even|   _\\|/_" << endl;
	cout << "_\\|/_  |                                             |   _\\|/_" << endl;
	cout << "_\\|/_  | These odds = your winnings multiplier.      |   _\\|/_" << endl;
	cout << "_\\|/_  | If you in the (betting) mood    ;)          |   _\\|/_" << endl;
	cout << "_\\|/_  |    you can place bet and multiply it by     |   _\\|/_" << endl;
	cout << "_\\|/_  | winnings multiplier at end of game          |   _\\|/_" << endl;
	cout << "_\\|/_  | to see total winnings. GLHF!                |   _\\|/_" << endl;
	cout << "_\\|/_  |               (good luck, have fun!)        |   _\\|/_" << endl;
	cout << "_\\|/_  |_____________________________________________|   _\\|/_" << endl;
	cout << "_\\|/_  ///////////////////////////////////////////////   _\\|/_" << endl;
	cout << "_\\|/_                    Difficulty                      _\\|/_" << endl;
	cout << "_\\|/_   _____________________________________________    _\\|/_" << endl;
	cout << "_\\|/_  | You may play againts a beginner or expert   |   _\\|/_" << endl;
	cout << "_\\|/_  | Dealer:                                     |   _\\|/_" << endl;
	cout << "_\\|/_  | + Beginner   - Dealer stands at soft        |   _\\|/_" << endl;
	cout << "_\\|/_  |                (Ace = 11) 17 and has no AI. |   _\\|/_" << endl;
	cout << "_\\|/_  | + Expert     - Dealer hits at a soft 17     |   _\\|/_" << endl;
	cout << "_\\|/_  |                and has AI.                  |   _\\|/_" << endl;
    cout << "_\\|/_  |      Press enter bank if you want to play   |   _\\|/_" << endl;
	cout << "_\\|/_  |_____________________________________________|   _\\|/_" << endl;
	cout << "_\\|/_  ///////////////////////////////////////////////   _\\|/_" << endl;
//cin>> startmenu;
cin>> bank;
if (bank<20)
{cout<<"you paying too little";}
else if (bank>20)
{totalcost=bank/100.0;
cout<<totalcost<<endl;
cout<<"please enter card info,hit space and enter cvv"<<endl;
cin>>cardnumber;
cin>>cvvnumber;
cout<<"thank you";
menuselect();}}
void funds()
{
    cout << "How much money would you like to deposit into your account?\n" << endl;
    cin  >> fundme;
    bank += fundme;
    cout << "The following amount has been desposited to your bank: " << fundme << endl << endl;
    menuselect();
}

void fold(){
    cout << "Would you like to play again?"<< endl;
       cout << "\t[1] Yes\n\t[2] No" << endl;
       int confirm;
       cin >> confirm;
       if (confirm == 1)
       {
          sum = 0;
          hand.clear();
          firstRound = true;
           menuselect();
       }
       else
       {
           play = false;
           cout << "you win "<<bank/120<<'$' << endl;
           main();
       }
}


 void print(){
  cout << "Your hand contains a ";

  for (int i = 0; i < hand.size(); i++){
      if (i == hand.size() -1 ){
        cout << "and a " << hand.at(i) << ".\n" << endl;;
        break;
      }

      cout << hand.at(i) << ", \n";
  }
}


void hit(){
  hand.push_back(card[rand() % 13]);
  sum += hand.back();
  print();
  letsplay();
}

void stay(){
    /*cin>*/
    card1=(card[rand() % 13]);
    card2=(card[rand() % 13]);
    cpuhand=card1+card2;
    int r=rand()% 1+2;
    if (r==1)
    {cout<<"cpu chooses hit"<< endl;
        card3=(card[rand() % 13]);
        cputotal=card3+cpuhand;
        cout<<card3<< endl;
    }

    else if (r==2)
    {cout << "cpu chooses stay"<<endl;
    cputotal=cpuhand;}
    cout<<"cpu total is "<<cputotal<<endl;

     if (sum>21)
        {cout << "game over :C"<<endl;
            //money=money-bet;

        }
        else if (cputotal>21)
        {
            cout<< "you win cpu busted out"<<endl;
            bank=bank+(bet+bet);
        }
    else if (sum > cputotal)
        {cout << "you win" << endl;
            bank=(bank+bet+bet);
        }
    else if (cputotal > sum)
        {cout << "you lose" << endl;}


cout << bank<<endl;
    menuselect();
}



void letsplay(){
    srand (time (NULL));

    while(firstRound){
      hand.push_back(rand() % 13);
      cout << "You have been dealt a " << hand.at(0) << " and a ";
      hand.push_back(rand() % 13);
      cout << hand.at(1) << endl;

      sum = hand.at(0) + hand.at(1);
      firstRound = false;
    }
    while (sum <= 21){
    cout << "\n";
    cout << "You are now at: " << sum << endl;
    cout << "Hit or Fold or stay?" << endl;  //create stay right here
    cout << "\t[1] Hit\n\t[2] Fold \n\t[3] stay" << endl;
    cin >> selection;
        if (selection == 1)
        {
            hit();
        }
        else if (selection == 2)
        {
            fold();
        }
        else if (selection == 3)
            {stay();}
        if (sum > 21)
    {
        cout << "You have busted.\n" << endl;
        fold();
    }
    }
}

void start(){
    /*initial bank value will be added at the start of the game
     the bank value will by default be 100. */
    bank = 100;
    menuselect();
}

void menuselect(){
    while (bank > 5 && play == true)
    {
    cout << "<----Welcome to Blackjack Alpha---->\n" << endl;
    cout << "The minimum bet in is 5, would you like to bet, raise, or fold?\n" << endl;
    cout << "Your bank: " << bank <<"\n" << endl;
    cout << "\t[1]Bet\n\t[2]Raise\n\t[3]Fold\n\t[4]Add Funds" << endl;
    cin >> selection;
   if (selection == 1)
   {bet=5;
       bank = bank - bet;
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
    else if (selection == 4)
        {
            funds();
        }

    }

}

int main()
{mainmenu();
}
