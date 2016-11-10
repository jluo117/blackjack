#include <iostream>

using namespace std; 
   

int main()
{
    int cardtotal = 0;
    int cpucard = 15;
    
    cin >> cardtotal;
    cin >> cpucard;
    
    if (cardtotal>21)
        {cout << "game over :C"<<endl;}
    else if (cardtotal > cpucard)
        {cout << "you win" << endl;}
    else if (cpucard > cardtotal)
        {cout << "you lose" << endl;}

return 0;
}
