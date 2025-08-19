#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;

  int x;
  int newgame;      //fake bool
  int world;
  int undasyl;
  int asyldemdoor;  //fake bool
  int asyldemfight; //fake bool
  int firelink;
  int undburg;
  int catacombs;
  int petitelondo;
  int lastbonf;
  int hostile;      //fake bool
  char oppatt;
  int fight;        //fake bool
  int run;          //fake bool
  int estus;
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
  int frdef;
  int oppatk;
  int oppdef;
  int froppdef;
  int parry;        //fake bool
  char parry2;
  int souls;
  int oppsouls;
  char chose;
  char input;
  string savex;
  string opponent;
  string weapon;
  


void battle() {
for (fight=1;fight==1;x==9) {  
 if (opphp<=0){cout<<endl<<endl<<"You won! You obtained "<<oppsouls<<" Souls from your enemy!"<<endl<<endl; souls=souls+oppsouls; fight=0; stm=maxstm;}
 else{
  def=frdef;
  oppdef=froppdef;
  if(fight==1){
  if (hp>0){
   if (stm<0) {stm=0;}
     if (hostile >= 3) {
     oppatt = 0 + rand() % 4; }
     else (oppatt = 0);
       if (oppatt==3){oppdef=oppdef+60;}

  cout << "{Your opponent is: " << opponent<<"}" << endl <<"["<< opponent <<" has "<< opphp << "HP, " << oppstm << "STM]" << endl << "[You: " << hp << "HP, "<< stm << "STM]" << endl;
  cout << "[Chose your move wisely:]" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "(E) shield  (F) parry" << endl << "(G) Estus("<<estus<<")"<< endl << "input:";
 
 cin >> input;
 switch(input){
case 'A':                                                                                 //swing
case 'a':
if (stm-10>=0) {
  cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a sword swing!"<<endl;
  opphp = opphp-atk*50/oppdef;
  stm=stm-10;
  }  //if (stm-10>=0)
  else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'B':                                                                                //heavy
case 'b':
  if (stm-17>=0) {  
  cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a heavy sword swing!"<<endl;
  opphp = opphp-atk*70/oppdef;
  stm=stm-17; }      //if (stm-17>=0)
  else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'C':                                                                               //kick
case 'c':
  cout<<endl<<endl<<"(You)You kicked "<<opponent<<"!"<<endl;
  opphp = opphp-1;
    if (stm<maxstm-10){
    stm = stm+10;}
    else (stm=maxstm);
  break;
case 'D':                                                                              //run
case 'd':
  if (stm-10>=0) {
   if(run==1){
  cout<<endl<<endl<<"(You)You ran past the enemy."<<endl;
  stm=maxstm;
  fight = 0;
   } //if(run==1)
else (cout<<endl<<endl<<"(You)A thick fog blocks the exit."<<endl);   
  }  //if (stm-10>=0)
else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'E':                                                                            //shield
case 'e':
  if (stm-5>=0) {
  cout<<endl<<endl<<"(You)You raised your shield waiting for "<<opponent<<" to attack."<<endl<<
  "(You)your defense rose."<<endl;
  def=def+60;
    if (stm-5>=0){stm=stm-5;}
    else {stm=0;}
  break;
  }  //if (stm-5>=0)
else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'F':                                                                                //parry
case 'f':
  if (stm-5>=0) {
  cout<<endl<<endl<<"(You)You tried to parry "<<opponent<<"'s attack."<<endl;
    if (hostile >= 3) {
      if (parry == 1) {
  parry2=0+rand() % 10;
  if (parry2 == 0)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 1)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 2)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 3)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 4)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 5)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 6)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 7)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 8)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 10)
  {cout << "(You)You missed." << endl; }
  if (parry2 == 9)
  {cout << "(You)You made the enemy's weapon fly across the room!"<<endl<<
  "(You)You collect the opportunity to attack the enemy exposed!"<<endl<<
  "(You)it's a critical hit!"<<endl;
  opphp=opphp-500;
      }  //if (parry2 == 9)
     }  //if (parry == 1)
  else (cout<<"(You)"<<opponent<<" can't be parried."<<endl);
    }  //if (hostile >= 3)
  else (cout<<"(You)"<<opponent<<" isn't attacking."<<endl);
   }  //if (stm-5>=0)
  else (cout<<"(You)You don't have enaugh stamina."<<endl);
   break;
  case 'G':                                                                                    //estus
  case 'g':
   if(estus>0){
   estus=estus-1;
   cout<<endl<<endl<<"(You)You made spacing to get the right opportunity"<<endl<<"to drink from your Estus flask."
   <<endl<<"You recover HP and stamina."<<endl;
   if(hp<=maxhp-500){
   hp=hp+500;}
   else(hp=maxhp);
   }
    else{cout<<endl<<endl<<"(You)Your Estus is empty..."<<endl;}
      if(stm<=maxstm-15){
      stm=stm+15;}
      else(stm=maxstm);
  break;
  }    //switch(input)
switch(oppatt) {
case 0:                                                                             //enemy spacing
  cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
  hostile++;
   if(oppstm+20<=maxoppstm){
   oppstm=oppstm+20;}
   else{oppstm=maxoppstm;}
  break;
case 1:  
  if(oppstm>=5){                                                                    //enemy slash
  cout <<"(Enemy)"<<opponent<<" Attacked you with a slash of their "<<endl<<weapon<<endl<<endl;
  hp=hp-oppatk*400/230;
    if(oppstm-5>=0){
  oppstm=oppstm-5;}
  else {oppstm=0;}
  }
  else {cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
  hostile++;
  oppstm=oppstm+20;}
  break;
case 2:
  if(oppstm>=5){                                                                    //enemy heavy
  cout <<"(Enemy)"<<opponent<<" Attacked you with a heavy slash of their "<<endl<<weapon<<endl<<endl;
  hp=hp-oppatk*500/230;
    if(oppstm-5>=0){
    if(oppstm-5>=0){
  oppstm=oppstm-5;}
  else {oppstm=0;}
  }
  else {oppstm=0;}
  }
  else{cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
  hostile++;
  oppstm=oppstm+20;}
  break;
case 3:
  if(oppstm>=5){                                                                    //enemy shield
  cout <<"(Enemy)"<<opponent<<" used their "<<weapon<<endl<<" to defend theirself"<<endl<<endl;
  if(oppstm-5>=0){
  oppstm=oppstm-5;}
  else {oppstm=0;}
  }
  else{cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
  hostile++;
  oppstm=oppstm+20;}  
  break;
   }   //switch(oppatt)
  }    //if(hp>0)
  else 
  {
  fight=0;
  souls=0;
  cout<<"         You Died"<<endl<<endl;
  hp=maxhp; stm=maxstm;
  if(lastbonf==0){world=0; undasyl=0;}
  if(lastbonf==1){world=0; undasyl=3;}
   }   //else
  }    //if(fight==1)
  }    //else
 }     //for (x=9;fight==1;x==9)
}      //void battle()
void wait(){this_thread::sleep_for(chrono::seconds(0));}

void Hollow() {
opponent="Hollow";
weapon="Broken Straight Sword";
      run=1;
  hostile=0;
    opphp=69;
 maxopphp=69;
   oppstm=30;
maxoppstm=30;
   oppdef=77;
 froppdef=77;
   oppatk=40;
    parry=1;
 oppsouls=20;
battle();
}                                //void Hollow()

void Asylum_Demon() {
opponent="Asylum Demon";
weapon="Demon's Great Hammer";
      run=0;
  hostile=3;
    opphp=813;
 maxopphp=813;
   oppstm=200;
maxoppstm=200;
   oppdef=83;
 froppdef=83;
   oppatk=138;
    parry=0;
 oppsouls=2000;
battle();
}                                //void Asylum_Demon()


int main() {
x=9;
    newgame= 0;
    lastbonf=0;
      world= 0;
    undasyl= 0;
asyldemdoor= 1;
asyldemfight=1;
   firelink= 0;
    undburg= 0;
  catacombs= 0;
petitelondo= 0;
     oppatt= 0;
      fight= 0;
      estus= 0;
         hp= 658;
      maxhp= 658;
        atk= 80;
        def= 230;
      frdef= 230;
        stm= 91;
     maxstm= 91;
      parry= 0;
     parry2= 0;
      souls= 0;
   oppsouls= 0;

if (newgame == 0) {
system("clear");
wait();
cout<<endl;
cout<<endl;
cout<<"In the Age of Ancients,"
<<endl<<"the world was unformed,";
wait();
system("clear");
cout<<endl;
cout<<endl;
wait();
cout<<"shrouded by fog.";
system("clear");
cout<<endl;
cout<<endl;
wait();
cout<<"A land of gray crags,"
<<endl<<"Archtrees and Everlasting";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Dragons.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"But then there was fire,"
<<endl<<"and with fire came disparity.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Heat and cold, life and death,"
<<endl<<"and of course, light";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and dark.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Then from the Dark, they came,"
<<endl<<"and found the Souls of";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Lords within the flame.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Nito, the first of the dead,"
<<endl<<"the Witch of Izalith, and";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"her Daughters of Chaos,";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Gwyn, the Lord of Sunlight,"
<<endl<<"and his faithful knights,";
wait();
system("clear");

cout<<"and the furtive pygmy,"
<<endl<<"so easily forgotten.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"With the Strength of Lords,"
<<endl<<"they challenged the";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Dragons. Gwyn's mighty"
<<endl<<"bolts peeled apart";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"their stone scales."
<<endl<<"The Witches weaved great";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"firestorms."
<<endl<<"Nito unleashed a miasma of death";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and disease."
<<endl<<"And Seath the Scaleless betrayed his own";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and the Dragons were no more.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Thus began the Age of Fire.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"But soon, the flames will fade.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and only Dark will remain.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Even now, there are only embers,";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and man sees not light,"
<<endl<<"but only endless nights.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"And amongst the living are seen,"
<<endl<<"carriers of the accursed Darksign.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout <<"'Undead Asylum'";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Yes, indeed."
<<endl<<"The Darksign brands the Undead.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"And in this land,"
<<endl<<"the Undead are corralled";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"and led to the north,"
<<endl<<"where they are locked away,";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"to await the end of the world.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"... This is your fate.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"You're undead, locked in a cage,";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"no much of your wits about anymore,";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"you see a Knight from"
<<endl<<"an opening in the cieling";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"up above."
<<endl<<"He drops a corpse down in your cage.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"It contains the key to unlock it and escape!";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"The Knight gives you a"
<<endl<<"firendly wave and leaves.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"You hear a huge crash from"
<<endl<<"up above not much later.";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Has something happened?";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"Who was this Knight?"
<<endl<<"And what was his purpose?";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"There may be no answers,"
<<endl<<"but one must still forge";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"ahead. You open the cell"
<<endl<<"with the key fallen like";
wait();
system("clear");
cout<<endl;
cout<<endl;

cout<<"grace from above."
<<endl<<"You are now free to wander about and";
wait();
system("clear");
cout<<endl;
cout<<endl;
cout<<"find out what fate lies for you ahead.";
wait();
system("clear");
newgame=1;

};                                         //if (newgame==0)
while (x=9) {
 if (world==0) {                           //undead asylum
  if (undasyl==0) {                        //cell
  cout<<endl<<endl;
  cout << "'Undead Asylum'  'Cage'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Out the cage"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=1;
     break;
   } //switch(chose)
  }  //if (undasyl=0)
  if (undasyl==1) {                         //corridor
  cout << "'Undead Asylum'  'Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back into the cage"<<endl<<"(B) Into flooded room"<<endl<<"(R) Attack crying Hollow"
  <<endl<<endl<<"input: ";
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
     Hollow();
     break;
    } //switch(chose)
   }  //if (undasyl=1)
    if (undasyl==2) {                          //flooded room
  cout << "'Undead Asylum'  'Flooded room'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back into corridor"<<endl<<"(B) Up the stairs"<<endl<<"(R) Attack laid out Hollow"
  <<endl<<endl<<"input: ";
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
     break;
     }  //switch(chose)
    }   //if (undasyl==2)
    if (undasyl==3) {                        //empty space
  cout << "'Undead Asylum'  'Empty space'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Down the stairs"<<endl<<"(B) Rest at the bonfire"<<endl<<"(C) At the huge door"
  <<endl<<"(D) Check left side"<<endl<<"(E) Check right side"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=2;
     break;
     case 'b':
     case 'B':
     hp=maxhp;
     cout<<"Health restored and Estus replenished."<<endl<<endl;
     lastbonf=1;
     estus=5;
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
    if (undasyl==4) {                       //boss room
  cout << "'Undead Asylum'  'Room with pots'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back to the bonfire"<<endl<<"(B) Towards the celled entrance"<<endl<<"(C) To the huge door"
  <<endl<<"(D) Tackle the pots"<<endl<<"(E) Takcle the other pots"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=3;
     break;
     case 'b':
     case 'B':
     if(asyldemfight=0){undasyl=5;}
     else{Asylum_Demon();}
     break;
     case 'C':
     case 'c':
     if(asyldemfight=0){undasyl=69;}
     else{Asylum_Demon();}
     break;
     case 'd':
     case 'D':
     if(asyldemfight=0)
     {cout<<endl<<"The pots broke and all you see are shards."<<endl;}
     else{cout<<endl<<"You found a Soul of a Lost Undead in one of them!"<<endl<<endl;souls=souls+200;Asylum_Demon();}
     break;
     case 'e':
     case 'E':
     if(asyldemfight=0)
     {cout<<endl<<"The pots broke and all you see are shards."<<endl;}
     else{cout<<endl<<"You found a Soul of a Lost Undead in one of them!"<<endl<<endl;souls=souls+200;Asylum_Demon();}
     break;
     }  //switch(chose)
    }   //if (undasyl==4) 
  }     //if (world=0)
 }      //while(x=9)
  return 0;
}       //int main()
