#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  int HP;
  int STM;
  int MP;
  int oppHP;
  int oppSTAMINA;
  int oppMP;
  char input;
  int x;
  string savex;
{  ifstream save ("save.txt");
if (save.is_open())
{
( getline (save,savex) );
save.close();
}
  if (savex == "1"){cout << "scampato pericolo" << endl;}
  else {
  cout << "your opponent is capra demon" << endl << "capra demon: 20 HP" << endl << "you: 20HP / 20STM" << x << endl;
       oppHP = 20;
  oppSTAMINA = 50;
       oppMP = 5;
         STM = 20;
          HP = 20;
  cout << "chose your move wisely" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "input:";
 
 cin >> input;
 switch(input)
{
case 'A':
case 'a':
oppHP = oppHP-oppHP/10;
STM = STM-10;
cout << oppHP << endl;
cout << STM;
break;
case 'B':
case 'b':
oppHP = oppHP-oppHP/5;
STM = STM-17;
cout << oppHP << endl;
cout << STM;
break;
case 'C':
case 'c':
oppHP = oppHP-oppHP/20;
STM = STM-1;
cout << oppHP << endl;
cout << STM;
break;
case 'D':
case 'd':
return 0;

}
}
{ofstream save;
save.open ("save.txt");
save << "1";
save.close();}
  cout << "your next opponent is bonewheel" << endl << "bonewheel: 30 HP" << endl << "you: 20HP / 20STM" << endl;
       oppHP = 30;
  oppSTAMINA = 50;
       oppMP = 5;
         STM = 20;
          HP = 20;
  cout << "chose your move wisely" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "input:";
 
 cin >> input;
 switch(input)
{
case 'A':
case 'a':
oppHP = oppHP-oppHP/10;
STM = STM-10;
cout << oppHP << endl;
cout << STM;
break;
case 'B':
case 'b':
oppHP = oppHP-oppHP/5;
STM = STM-17;
cout << oppHP << endl;
cout << STM;
break;
case 'C':
case 'c':
oppHP = oppHP-oppHP/20;
STM = STM-1;
cout << oppHP << endl;
cout << STM;
break;
case 'D':
case 'd':
return 0;
}
}
  return 0;
}
