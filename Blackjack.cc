#include <iostream>
#include <vector>
using namespace std;


void step1();
void hitstay();
int userHitStay;

std::vector<int> card(13);
card = {11,2,3,4,5,6,7,8,9,10,10,10,10};

void step1()
    { //step1 is when the player meets the dealer and begins the game. 
        int userBet;
        cout << "Welcome to Black Jack. Please place your bet from 1-20: ";
        cin  >> userBet;
        cout << endl;
        cout << " Thank you. You entered: " << userBet;
    
    
    for (int n : card )
        {
            cout << n << "\n";
        }
    }   
    
    
    
    
void hitstay() // hitstay() used for player interaction to draw card or not draw a card.   
    {
        cout << "Would you like to: " << endl;
        cout << "\t[1] Hit" << endl;
        cout << "\t[2] Stay" << endl;
        cin >> userHitStay;
            if (userHitStay == 1)
            {
            
            }
            else if (userHitStay == 2)
            {
                
            }
            else 
            {
                
            }
    
    }

int main()
{
    step1();
    return 0;
}
