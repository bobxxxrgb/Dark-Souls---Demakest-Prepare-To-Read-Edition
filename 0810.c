#include <iostream>   //first save implementation
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
using namespace std;

  int x;       int newgame; int world; int undasyl;  int bow;  int item1;int door1;int soul1;int humanity;
  int asyldemdoor; int asyldemfight;   int firelink;           int item2;int door2;int soul2;int regen;
  int undburg; int catacombs;int petitelondo;    int maxstm;   int item3;int door3;int soul3;
  int lastbonf;int hostile; char oppatt;int fight;int maxestus;int item4;int door4;int soul4;
  int run;     int estus;   int hp;    int maxhp;int stm;      int item5;int door5;int bomb;
  int opphp;   int maxopphp;int oppstm;int maxoppstm;          int item6;int door6;int darkbomb;
  int atk;     int def;     int frdef; int oppatk;int oppdef;  int item7;int door7;int herb;
  int froppdef;int parry;   char parry2;int souls; int oscar;  int item8;int door8;int bless;
  int oppsouls;char chose;  char input; int level; int nextlevel; int gotolord;
  string savex;string opponent;string weapon;
  
  void lvl(){
  souls=souls-nextlevel;
  level=level+1;
  hp=hp+hp/10;
  maxhp=maxhp+maxhp/10;
  stm=stm+stm/10;
  maxstm=maxstm+maxstm/10;
  nextlevel=nextlevel+nextlevel/10;
  }                                                                               //void level()
    
  void save(){
    ofstream savehp ("savehp");
    if(savehp.is_open())
    {savehp<<to_string(hp*95610);}savehp.close();
    
    ofstream savemxhp ("savemxhp");
    if(savemxhp.is_open())
    {savemxhp<<to_string(maxhp*95610);}savemxhp.close();
    
    ofstream savemaxstm ("savemaxstm");
    if(savemaxstm.is_open())
    {savemaxstm<<to_string(maxstm*95610);}savemaxstm.close();
    
    ofstream savelvl ("savelvl");
    if(savelvl.is_open())
    {savelvl<<to_string(level*95610);}savelvl.close();
    
    ofstream savenxtlvl ("savenxtlvl");
    if(savenxtlvl.is_open())
    {savenxtlvl<<to_string(nextlevel*95610);}savenxtlvl.close();
    
    ofstream savesouls ("savesouls");
    if(savesouls.is_open())
    {savesouls<<to_string(souls*95610);}savesouls.close();
    
    ofstream savemacro("savemacro");
    if(savemacro.is_open())
    {savemacro<<to_string(world*95610);}savemacro.close();
    
    ofstream savemicro("savemicro");
    if(savemicro.is_open())
    {{if(world==0)savemicro<<to_string(undasyl*95610);}savemicro.close();}
    
    ofstream savesoul1("savesoul1");
    if(savesoul1.is_open())
    {savesoul1<<to_string(soul1*95610);}savesoul1.close();
    
    ofstream savesoul2("savesoul2");
    if(savesoul2.is_open())
    {savesoul2<<to_string(soul2*95610);}savesoul2.close();
    
    ofstream savesoul3("savesoul3");
    if(savesoul3.is_open())
    {savesoul3<<to_string(soul3*95610);}savesoul3.close();
    
    ofstream savesoul4("savesoul4");
    if(savesoul4.is_open())
    {savesoul4<<to_string(soul4*95610);}savesoul4.close();
    
    ofstream savebomb("savebomb");
    if(savebomb.is_open())
    {savebomb<<to_string(bomb*95610);}savebomb.close();
    
    ofstream savedbomb("savedbomb");
    if(savedbomb.is_open())
    {savedbomb<<to_string(darkbomb*95610);}savedbomb.close();
    
    ofstream saveherb("saveherb");
    if(saveherb.is_open())
    {saveherb<<to_string(herb*95610);}saveherb.close();
    
    ofstream savebless("savebless");
    if(savebless.is_open())
    {savebless<<to_string(bless*95610);}savebless.close();
    
    ofstream savehum("savehum");
    if(savehum.is_open())
    {savehum<<to_string(humanity*95610);}savehum.close();
    }                                                                           //void save() 
  
  void menu(){                                                                  //void menu()
        cout<<endl<<endl<<"Your level: "<<level<<" | Required souls: "<<nextlevel;        
        cout<<endl<<endl<<"Your Items:    (number to select, 'Q' to drop, 'E' to use)"<<endl<<endl<<
     "(X) Exit"<<endl<<   
     "(1) Soul of a Lost Undead ("<<soul1<<")"<<endl<<
     "(2) Soul of a Proud Knight ("<<soul2<<")"<<endl<<
     "(3) Soul of a Hero ("<<soul3<<")"<<endl<<
     "(4) Soul of a Great Hero ("<<soul4<<")"<<endl<<
     "(5) Firebomb ("<<bomb<<")"<<endl<<
     "(6) Black Firebomb ("<<darkbomb<<")"<<endl<<
     "(7) Green Blossom ("<<herb<<")"<<endl<<
     "(8) Divine Blessing ("<<bless<<")"<<endl<<
     "(9) Humanity ("<<humanity<<")"<<endl<<endl<<"Input: ";
     cin >> chose;
     switch(chose){
     case 'x':
     case 'X':
     break;
     case '1':
      if(soul1>0){cout<<endl<<endl<<"What will you do with 'Soul of a Lost Undead'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Soul of a Lost Undead'."<<endl<<endl;
         soul1=soul1-1;
         break;
         case 'e':
         case 'E':
         cout<<endl<<endl<<"You used a 'Soul of a Lost Undead'."<<endl<<endl;
         souls=souls+200;
         soul1=soul1-1;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Soul of a Lost Undead'."<<endl<<endl;}
       break;
     case '2':
          if(soul2>0){cout<<endl<<endl<<"What will you do with 'Soul of a Proud Knight'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Soul of a Proud Knight'."<<endl<<endl;
         soul2=soul2-1;
         break;
         case 'e':
         case 'E':
         cout<<endl<<endl<<"You used a 'Soul of a Proud Knight'."<<endl<<endl;
         souls=souls+2000;
         soul2=soul2-1;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Soul of a Proud Knight'."<<endl<<endl;}
     break;
     case '3':
           if(soul3>0){cout<<endl<<endl<<"What will you do with 'Soul of a Hero'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Soul of a Hero'."<<endl<<endl;
         soul3=soul3-1;
         break;
         case 'e':
         case 'E':
         cout<<endl<<endl<<"You used a 'Soul of a Hero'."<<endl<<endl;
         souls=souls+10000;
         soul3=soul3-1;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Soul of a Hero'."<<endl<<endl;}
     break;
     case '4':
           if(soul4>0){cout<<endl<<endl<<"What will you do with 'Soul of a Great Hero'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Soul of a Great Hero'."<<endl<<endl;
         soul4=soul4-1;
         break;
         case 'e':
         case 'E':
         cout<<endl<<endl<<"You used a 'Soul of a Great Hero'."<<endl<<endl;
         souls=souls+20000;
         soul4=soul4-1;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Soul of a Great Hero'."<<endl<<endl;}
     break;
     case '5':
           if(bomb>0){cout<<endl<<endl<<"What will you do with 'Firebomb'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Firebomb'."<<endl<<endl;
         bomb=bomb-1;
         break;
         case 'e':
         case 'E':
           if(fight==1){
           cout<<endl<<endl<<"(You)You threw a 'Firebomb' at "<<opponent<<endl;
           bomb=bomb-1;
           opphp=opphp-120;}
           else{cout<<endl<<endl<<"You threw the 'Firebomb at a wall'."<<endl<<endl;
           bomb=bomb-1;}
           break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Firebomb'."<<endl<<endl;}
     break;
     case '6':
           if(darkbomb>0){cout<<endl<<endl<<"What will you do with 'Black Firebomb'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Black Firebomb'."<<endl<<endl;
         darkbomb=darkbomb-1;
         break;
         case 'e':
         case 'E':
         if(fight==1){
           cout<<endl<<endl<<"(You)You threw a 'Black Firebomb' at "<<opponent<<endl;
           darkbomb=darkbomb-1;
           opphp=opphp-240;}
           else{cout<<endl<<endl<<"You threw the 'Black Firebomb at a wall."<<endl<<endl;
           darkbomb=darkbomb-1;}
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Black Firebomb'."<<endl<<endl;}
     break;
     case '7':
           if(herb>0){cout<<endl<<endl<<"What will you do with 'Green Blossom'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Green Blossom'."<<endl<<endl;
         herb=herb-1;
         break;
         case 'e':
         case 'E':
           if(fight==1){
            if(regen==0){
         cout<<endl<<endl<<"You used a 'Green Blossom'."<<endl<<"You gained stamina regen"<<endl<<
         " that'll last for this fight"<<endl;
         regen=1;
         herb=herb-1;}
         else{cout<<endl<<endl<<"You gained stamina regen already."<<endl;}
         }
         else{if(regen==0){
         cout<<endl<<endl<<"You gained stamina regen"<<endl<<
         " that'll help you through your next fight."<<endl<<endl;
         regen=1;herb=herb-1;}
         else{cout<<endl<<endl<<"You gained stamina regen already."<<endl<<endl;}
         }
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Green Blossom'."<<endl<<endl;}
     break;
     case '8':
          if(bless>0){cout<<endl<<endl<<"What will you do with 'Divine Blessing'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Divine Blessing'."<<endl<<endl;
         bless=bless-1;
         break;
         case 'e':
         case 'E':
         cout<<endl<<endl<<"You used a 'Divine Blessing'."<<endl<<endl;
         bless=bless-1;
         hp=maxhp;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Divine Blessing'."<<endl<<endl;}
     break;
     case '9':
           if(humanity>0){cout<<endl<<endl<<"What will you do with 'Humanity'?"<<endl<<"Input: ";
        cin >> chose;
        switch (chose){
         case 'q':
         case 'Q':
         cout<<endl<<endl<<"You tossed a 'Humanity'."<<endl<<endl;
         humanity=humanity-1;
         break;
         case 'e':
         case 'E':
         if(maxestus<20){
         cout<<endl<<endl<<"          You used a 'Humanity'."<<endl<<
         "The Flames rises up when you step towards a Bonfire, now."<<endl
         <<"Now Bonfires will share more of their Flames with you."<<endl<<endl;
         maxestus=20;
         humanity=humanity-1;}
         else{cout<<endl<<endl<<"You're already under the effects of 'Humanity'."<<endl<<endl;}
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Humanity'."<<endl<<endl;}
       break;
}}

void battle() {                                     //void battle()
for (fight=1;fight==1;x==9) {  
 if (opphp<=0){cout<<endl<<endl<<"You won! You obtained "<<oppsouls<<" Souls from your enemy!"<<endl<<endl; souls=souls+oppsouls; fight=0; stm=maxstm;
   if(opponent=="Asylum Demon"){asyldemfight=0;}}
 else{
  def=frdef;
  oppdef=froppdef;
  if(fight==1){
  if (hp>0){
   if (stm<0) {stm=0;}
     if (hostile >= 3) {
     oppatt = 0 + rand() % 4; }
     else (oppatt = 0);
       if (oppatt==3){if(oppstm>=5){oppdef=oppdef+60;}}
        if(oscar==0){
  cout << "{Your opponent is: " << opponent<<"}" << endl <<"["<< opponent <<" has "<< opphp << "HP, " << oppstm << "STM]" << endl << "[You: " << hp << "HP, "<< stm << "STM]" << endl;
  cout << "[Chose your move wisely:]" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "(E) shield  (F) parry" << endl << "(G) Estus("<<estus<<")"<<endl<<"(H) Inventory"<< endl << "input:";}
        else{
  cout << "{Your opponent is: " << opponent<<"}" << endl <<"["<< opponent <<" has "<< opphp << "HP, " << oppstm << "STM]" << endl << "[You: " << hp << "HP, "<< stm << "STM]" << endl;
  cout << "[Chose your move wisely:]" << endl << "(A) swing   (B) heavy" << endl << "(C) kick    (D) run" << endl << "(E) shield  (F) parry"<<endl<<"(G) Inventory"<< endl <<"input:";}
 
 cin >> input;
 switch(input){
case 'A':                                                                                 //swing
case 'a':
if (stm-10>=0) {
  cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a sword swing!"<<endl;
  opphp = opphp-atk*50/oppdef;
  if(regen==0){stm=stm-10;}else{stm=stm-5;}
  }  //if (stm-10>=0)
  else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'B':                                                                                //heavy
case 'b':
  if (stm-17>=0) {  
  cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a heavy sword swing!"<<endl;
  opphp = opphp-atk*70/oppdef;
  if(regen==0){stm=stm-17;}else{stm=stm-8;} }      //if (stm-17>=0)
  else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
  break;
case 'C':                                                                               //kick
case 'c':
  cout<<endl<<endl<<"(You)You kicked "<<opponent<<"!"<<endl;
  opphp = opphp-1;
    if(regen==0){
    if (stm<maxstm-10){
    stm = stm+10;}
    else (stm=maxstm);}
      else{if (stm<maxstm-20){
    stm = stm+20;}else{stm=maxstm;}}
  break;
case 'D':                                                                              //run
case 'd':
  if(regen==1){if(run==1){cout<<endl<<endl<<"(You)You ran past the enemy."<<endl;
  stm=maxstm;
  fight = 0;}else (cout<<endl<<endl<<"(You)A thick fog blocks the exit."<<endl);}
  else{
  if (stm-10>=0) {
   if(run==1){
  cout<<endl<<endl<<"(You)You ran past the enemy."<<endl;
  stm=maxstm;
  fight = 0;
     }
     else (cout<<endl<<endl<<"(You)A thick fog blocks the exit."<<endl);
    }
    else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);
   }
  break;
case 'E':                                                                            //shield
case 'e':
  if(regen==1){cout<<endl<<endl<<"(You)You raised your shield waiting for "<<opponent<<" to attack."<<endl<<
  "(You)your defense rose."<<endl;
  def=def+60;}else{
  if (stm-5>=0) {
  cout<<endl<<endl<<"(You)You raised your shield waiting for "<<opponent<<" to attack."<<endl<<
  "(You)your defense rose."<<endl;
  def=def+60;
    if (stm-5>=0){stm=stm-5;}
    else {stm=0;}}else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);}
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
  case 'G':                                                                              //estus
  case 'g':
   if(oscar==1){menu();}
   else{
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
      else(stm=maxstm);}
  break;
  case 'h':
  case 'H':
  menu();
  break;
}
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
    if(bow==1){
  cout <<"(Enemy)"<<opponent<<" Shoot you an arrow with their "<<endl<<weapon<<endl<<endl;
  hp=hp-oppatk*400/def;}
    else{
     cout <<"(Enemy)"<<opponent<<" Attacked you with a slash of their "<<endl<<weapon<<endl<<endl;
  hp=hp-oppatk*400/def;}
    if(oppstm-5>=0){
  oppstm=oppstm-5;}
  else {oppstm=0;}}
    else {cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
  hostile++;
  oppstm=oppstm+20;}
  break;
case 2:
  if(oppstm>=5){                                                                    //enemy heavy
    if(bow==1){
  cout <<"(Enemy)"<<opponent<<" Shoot an arrow right in your eye!"<<endl<<endl;
  hp=hp-oppatk*600/def;}
    else{
     cout <<"(Enemy)"<<opponent<<" Attacked you with a heavy slash of their "<<endl<<weapon<<endl<<endl;
  hp=hp-oppatk*600/def;}
    if(oppstm-5>=0){
  oppstm=oppstm-5;}
  else {oppstm=0;}}
    else {cout<<"(Enemy)"<<opponent<<" is spacing."<<endl<<endl;
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
  if(lastbonf==0){world=0;undasyl=0;}
  if(lastbonf==1){world=0;undasyl=3;}
  if(lastbonf==2){world=0;undasyl=5;}
       }
      } //if(fight==1)
     } //else
    } //for (fight=1;fight==1;x==9)
  regen=0;
  } //void battle()
void wait(){this_thread::sleep_for(chrono::seconds(0));}                      //void wait()
void wait2(){this_thread::sleep_for(chrono::seconds(5));}                      //void wait2()

void bonfire(){
hp=maxhp;estus=maxestus;
    if(gotolord==0){
      if(oscar==0){
      cout<<endl<<endl<<"Health restored and Estus replenished."<<endl<<endl;}
       else{cout<<endl<<endl<<"Health restored."<<endl<<endl;}
        }
     else{
     cout<<endl<<endl<<"Health restored and Estus replenished."<<endl;;
      if (souls<nextlevel){cout<<"Next level in "<<nextlevel<<" souls."<<endl<<endl;}
      else{cout<<"You can level up. Do you want to?(y/n)"<<endl<<
      "souls required: "<<nextlevel<<endl<<endl<<"input: ";
      cin >> chose;
       switch(chose){
       case'y':
       case'Y':
       lvl();
       cout<<endl<<endl<<"You leveled up!"<<endl<<endl;
       break;
       case'n':
       case'N':
       break;
        }
       }
      }
     }                                                                     //void bonfire()

void Hollow() {
opponent="Hollow";
weapon="Broken Straight Sword";
      run=1;
  if(undasyl<3){hostile=0;}
  else{hostile=3;}
    opphp=69;
 maxopphp=69;
   oppstm=30;
maxoppstm=30;
   oppdef=77;
 froppdef=77;
   oppatk=40;
      bow=0;
    parry=1;
 oppsouls=20;
battle();
}                                                                                //void Hollow()
void Hollowarch() {
opponent="Hollow Archer";
weapon="Short Bow";
      run=1;
  hostile=3;
    opphp=69;
 maxopphp=69;
   oppstm=60;
maxoppstm=60;
   oppdef=70;
 froppdef=70;
   oppatk=31;
      bow=1;
    parry=0;
 oppsouls=20;
battle();
}                                                                                //void Hollowarch()
void Asylum_Demon() {
opponent="Asylum Demon";
weapon="Demon's Great Hammer";
      run=1;
  hostile=3;
    opphp=813;
if(undasyl>8){opphp=112;run=0;}
 maxopphp=813;
   oppstm=200;
maxoppstm=200;
   oppdef=83;
 froppdef=83;
   oppatk=138;
      bow=0;
    parry=0;
 oppsouls=2000;
battle();
}                                                                               //void Asylum_Demon()

int main() {
x=9;
    newgame= 0;  item1=1;door1=0;soul1=0;humanity=0;
    lastbonf=0;  item2=1;door2=0;soul2=0;regen=0;
      world= 0;  item3=1;door3=0;soul3=0;
    undasyl= 0;  item4=1;door4=0;soul4=0;
asyldemdoor= 1;  item5=1;door5=0;bomb=0;
asyldemfight=1;  item6=1;door6=0;darkbomb=0;
       oscar=1;  item7=1;door7=0;herb=0;
   firelink= 0;  item8=1;door8=0;bless=0;
    gotolord=0;
    undburg= 0;
  catacombs= 0;
petitelondo= 0;
     oppatt= 0;
      fight= 0;
      estus= 0;
   maxestus= 5;
      level= 10;
  nextlevel= 829;
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

    string catchsave;
    string catchsave2;
    ifstream savemacro ("savemacro");                     //save macro
    if(savemacro.is_open())
    {
     while (getline(savemacro,catchsave))
     world=stoi(catchsave)/95610;
    {
    savemacro.close();
   }}
    
    ifstream savemicro ("savemicro");                            //save micro
    if(savemicro.is_open())
    {
     while (getline(savemicro,catchsave))
     if(world==0){undasyl=stoi(catchsave)/95610;}
     if(world==1){firelink=stoi(catchsave)/95610;}
    {
    savemicro.close();
   }}
    
    ifstream savehp ("savehp");                            //save hp
    if(savehp.is_open())
    {
     while (getline(savehp,catchsave))
     hp=stoi(catchsave)/95610;
    {
    savehp.close();
   }}
   
   ifstream savemxhp ("savemxhp");                          //save maxhp
   if(savemxhp.is_open())
    {
     while (getline(savemxhp,catchsave))
     maxhp=stoi(catchsave)/95610;
    {
    savemxhp.close();
   }}
   
   ifstream savemaxstm ("savemaxstm");                       //save maxstm
   if(savemaxstm.is_open())
    {
     while (getline(savemaxstm,catchsave))
     maxstm=stoi(catchsave)/95610;
    {
    savemaxstm.close();
   }}
   
   ifstream savesouls ("savesouls");                        //save souls
   if(savesouls.is_open())
    {
     while (getline(savesouls,catchsave))
     souls=stoi(catchsave)/95610;
    {
    savesouls.close();
   }}
   
    ifstream savelvl ("savelvl");                          //save level
   if(savelvl.is_open())
    {
     while (getline(savelvl,catchsave))
     level=stoi(catchsave)/95610;
    {
    savelvl.close();
   }}
   
   ifstream savenxtlvl ("savenxtlvl");                        //save nextlevel
   if(savenxtlvl.is_open())
    {
     while (getline(savenxtlvl,catchsave))
     nextlevel=stoi(catchsave)/95610;
    {
    savenxtlvl.close();
   }}
   
   ifstream savebomb ("savebomb");                        //save firebomb
   if(savebomb.is_open())
    {
     while (getline(savebomb,catchsave))
     bomb=stoi(catchsave)/95610;
    {
    savebomb.close();
   }}
   
   ifstream savedbomb ("savedbomb");                        //save black firebomb
   if(savedbomb.is_open())
    {
     while (getline(savedbomb,catchsave))
     darkbomb=stoi(catchsave)/95610;
    {
    savedbomb.close();
   }}
   
   ifstream savebless ("savebless");                        //save black divine blessing
   if(savebless.is_open())
    {
     while (getline(savebless,catchsave))
     bless=stoi(catchsave)/95610;
    {
    savebless.close();
   }}
   
   ifstream saveherb ("saveherb");                        //save black green blossom
   if(saveherb.is_open())
    {
     while (getline(saveherb,catchsave))
     herb=stoi(catchsave)/95610;
    {
    saveherb.close();
   }}

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
cout<<endl<<endl;
wait();
system("clear");
newgame=1;

};                                         //if (newgame==0)
while (x=9) {
 if (world==0) {                           //undead asylum
   if (undasyl==0) {                       //cell

save();
  cout << "'Undead Asylum'  'Cell'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(W) Out of the cage"<<endl<<"(A) "<<endl<<"(S) "<<endl<<"(D) "<<endl<<"(Q) "<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'w':
     case 'W':
     undasyl=1;
     break;
     case 'e':
     case 'E':
     menu();
     break;
   } //switch(chose)
  }  //if (undasyl=0)
  if (undasyl==1) {                         //corridor
save();  
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
save();    
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
    save();
  cout << "'Undead Asylum'  'Empty space'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Down the stairs"<<endl<<"(B) Rest at the Bonfire"<<endl<<"(C) At the huge door"
  <<endl<<"(D) Check left side"<<endl<<"(E) Check right side"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=2;
     break;
     case 'b':
     case 'B':
     bonfire();
     lastbonf=1;
     break;
     case 'C':
     case 'c':
      if (asyldemdoor==0){
      cout<<endl<<"The door is closed by some contraption."<<endl<<endl;
      }
      else {cout<<endl<<"You opened the door."<<endl<<endl; undasyl=4;}
     break;
     case 'd':
     case 'D':
     cout<<"Just a side of pillars."<<endl<<endl;
     break;
     case 'e':
     case 'E':
     if(door1==0){
     cout<<"The door is closed from the other side."<<endl<<endl;}
     else{undasyl=8;}
     break;
     }  //switch(chose)
    }   //if (undasyl==3)
    if (undasyl==4) {                       //boss room
    save();
  cout << "'Undead Asylum'  'Room with pots'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back to the bonfire"<<endl<<"(B) Towards the celled entrance"<<endl<<"(C) To the exit door"
  <<endl<<"(D) Tackle the pots"<<endl<<"(E) Takcle the other pots"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=3;
     break;
     case 'b':
     case 'B':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==4){undasyl=5;asyldemdoor=0;lastbonf=2;}}
     if(asyldemfight==0){undasyl=5;}
     break;
     case 'C':
     case 'c':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==4){undasyl=5;asyldemdoor=0;lastbonf=2;}}
     if(asyldemfight==0){undasyl=69;}
     break;
     case 'd':
     case 'D':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==4){undasyl=5;;asyldemdoor=0;lastbonf=2;}};
      if(asyldemfight==0){
       if(item1==1){cout<<endl<<endl<<"You found a Soul of a Lost Undead in one of them!"<<endl<<endl;
        soul1=soul1+1;item1=0;save();}
         else{cout<<endl<<endl<<"All the pots broke."<<endl<<endl;}}     
     break;
     case 'e':
     case 'E':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==4){undasyl=5;asyldemdoor=0;lastbonf=2;}}
      if(asyldemfight==0){
       if(item1==1){
       cout<<endl<<endl<<"You found a Soul of a Lost Undead in one of them!"<<endl<<endl;
       soul1=soul1+1;item1=0;save();}
        else{cout<<endl<<endl<<"All the pots broke."<<endl<<endl;}}   
     break;
     }  //switch(chose)
    }   //if (undasyl==4)
    if (undasyl==5) {                    //Celled flooded room
    save();
  cout << "'Undead Asylum'  'Celled flooded room'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back to pots room"<<endl<<"(B) Rest at the Bonfire"<<endl<<"(C) To upwards corridor"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     if(asyldemdoor==1){undasyl=4;}
     if(asyldemdoor==0){cout<<endl<<endl<<
      "Cell closed behind you."<<endl<<"You can still see the Asylum Demon wandering about in the pots room."<<endl<<endl;}
     break;
     case 'b':
     case 'B':
     bonfire();
     lastbonf=2;
     break;
     case 'c':
     case 'C':
     undasyl=6;
     break;
    }   //switch(chose)
   }    //if (undasyl==5)
   if (undasyl==6) {                       //upwards corridor
   save();
  cout << "'Undead Asylum'  'Upwards Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"An Hollow is aiming at you with their bow!"<<endl<<"The fight is about to start!"
  <<endl<<endl; wait2(); Hollowarch();if(undasyl=6){undasyl=7;}
   }
   if (undasyl==7) {
   save();
  cout << "'Undead Asylum'  'Upwards Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<"(A) Back to Bonfire"<<endl<<
  "(B) Check cell on the left"<<endl<<"(C) Check corpse in the middle of the stairs"<<endl<<"(D) Into Balcony"<<endl<<"(E) Inventory"<<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=5;
     break;
     case 'b':
     case 'B':
      if(item2==1){
      cout<<endl<<endl<<"You found a Green Blossom on a corpse in the cell."<<endl<<endl;herb=herb+1;item2=0;save();}
       else{cout<<endl<<endl<<"there's just a lonely corpse inside."<<endl<<endl;}
     break;
     case 'c':
     case 'C':
     if(item4==1){
     cout<<endl<<endl<<"There's a Firebomb on the corpse."<<endl<<endl;
     bomb=bomb+1;item4=0;save();}
     else{cout<<endl<<endl<<"You already robbed this corpse."<<endl<<endl;}
     break;
     case 'd':
     case 'D':
     undasyl=8;
     break;
     case'e':
     case'E':
     menu();
     break;
    }   //switch(chose)
   }    //if(undasyl==7)
   if (undasyl==8) {                     //balcony
   save();
  cout << "'Undead Asylum'  'Balcony'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(A) Back to corridor"<<endl<<"(B) Check broken stairs"<<endl<<"(C) Check hole in the wall"<<endl<<"(D) Up left stairs"<<endl<<"(E) Down right stairs"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'a':
     case 'A':
     undasyl=6;
     break;
     case 'b':
     case 'B':
     if(item3==1){
     cout<<endl<<endl<<"There's a loot higher in the stairs"<<endl<<"But the lower part is uncrossable."<<endl<<endl;}
     else{cout<<endl<<endl<<"The view leaves quite much to be desired."<<endl<<endl;}
     break;
     case 'c':
     case 'C':
     if(oscar==1){
     cout<<endl<<endl<<"You found the knight that dropped you the cell to your key!"<<endl<<endl<<
     "(?)...Oh, you... You're no Hollow, eh? Thank goodness..."<<endl<<
     "I'm done for, I'm afraid... I'll die soon, then lose my sanity..."<<endl<<
     "I wish to ask something of you... You and I, we're both Undead... Hear me out, will you?"<<endl<<
     "...Regrettably, I have failed in my mission... But perhaps you can keep the torch lit... "<<endl<<
     "There is an old saying in my family... Thou who art Undead, art chosen..."<<endl<<
     "In thine exodus from the Undead Asylum, maketh pilgrimage to the land of Ancient Lords..."<<endl<<
     "When thou ringeth the Bell of Awakening, the fate of the Undead thou shalt know..."<<endl<<
     "Well, now you know... And I can die with hope in my heart..."<<endl<<
     "Oh, one more thing... Here, take this... An Estus Flask, an Undead favourite..."<<endl<<
     "Oh, and this... 'The knight gave you another key'"<<endl<<endl<<
     "...Now I must bid farewell... I would hate to harm you after death... So, go now... And thank you..."<<endl<<endl<<endl;
     oscar=0;
     estus=maxestus;
     souls=souls+150;save();}
      else{cout<<endl<<endl<<"There's a corpse..."<<endl<<endl;}
     break;
     case 'd':
     case 'D':
     cout<<endl<<endl<<"You've been spotted by an hostile Hollow!"<<endl<<"The fight is about to begin."<<endl<<endl; wait2();
     Hollow();if(undasyl==8){undasyl=9;};
     break;
     case 'e':
     case 'E':
     undasyl=3;door1=1;
     break;
   }    //switch(chose)
  }     //if (undasyl==8)
  }     //if (world=0)
 }      //while(x=9)
  return 0;
}       //int main()
