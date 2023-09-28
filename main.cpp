#include <algorithm> 
#include <iostream>
#include "accounts.h"
using namespace std;


int main() 
{
int temp = 0;
  for (int left = 0; left < maxAccounts; left++)
    {
      for (int right = left+1; right < maxAccounts; right++)
        {
          if (accountBalances[left] > accountBalances[right])
          {
            temp = accountBalances[left];
            accountBalances[left] = accountBalances[right];
            accountBalances[right] = temp;
          }
        }
    }
    cout << "\nPrinted Values: "<< endl;
  for(int i = 0; i < maxAccounts; i++)
    {
      cout << accountBalances[i]<<endl;
    }
  cout << "End" << cpuTime() << endl;
cout << "Start: "<< cpuTime() << endl;

sort(accountBalances,accountBalances+maxAccounts);
  cout << "\nPrinted Values: " << endl;
  
  for(int i = 0; i < maxAccounts; i++)
  {
    cout << accountBalances[i] << endl; 
  }
cout << "End " << cpuTime() << endl;



















  
  return 0;
}