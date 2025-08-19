#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;

  int x;
  int newgame;
  int world;
  int undasyl;
  int asyldemdoor;
  int firelink;
  int undburg;
  int catacombs;
  int petitelondo;
  int hostile;
  char oppatt;
  int fight;
  int hp;
  int maxhp;
  int stm;
  int maxstm;
  int opphp;
  int maxopphp;
  int oppstm;
  int maxoppstm;
  int atk;
  int def;
  int oppatk;
  int oppdef;
  int parry;
  char parry2;
  int souls;
  int oppsouls;
  char chose;
  char input;
  string savex;
  string opponent;
  


void battle() {
for (fight=1;fight==1;x==9) {  
  if (stm<0) {stm=0;}
  def=10;
  cout << "your opponent is: " << opponent << endl << opponent <<" has "<< opphp << "HP, " << oppstm << "STM" << endl << "you: " << hp << "HP, "<< stm << "STM" << endl;
  cout << "chose your move wisely:" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "(E) shield  (F) parry" << endl << "(G) Estus" << endl << "input:";
 
 cin >> input;
 switch(input)
{
case 'A':                                                              //swing
case 'a':
  system("clear");
if (stm-10>=0) {
    this_thread::sleep_for(chrono::seconds(10));
  cout<<"You attack "<<opponent<<" with a sword swing, it dealt "<<400/oppdef<<"HP.";
  this_thread::sleep_for(chrono::seconds(10));
  opphp = opphp-400/oppdef;
  stm=stm-10;
  if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
  }  //if (stm-10>=0)
else (cout<<"You don't have enaugh stamina."<<endl<<endl);
if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
this_thread::sleep_for(chrono::seconds(3));
  break;
case 'B':                                                                //heavy
case 'b':
  system("clear");
  this_thread::sleep_for(chrono::seconds(1));
if (stm-17>=0) {  
  cout<<"You attacked "<<opponent<<" with a heavy sword swing!"<<endl<<endl;
  opphp = opphp-700/oppdef;
    if (stm>0){
    stm = stm-17;};
  if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
  }  //if (stm-17>=0)
else (cout<<"You don't have enaugh stamina."<<endl<<endl);
if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
this_thread::sleep_for(chrono::seconds(3));
  break;
case 'C':                                                                  //kick
case 'c':
  system("clear");
  this_thread::sleep_for(chrono::seconds(1));
  cout<<"You kicked "<<opponent<<"!"<<endl<<endl;
  opphp = opphp-1;
    if (stm<maxstm-10){
    stm = stm+10;}
    else (stm=maxstm);
  if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
  this_thread::sleep_for(chrono::seconds(3));
  break;
case 'D':                                                                    //run
case 'd':
  system("clear");
  if (stm-10>=0) {
  cout<<"You ran past the enemy."<<endl<<endl;
  fight = 0;
  this_thread::sleep_for(chrono::seconds(3));
  break;
  }  //if (stm-10>=0)
else (cout<<"You don't have enaugh stamina."<<endl<<endl);
if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
this_thread::sleep_for(chrono::seconds(3));
case 'E':                                                                     //shield
case 'e':
  system("clear");
  if (stm-5>=0) {
  cout<<"You raised your shield waiting for "<<opponent<<" to attack."<<endl<<
  "your defense rose."<<endl<<endl;
  def=def+60;
    if (stm>0){
    stm=stm-5;}
  this_thread::sleep_for(chrono::seconds(3));
  if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
  break;
  }  //if (stm-5>=0)
else (cout<<"You don't have enaugh stamina.");
if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
this_thread::sleep_for(chrono::seconds(3));
case 'F':                                                                   //parry
case 'f':
  system("clear");
  if (stm-5>=0) {
  cout<<"You tried to parry "<<opponent<<"'s attack."<<endl;
  if (hostile == 3) {
  if (parry == 1) {
  parry2=0+rand() % 10;
  if (parry2 == 0)
  {cout << "You missed." << endl; }
  if (parry2 == 1)
  {cout << "You missed." << endl; }
  if (parry2 == 2)
  {cout << "You missed." << endl; }
  if (parry2 == 3)
  {cout << "You missed." << endl; }
  if (parry2 == 4)
  {cout << "You missed." << endl; }
  if (parry2 == 5)
  {cout << "You missed." << endl; }
  if (parry2 == 6)
  {cout << "You missed." << endl; }
  if (parry2 == 7)
  {cout << "You missed." << endl; }
  if (parry2 == 8)
  {cout << "You missed." << endl; }
  if (parry2 == 10)
  {cout << "You missed." << endl; }
  if (parry2 == 9)
  {cout << "You made the enemy's weapon fly across the room!"<<endl<<
  "You collect the opportunity to attack the enemy exposed!"<<endl<<
  "it's a critic attack! You dealt 500HP";
  opphp=opphp-500;
  if (hostile >= 3) {
  oppatt = 0 + rand() % 4; }
  else (oppatt = 0);
  this_thread::sleep_for(chrono::seconds(3));
  }  //if (parry2 == 9)
  }  //if (parry == 1)
  else (cout<<opponent<<" can't be parried.");
  }  //if (hostile == 3)
  else (cout<<opponent<<" isn't attacking.");
  }  //if (stm-5>=0)
  else (cout<<"You don't have enaugh stamina.");
   if (hostile >= 3) {
   oppatt = 0 + rand() % 4; }
   else (oppatt = 0);
   this_thread::sleep_for(chrono::seconds(3));
  case 'G':
  case 'g':
   system("clear");
   cout<<"You made spacing to get the right opportunity to drink from your Estus flask."
   <<endl<<"You recover 500HP and stamina.";
   hp=hp+500;
   stm=stm+15;
   this_thread::sleep_for(chrono::seconds(3));
   break;
   
switch(oppatt) {
case 0:                      //spacing
  cout<<endl<<endl<<"enemy is spacing.";
  hostile++;
  this_thread::sleep_for(chrono::seconds(3));
break;
case 1:                      //slash
cout << "slash";
this_thread::sleep_for(chrono::seconds(3));
break;
case 2:                      //heavy
cout << "heavy";
this_thread::sleep_for(chrono::seconds(3));
break;
case 3:                      //heavy
cout << "shield";
this_thread::sleep_for(chrono::seconds(3));
break;
case 4:                      //defense
cout << "spacing"; 
this_thread::sleep_for(chrono::seconds(3));

   }   //switch(oppatt)
  }    //switch(input)
 }     //if (fight==1) 
}      //void battle()


void Hollow() {
opphp=69;
maxopphp=69;
oppstm=30;
maxoppstm=30;
oppdef=77;
oppatk=40;
parry=1;
oppsouls=20;
}                                                           //void Hollow()


int main() {
x=9;
newgame     = 0;
world       = 0;
undasyl     = 0;
asyldemdoor = 1;
firelink    = 0;
undburg     = 0;
catacombs   = 0;
petitelondo = 0;
oppatt      = 0;
fight       = 0;
hp          = 1675;
maxhp       = 1675;
atk         = 80;
def         = 230;
stm         = 160;
maxstm      = 160;
parry       = 0;
parry2      = 0;
souls       = 0;
oppsouls    = 0;

if (newgame <= 0) {
system("clear");
cout << "In the Age of Ancients, the world was unformed, shrouded by fog. A land of gray crags, Archtrees and Everlasting Dragons." << endl <<
"But then there was fire, and with fire came disparity. Heat and cold, life and death, and of course, light and dark." << endl << "Then from the Dark, they came, and found the Souls of Lords within the flame." << endl << "Nito, the first of the dead," << endl << "the Witch of Izalith, and her Daughters of Chaos," << endl << "Gwyn, the Lord of Sunlight, and his faithful knights," << endl << "and the furtive pygmy, so easily forgotten." << endl << endl;
this_thread::sleep_for(chrono::seconds(1));



system("clear");
cout <<"With the Strength of Lords, they challenged the Dragons." << endl << "Gwyn's mighty bolts peeled apart their stone scales." << endl << "The Witches weaved great firestorms." << endl << "Nito unleashed a miasma of death and disease." << endl << "And Seath the Scaleless betrayed his own, and the Dragons were no more." << endl << endl;
this_thread::sleep_for(chrono::seconds(1));




system("clear");
cout << "Thus began the Age of Fire. But soon, the flames will fade, and only Dark will remain." << endl << "Even now, there are only embers, and man sees not light, but only endless nights." << endl << "And amongst the living are seen, carriers of the accursed Darksign." << endl << endl;
this_thread::sleep_for(chrono::seconds(1));




system("clear");
cout <<"'Undead Asylum'" << endl << endl << "Yes, indeed. The Darksign brands the Undead." << endl << "And in this land, the Undead are corralled and led to the north," << endl << "where they are locked away, to await the end of the world." << endl << "... This is your fate." << endl << endl << endl;
this_thread::sleep_for(chrono::seconds(1));



system("clear");
cout << "You're undead, locked in a cage," << endl << "no much of your wits about anymore," << endl << "you see a Knight from an opening in the cieling up above." << endl << "He drops a corpse down in your cage." << endl << "It contains the key to unlock it and escape!" << endl << "The Knight gives you a firendly wave and leaves." << endl << "You hear a huge crash from up above not much later." << endl << "Has something happened?" << endl << "Who was this Knight?" <<endl<<"And what was his purpose? There may be no"<<endl<< "answers, but one must still forge ahead."<<endl<< "You open the cell with the key fallen like grace from above."<<endl<< "You are now free to wander about and find out what fate lies for you ahead."<<endl<<endl<<endl;
this_thread::sleep_for(chrono::seconds(1));
system("clear");
};
while (x=9) {
 if (world==0) {
  if (undasyl==0) {
  cout << "'Undead Asylum'" << endl << "'Cage'"<<endl<<endl<<"Select where to go:"<<endl
  <<"(A) Out the cage"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=1;
     break;
   } //switch(chose)
  }  //if (undasyl=0)
  if (undasyl==1) {
  cout<<"'Undead Asylum'"<<endl<<"'Corridor'"<<endl<<endl<<"Select where to go:"<<endl
  <<"(A) Into the cage    (B) Into flooded room    (R) Attack cying undead" <<endl<<endl<<"input: ";
  Hollow();
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=0;
     break;
     case 'b':
     case 'B':
     undasyl=2;
     break;
     case 'r':
     case 'R':
     battle();
     break;
    } //switch(chose)
   }  //if (undasyl=1)
    if (undasyl==2) {
  cout<<"'Undead Asylum'"<<endl<<"'Flooded Room'"<<endl<<endl<<"Select where to go:"<<endl
  <<"(A) Back to the corridor    (B) Up the stairs    (R) Attack floor laid undead" <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=1;
     break;
     case 'b':
     case 'B':
     undasyl=3;
     break;
     case 'r':
     case 'R':
     Hollow();
     battle();
     break;
     }  //switch(chose)
    }   //if (undasyl==2)
    if (undasyl==3) {
cout<<"'Undead Asylum'"<<endl<<"'Empty space'"<<endl<<"You found a Bonfire!"
<<endl<<endl<<"Select where to go:"<<endl<<
"(A) Down the stairs   (B) Rest at the Bonfire    (C) Over the great door"<<endl<<
"(D) Check right wall  (E) Check left wall"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=2;
     break;
     case 'b':
     case 'B':
     hp=1000;
     cout<<"Health restored."<<endl<<endl;
     break;
     case 'C':
     case 'c':
      if (asyldemdoor==0){
      cout<<"The door is closed by some contraption."<<endl<<endl;
      }
      else {cout<<"You opened the door."<<endl<<endl; undasyl=4;}
     break;
     case 'd':
     case 'D':
     cout<<"Just a side of pillars."<<endl<<endl;
     break;
     case 'e':
     case 'E':
     cout<<"The door is closed from the other side."<<endl<<endl;
     break;
     }  //switch(chose)
    }   //if (undasyl==3)
  }     //if (world=0)
 }      //while(x=9)
  return 0;
}    //int main()
