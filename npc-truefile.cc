#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
int main(){
    int bank;
    int RandIndex1;
    int RandIndex2;
    int cputotal; //cpu card total
    int bet;
    int pot;
    int chance;
    int sum;
    int money=100;
    int selection;
    int card [13] = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    int Uservalue;//user card total
   while (money>0){
       cout<<"bet ";
       cin >>bet;
       if (bet>money)
       {cout<<"you broke";}
       else if (bet<=money){
   cin >> Uservalue;
    cin>>RandIndex1;
    int r=rand()% 1+2;
    if (r=1)
    {cout<<"cpu chooses hit"<< endl;
        RandIndex2=(card[rand() % 13]);
        cputotal=RandIndex2+RandIndex1;
        cout<<RandIndex2<< endl;
    }
    
    else if (r=2)
    {cout << "cpu chooses stay"<<endl;
    cputotal=RandIndex1;}
    cout<<cputotal<<endl;
    
     if (Uservalue>21)
        {cout << "game over :C"<<endl;
            money=money-bet;
            
        }
        else if (cputotal>21){
            cout<< "you win cpu busted out"<<endl;
            money=money+bet;
        }
    else if (Uservalue > cputotal)
        {cout << "you win" << endl;
            money=money+bet;
        }
    else if (cputotal > Uservalue)
        {cout << "you lose" << endl;
            money=money-bet;
        }
cout << money<<endl;}
    return 0;
    }