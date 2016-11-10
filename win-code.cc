#include <iostream>

using namespace std; 
   

int main()
{
    int cardtotal = 0;
    int  = 15;
    int money=100;
    while (money>0)
    {cin >> cardtotal;
    cin >> cpucard;
    
    if (cardtotal>21)
        {cout << "game over :C"<<endl;
            money=money-20;
        }
    else if (cardtotal > cpucard)
        {cout << "you win" << endl;
            money=money+20;
        }
    else if (cpucard > cardtotal)
        {cout << "you lose" << endl;
            money=money-20;
        }
cout << money;}
return 0;
}
