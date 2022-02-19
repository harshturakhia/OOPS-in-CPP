#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.05)
{
    return currentMoney*factor;
}
int main()
{
    int money = 100000;
    cout<<"At the end of 1 year you will have f"<<moneyReceived(money);

}