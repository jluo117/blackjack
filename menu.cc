#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
using namespace std;
int main(){
    int startmenu;
    double bank;
    double totalcost;
    string cardnumber;
    int cvvnumber;
    cout << "_\\|/_ _\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_ _\\|/_" << endl;
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
cout<<"thank you";}

return 0;
}
    