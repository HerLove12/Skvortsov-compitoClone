/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

ALESSANDRO SKVORTSOV 13/04/2023
*/

# include <iostream>
using namespace std;
int main()
{
  int n, i = 0;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while(i < n)
  {
   cout<<"Bada come la fuma"<<endl;
   i++;
  }
  system("pause");
}
