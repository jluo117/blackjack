/* /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
    It's lit bois
    Sidmastaflex is in the building
    Started: 9/29/16 6pm 
    ...Nig Jack...
    \/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\*/

#include <iostream> //basic
#include <iomanip>  //precision is key
#include <cstdlib>  //spotaneous is sexy
#include <ctime>    //JUST FOUND THIS! TIME MANIPULATION BOIS

using namespace std;

//interface

void rules();
void difficulty();
void oneHand();
void makeDeck(int deck[]);
void shuffle(int deck[], int size);
void ShowCard(int card);
void showCards(const int cards[], int numCards, bool hideFirstCard);
void dumpDeck();
int getRandNum(int low, int high);
int CardVal(int card);
int topDeck(int deck[]);
void addToHand(int hand[],int cardToAdd);
void hitTillStand(int dHand[], int deck[], int pHand[]);
int getHand(const int hand[]);
bool playHand(char);
bool hit(char);
void getWinner(const int pHand[], const int dHand[]);
void isBust(const int pHand[], const int dHand[], char Play);
void blackJack(const int pHand[], const int dHand[], char Play);
void autoBJ(const int pHand[], const int dHand[]);
void scores(const int pHand[], const int dhand[]);
void hardOrSoft(int pHand[]);
void sorhAI(int dHand[], int pHand[]);


//across the Glob(al variables)

//int topDeck;
double win = 1.00;
int level;

int main() 
{
    rules();
    difficulty();
    oneHand();
    return 1;
}

void rules()
{
    //Ima try to get sum o dat ASCII dank swank up in here
    
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
	cout << "_\\|/_  |_____________________________________________|   _\\|/_" << endl;
	cout << "_\\|/_  ///////////////////////////////////////////////   _\\|/_" << endl;


}

//you know you like it hard
void difficulty ()
{
	//store that input bby
	cout << "\n"; 
	cout << "level of Difficulty: Beginner = 1, Expert = 2";
	cin >> level;
	cout << "\n";
	
	if (level != 0)
	{
		if (level != 1) {
			//clears error flags
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			cout << "Please only input 0 or 1" << endl;
			chooseLevelofDifficulty();
		}
	}
	
}

void playOneHand()
{
	char Play = 'N';
	
	//Begin game and offer another
	do
	{
		char Draw = 'H';
		
		//make and shuffle deck
		in0t deck[52];
		makeDeck(deck);
		shuffle(deck, 51);
		
		//gimme dem hands
		int phand[10] = {0};
		int dHand[10] = {0};
		
		//FDR: The New deal
		addToHand(pHand, getTopCard(deck));
		addToHand(dHand, getTopCard(deck));
		addToHand(pHand, getTopCard(deck));
		addToHand(dHand, getTopCard(deck));
		
		cout << "_\\|/_ _\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_ _\\|/_" << endl;
		cout << "\n" << endl;
		cout << "Dealer has shuffled and dealt cards. ";
		cout << "\n" << endl;
		
		//lemme see dem hands
		cout << "Your hand: " << endl;
		showCards(pHand, 10, false);
		cout << "\n\nDealers's hand: " << endl;
		showCards(dHand, 10, false);
		
		//Does da yung player want it hard or soft ;)
		hardOrSoft(pHand);
		
		//Does da yung player wanna hit dat?
		while(hit(Draw))
		{
			//Give it to da player
			addToHand(pHand, getTopcard(deck));
			cout << "Your card has been delt\n" << endl;
			
			//FDR: The New Hand
			cout << "Your Hand: " << endl;
			showCards(pHand, 10, false);
			
			//in case of the ace
			hardOrSoft(pHand);
			
			//anyone taking an L?
			isBust(pHand, dHand, 'y');
			
			//anyone gettin dat W?
			blackJack(pHand, dHand, 'Y');
		}
		
		//dealer hits till soft 17
		hitTillStand(dHand, deck, pHand);
		cout << endl;
		
		isBust(pHand, dHand, 'Y');
		
		blackjack(pHand, dHand, 'Y');
		
		//Finds out who the Floyd Mayweather of BJ is
		getWinner(pHand, dHand);
		cout << endl;
		
		//Update winnings multiplier
		cout << "Winnings multiplier: " << win << endl;
	}
	while(playAnotherHand(Play));
}




















