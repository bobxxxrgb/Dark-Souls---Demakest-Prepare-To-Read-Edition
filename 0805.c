#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

  int game;
  int world;
  int undasyl;
  int firelink;
  int undburg;
  int catacombs;
  int petitelondo;
  int hostile;
  char oppatt;
  int fight;
  int hp;
  int stm;
  int opphp;
  int oppstm;
  char input;
  int x;
  int atk;
  int def;
  int oppatk;
  int oppdef;
  int parry;
  char parry2;
  int souls;
  string savex;
  char chose;
  string opponent;
  
void battle() {
for (fight = 1; fight >= 1; x = 9) {  
def=10;
parry2=0;
parry=1;
  cout << "your opponent is: " << opponent << endl << opponent <<" has "<< opphp << "HP, " << oppstm << "STM" << endl << "you: " << hp << "HP, "<< stm << "STM" << endl;
  cout << "chose your move wisely:" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "(E) shield  (F) parry" << endl << "(G) Estus" << endl << "input:";
 
 cin >> input;
 switch(input)
{
case 'A':                    //swing
case 'a':
opphp = opphp-400/oppdef;
stm = stm-10;
if (hostile >= 3) {
oppatt = 0 + rand() % 4; }
else (oppatt = 0);
break;
case 'B':                    //heavy
case 'b':
opphp = opphp-700/oppdef;
stm = stm-17;
if (hostile >= 3) {
oppatt = 0 + rand() % 4; }
else (oppatt = 0);
break;
case 'C':                    //kick
case 'c':
opphp = opphp-1;
stm = stm+10;
if (hostile >= 3) {
oppatt = 0 + rand() % 4; }
else (oppatt = 0);
break;
case 'D':                    //run
case 'd':
fight = 0;
break;
case 'E':                    //shield
case 'e':
def=def+60;
stm=stm-5;
break;
case 'F':                     //parry
case 'f':
if (parry >= 1) {
parry2=0+rand() % 10;
 if (parry2 == 0)
  {cout << "parry" << endl; }
 if (parry2 == 1)
  {cout << "ed" << endl; }
  if (parry2 == 2)
  {cout << "d" << endl; }
  if (parry2 == 3)
  {cout << "IL" << endl; }
  if (parry2 == 4)
  {cout << "il palle" << endl; }
  if (parry2 == 5)
  {cout << "cacca" << endl; }
  if (parry2 == 6)
  {cout << "silvio berlusconi" << endl; }
  if (parry2 == 7)
  {cout << "mario draghi" << endl; }
  if (parry2 == 8)
  {cout << "palle" << endl; }
  if (parry2 == 10)
  {cout << "godo" << endl; }
  if (parry2 == 9)
  {cout << "parry successful" << endl;
  opphp=opphp-opphp/2;
  cout << opphp;}
}        //if (parry >= 1)
  else (cout <<"enemy can't be parried");
switch(oppatt) {
case 0:
cout << "spacing";
hostile++;
break;
case 1:
cout << "slash";
break;
case 2:
cout << "heavy";
break;
case 3:
cout << "shield";
break;
case 4:
cout << "spacing"; }
        }   //switch(input)
      }     //for (fight = 1; fight >= 1; x = 9)
    }       //void battle()
int main() {

  game = 0;
  world = 0;
  undasyl = 0;
  firelink = 0;
  undburg = 0;
  catacombs = 0;
  petitelondo = 0;
  oppatt = 0;
  fight = 0;
  hp = 1000;
  atk = 10;
  def = 10;
  stm = 60;
  parry=0;
  parry2 = 0;
  souls = 0;
  
if (game <= 0) {
cout << "In the Age of Ancients, the world was unformed, shrouded by fog. A land of gray crags, Archtrees and Everlasting Dragons." << endl <<
"But then there was fire, and with fire came disparity. Heat and cold, life and death, and of course, light and dark." << endl << "Then from the Dark, they came, and found the Souls of Lords within the flame." << endl << "Nito, the first of the dead," << endl << "the Witch of Izalith, and her Daughters of Chaos," << endl << "Gwyn, the Lord of Sunlight, and his faithful knights," << endl << "and the furtive pygmy, so easily forgotten." << endl << endl;
cout;
this_thread::sleep_for(chrono::seconds(10));
cout <<"With the Strength of Lords, they challenged the Dragons." << endl << "Gwyn's mighty bolts peeled apart their stone scales." << endl << "The Witches weaved great firestorms." << endl << "Nito unleashed a miasma of death and disease." << endl << "And Seath the Scaleless betrayed his own, and the Dragons were no more." << endl << endl;
this_thread::sleep_for(chrono::seconds(10));
cout << "Thus began the Age of Fire. But soon, the flames will fade, and only Dark will remain." << endl << "Even now, there are only embers, and man sees not light, but only endless nights." << endl << "And amongst the living are seen, carriers of the accursed Darksign." << endl << endl;
this_thread::sleep_for(chrono::seconds(10));
cout <<"'Undead Asylum'" << endl << endl << "Yes, indeed. The Darksign brands the Undead." << endl << "And in this land, the Undead are corralled and led to the north," << endl << "where they are locked away, to await the end of the world." << endl << "... This is your fate." << endl << endl << endl;
this_thread::sleep_for(chrono::seconds(10));
cout << "You're undead, locked in a cage," << endl << "no much of your wits about anymore," << endl << "you see a Knight from an opening in the cieling up above." << endl << "He drops a corpse down in your cage." << endl << "It contains the key to unlock it and escape!" << endl << "The Knight gives you a firendly wave and leaves." << endl << "You hear a huge crash from up above not much later." << endl << "Has something happened?" << endl << "Who was this Knight?" <<endl<<"And what was his purpose? There may be no"<<endl<< "answers, but one must still forge ahead."<<endl<< "You open the cell with the key fallen like grace from above."<<endl<< "You are now free to wander about and find out what fate lies for you ahead."<<endl;
this_thread::sleep_for(chrono::seconds(10));
}
else {}
  return 0;
}
