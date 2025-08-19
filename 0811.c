#include <iostream>
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
  int oppsouls;char chose;  char input; int level; int nextlevel; int gotolord; int secrite;
  string savex;string opponent;string weapon;string name;
  
  void youdied(){
  
  souls=0;
  cout<<"         You Died"<<endl<<endl;
  hp=maxhp; stm=maxstm;
  if(lastbonf==0){world=0;undasyl=1;}
  if(lastbonf==1){world=0;undasyl=4;}
  if(lastbonf==2){world=0;undasyl=6;}
  }
    
  void lvl(){
  souls=souls-nextlevel;
  level=level+1;
  hp=hp+hp/10;
  maxhp=maxhp+maxhp/10;
  stm=stm+2;
  maxstm=maxstm+2;
  nextlevel=nextlevel+nextlevel/10;
  }                                                                               //void lvl()
    
  void save(){
    ofstream sv_1 ("sv_1");
    if(sv_1.is_open())
    {sv_1<<to_string(hp*95610);}sv_1.close();
    
    ofstream sv_2 ("sv_2");
    if(sv_2.is_open())
    {sv_2<<to_string(maxhp*95610);}sv_2.close();
    
    ofstream sv_3 ("sv_3");
    if(sv_3.is_open())
    {sv_3<<to_string(maxstm*95610);}sv_3.close();
    
    ofstream sv_4 ("sv_4");
    if(sv_4.is_open())
    {sv_4<<to_string(level*95610);}sv_4.close();
    
    ofstream sv_5 ("sv_5");
    if(sv_5.is_open())
    {sv_5<<to_string(nextlevel*95610);}sv_5.close();
    
    ofstream sv_6 ("sv_6");
    if(sv_6.is_open())
    {sv_6<<to_string(souls*95610);}sv_6.close();
    
    ofstream sv_7("sv_7");
    if(sv_7.is_open())
    {sv_7<<to_string(world*95610);}sv_7.close();
    
    ofstream sv_8("sv_8");
    if(sv_8.is_open())
    {{if(world==0)sv_8<<to_string(undasyl*95610);}sv_8.close();}
    
    ofstream sv_9("sv_9");
    if(sv_9.is_open())
    {sv_9<<to_string(soul1*95610);}sv_9.close();
    
    ofstream sv_10("sv_10");
    if(sv_10.is_open())
    {sv_10<<to_string(soul2*95610);}sv_10.close();
    
    ofstream sv_11("sv_11");
    if(sv_11.is_open())
    {sv_11<<to_string(soul3*95610);}sv_11.close();
    
    ofstream sv_12("sv_12");
    if(sv_12.is_open())
    {sv_12<<to_string(soul4*95610);}sv_12.close();
    
    ofstream sv_13("sv_13");
    if(sv_13.is_open())
    {sv_13<<to_string(bomb*95610);}sv_13.close();
    
    ofstream sv_14("sv_14");
    if(sv_14.is_open())
    {sv_14<<to_string(darkbomb*95610);}sv_14.close();
    
    ofstream sv_15("sv_15");
    if(sv_15.is_open())
    {sv_15<<to_string(herb*95610);}sv_15.close();
    
    ofstream sv_16("sv_16");
    if(sv_16.is_open())
    {sv_16<<to_string(bless*95610);}sv_16.close();
    
    ofstream sv_17("sv_17");
    if(sv_17.is_open())
    {sv_17<<to_string(humanity*95610);}sv_17.close();
    
    ofstream sv_18 ("sv_18");
    if(sv_18.is_open())
    {sv_18<<to_string(oscar*95610);}sv_18.close();
    
    ofstream sv_19 ("sv_19");
    if(sv_19.is_open())
    {sv_19<<to_string(estus*95610);}sv_19.close();
    
    ofstream sv_20 ("sv_20");
    if(sv_20.is_open())
    {sv_20<<to_string(maxestus*95610);}sv_20.close();
    
    ofstream sv_21 ("sv_21");
    if(sv_21.is_open())
    {sv_21<<to_string(lastbonf*95610);}sv_21.close();
//-----------------------------------------------load-one-side-doors-----------------------------------

    ofstream sv_22 ("sv_22");                            
    if(sv_22.is_open())                                  
    {sv_22<<to_string(door1*95610);}sv_22.close();       
                                                         
    ofstream sv_23 ("sv_23");                            
    if(sv_23.is_open())                                  
    {sv_23<<to_string(door2*95610);}sv_23.close();      
                                                         
    ofstream sv_25 ("sv_25");                            
    if(sv_25.is_open())                                  
    {sv_25<<to_string(door3*95610);}sv_25.close();       
                                                         
    ofstream sv_26 ("sv_26");                            
    if(sv_26.is_open())                                  
    {sv_26<<to_string(door4*95610);}sv_26.close();       
                                                         
    ofstream sv_27 ("sv_27");                            
    if(sv_27.is_open())                                  
    {sv_27<<to_string(door5*95610);}sv_27.close();       
                                                         
    ofstream sv_28 ("sv_28");                            
    if(sv_28.is_open())                                  
    {sv_28<<to_string(door6*95610);}sv_28.close();       
                                                         
    ofstream sv_29 ("sv_29");                            
    if(sv_29.is_open())                                  
    {sv_29<<to_string(door7*95610);}sv_29.close();       
                                                         
    ofstream sv_30 ("sv_30");                            
    if(sv_30.is_open())                                  
    {sv_30<<to_string(door8*95610);}sv_30.close();       
//-----------------------------------------------load-one-side-doors-----------------------------------

//-----------------------------------------------load-ground-items-------------------------------------
    ofstream sv_31 ("sv_31");                          
    if(sv_31.is_open())                                 
    {sv_31<<to_string(item1*95610);}sv_31.close();     
                                                         
    ofstream sv_32 ("sv_32");                          
    if(sv_32.is_open())                                 
    {sv_32<<to_string(item2*95610);}sv_32.close();     
                                                         
    ofstream sv_33 ("sv_33");                          
    if(sv_33.is_open())                                 
    {sv_33<<to_string(item3*95610);}sv_33.close();     
                                                         
    ofstream sv_34 ("sv_34");                          
    if(sv_34.is_open())                                 
    {sv_34<<to_string(item4*95610);}sv_34.close();     
                                                         
    ofstream sv_36 ("sv_36");                          
    if(sv_36.is_open())                                 
    {sv_36<<to_string(item5*95610);}sv_36.close();     
                                                         
    ofstream sv_37 ("sv_37");                          
    if(sv_37.is_open())                                 
    {sv_37<<to_string(item6*95610);}sv_37.close();     
                                                         
    ofstream sv_38 ("sv_38");                          
    if(sv_38.is_open())                                 
    {sv_38<<to_string(item7*95610);}sv_38.close();     
                                                         
    ofstream sv_39 ("sv_39");                          
    if(sv_39.is_open())                                 
    {sv_39<<to_string(item8*95610);}sv_39.close();     
//-----------------------------------------------load-ground-items-------------------------------------
    ofstream sv_40 ("sv_40");
    if(sv_40.is_open())
    {sv_40<<to_string(newgame*95610);}sv_40.close();
    
    ofstream sv_41 ("sv_41");
    if(sv_41.is_open())
    {sv_41<<to_string(asyldemfight*95610);}sv_41.close();
    
    ofstream sv_42 ("sv_42");
    if(sv_42.is_open())
    {sv_42<<to_string(asyldemdoor*95610);}sv_42.close();
    
    ofstream sv_43 ("sv_43");
    if(sv_43.is_open())
    {sv_43<<name;}sv_43.close();
    
    ofstream sv_44 ("sv_44");
    if(sv_44.is_open())
    {sv_44<<to_string(atk*95610);}sv_44.close();
    
    ofstream sv_45 ("sv_45");
    if(sv_45.is_open())
    {sv_45<<to_string(def*95610);}sv_45.close();
    
    ofstream sv_46 ("sv_46");
    if(sv_46.is_open())
    {sv_46<<to_string(frdef*95610);}sv_46.close();
    
    ofstream sv_47 ("sv_47");
    if(sv_47.is_open())
    {sv_47<<to_string(regen*95610);}sv_47.close();
    
    }                                                                           //void save() 
  
  void menu(){                                                                  //void menu()
        cout<<endl<<endl<<"{[-"<<name<<"-]}"<<endl<<
        "Your level: "<<level<<" | Required souls: "<<nextlevel<<endl<<
        "Your Estus: "<<estus<<endl<<endl;
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
         cout<<endl<<endl<<"          You used a 'Humanity'."<<endl<<endl;
         hp=maxhp;humanity=humanity-1;
         break;
                }
            }
            else{cout<<endl<<endl<<"You own no 'Humanity'."<<endl<<endl;}
       break;
}save();}

void battle() {                                                                  //void battle()
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
  else {if(stm-5>=0){if(regen==1){stm=stm-5;cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a sword swing!"<<endl;
  opphp = opphp-atk*50/oppdef;}else{cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl;}}};
  break;
case 'B':                                                                                //heavy
case 'b':
  if (stm-60>=0) {  
  cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a heavy sword swing!"<<endl;
  opphp = opphp-atk*90/oppdef;
  if(regen==0){stm=stm-60;}else{stm=stm-8;} }      //if (stm-60>=0)
  else {if(stm-30>=0){if(regen==1){stm=stm-30;cout<<endl<<endl<<"(You)You attacked "<<opponent<<" with a heavy sword swing!"<<endl;
  opphp = opphp-atk*90/oppdef;}else{cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl;}}};
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
  def=def+60;stm=stm-5;}
    else (cout<<endl<<endl<<"(You)You don't have enaugh stamina."<<endl);}
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
  if(oscar==0){menu();}
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
  {youdied();
  
       }
      } //if(fight==1)
     } //else
     if(hp<=0){fight=0;youdied();}
    } //for (fight=1;fight==1;x==9)
  regen=0;
  } //void battle()
void wait(){this_thread::sleep_for(chrono::seconds(5));}                    //void wait() per cutscene
void wait2(){this_thread::sleep_for(chrono::seconds(3));}                    //void wait2()per encounter

void bonfire(){
hp=maxhp;estus=maxestus;
      save();
    if(gotolord==0){
      if(oscar==0){
      cout<<endl<<endl<<"Health restored and Estus replenished."<<endl<<endl;}
       else{cout<<endl<<endl<<"Health restored."<<endl<<endl;}
        }
     else{
     cout<<endl<<endl<<"Health restored and Estus replenished."<<endl<<endl<<
     "Do You Want to sacrifice Humanity to Kindle?(y/n)"<<endl<<"input: ";cin>>chose;
     switch(chose);
     {
      if(maxestus<20){maxestus=maxestus+5;humanity=humanity-1;cout<<endl<<"You Kindled and your Estus flask can now hold more Flames.";}
      if(maxestus>=20){if(secrite==0){cout<<endl<<endl<<"You need the secret rite to Kindle further"<<endl<<endl;}}
      if(maxestus>=20){if(secrite==1){
      if(maxestus<40){maxestus=maxestus+5;humanity=humanity-1;cout<<endl<<"You Kindled and your Estus flask can now hold more Flames.";}}}
      else{cout<<endl<<"You can't Kindle any further.";}
      }
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
       }}}}                                                                    //void bonfire()

void Hollow() {
opponent="Hollow";
weapon="Broken Straight Sword";
if(undasyl<=3)  {    
      run=1;
  hostile=0;
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
battle();}
if(undasyl<11){
if(undasyl>8){
      run=1;
  hostile=3;
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
battle();}}
}                                                                                //void Hollow()
void Hollowarch() {
opponent="Hollow Archer";
weapon="Short Bow";
if(undasyl==7){
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
battle();}
}                                                                                //void Hollowarch()
void Asylum_Demon() {
opponent="Asylum Demon";
weapon="Demon's Great Hammer";
      run=1;
  hostile=3;
    opphp=813;
if(undasyl==11){opphp=336;run=0;}
 maxopphp=813;
   oppstm=200;
maxoppstm=200;
   oppdef=83;
 froppdef=83;
   oppatk=96;
      bow=0;
    parry=0;
 oppsouls=2000;
battle();
}                                                                               //void Asylum_Demon()
void Undead_Soldier(){
opponent="Undead Soldier";
weapon="Longsword";
if(undasyl==11){
      run=1;
  hostile=3;
    opphp=85;
 maxopphp=85;
   oppstm=50;
maxoppstm=50;
   oppdef=103;
 froppdef=103;
   oppatk=82;
      bow=0;
    parry=1;
 oppsouls=50;
battle();}
}                                                                             //void Undead_Soldier()



int main() {
x=9;//let's fucking go, go, go, go...
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
   maxestus= 0;
      level= 0;
  nextlevel= 0;
         hp= 0;
      maxhp= 0;
        atk= 0;
        def= 0;
      frdef= 0;
        stm= 0;
     maxstm= 0;
      parry= 0;
     parry2= 0;
      souls= 0;
   oppsouls= 0;

    string catchsave;

    ifstream sv_1 ("sv_1");
    if(sv_1.is_open())
    {
     while (getline(sv_1,catchsave))
     hp=stoi(catchsave)/95610;
    {
    sv_1.close();
   }}
   
    ifstream sv_2 ("sv_2");
    if(sv_2.is_open())
    {
     while (getline(sv_2,catchsave))
     maxhp=stoi(catchsave)/95610;
    {
    sv_2.close();
   }}
   
    ifstream sv_3 ("sv_3");
    if(sv_3.is_open())
    {
     while (getline(sv_3,catchsave))
     maxstm=stoi(catchsave)/95610;
    {
    sv_3.close();
   }}
   
    ifstream sv_4 ("sv_4");
    if(sv_4.is_open())
    {
     while (getline(sv_4,catchsave))
     level=stoi(catchsave)/95610;
    {
    sv_4.close();
   }}
   
    ifstream sv_5 ("sv_5");
    if(sv_5.is_open())
    {
     while (getline(sv_5,catchsave))
     nextlevel=stoi(catchsave)/95610;
    {
    sv_5.close();
   }}
   
    ifstream sv_6 ("sv_6");
    if(sv_6.is_open())
    {
     while (getline(sv_6,catchsave))
     souls=stoi(catchsave)/95610;
    {
    sv_6.close();
   }}
   
    ifstream sv_7 ("sv_7");
    if(sv_7.is_open())
    {
     while (getline(sv_7,catchsave))
     world=stoi(catchsave)/95610;
    {
    sv_7.close();
   }}
   
    ifstream sv_8 ("sv_8");
    if(sv_8.is_open())
    {
     while (getline(sv_8,catchsave))
     undasyl=stoi(catchsave)/95610;
    {
    sv_8.close();
   }}
   
    ifstream sv_9 ("sv_9");
    if(sv_9.is_open())
    {
     while (getline(sv_9,catchsave))
     soul1=stoi(catchsave)/95610;
    {
    sv_9.close();
   }}
   
    ifstream sv_10 ("sv_10");
    if(sv_10.is_open())
    {
     while (getline(sv_10,catchsave))
     soul2=stoi(catchsave)/95610;
    {
    sv_10.close();
   }}
   
    ifstream sv_11 ("sv_11");
    if(sv_11.is_open())
    {
     while (getline(sv_11,catchsave))
     soul3=stoi(catchsave)/95610;
    {
    sv_11.close();
   }}
   
    ifstream sv_12 ("sv_12");
    if(sv_12.is_open())
    {
     while (getline(sv_12,catchsave))
     soul4=stoi(catchsave)/95610;
    {
    sv_12.close();
   }}
   
    ifstream sv_13 ("sv_13");
    if(sv_13.is_open())
    {
     while (getline(sv_13,catchsave))
     bomb=stoi(catchsave)/95610;
    {
    sv_13.close();
   }}
   
    ifstream sv_14 ("sv_14");
    if(sv_14.is_open())
    {
     while (getline(sv_14,catchsave))
     darkbomb=stoi(catchsave)/95610;
    {
    sv_14.close();
   }}
   
    ifstream sv_15 ("sv_15");
    if(sv_15.is_open())
    {
     while (getline(sv_15,catchsave))
     herb=stoi(catchsave)/95610;
    {
    sv_15.close();
   }}
   
    ifstream sv_16 ("sv_16");
    if(sv_16.is_open())
    {
     while (getline(sv_16,catchsave))
     bless=stoi(catchsave)/95610;
    {
    sv_16.close();
   }}
   
    ifstream sv_17 ("sv_17");
    if(sv_17.is_open())
    {
     while (getline(sv_17,catchsave))
     humanity=stoi(catchsave)/95610;
    {
    sv_17.close();
   }}
   
    ifstream sv_18 ("sv_18");
    if(sv_18.is_open())
    {
     while (getline(sv_18,catchsave))
     oscar=stoi(catchsave)/95610;
    {
    sv_18.close();
   }}
   
    ifstream sv_19 ("sv_19");
    if(sv_19.is_open())
    {
     while (getline(sv_19,catchsave))
     estus=stoi(catchsave)/95610;
    {
    sv_19.close();
   }}
   
    ifstream sv_21 ("sv_21");
    if(sv_21.is_open())
    {
     while (getline(sv_21,catchsave))
     lastbonf=stoi(catchsave)/95610;
    {
    sv_21.close();
   }}
//-----------------------------------------------load-one-side-doors-----------------------------------   
    ifstream sv_22 ("sv_22");
    if(sv_22.is_open())
    {
     while (getline(sv_22,catchsave))
     door1=stoi(catchsave)/95610;
    {
    sv_22.close();
   }}
   
    ifstream sv_23 ("sv_23");
    if(sv_23.is_open())
    {
     while (getline(sv_23,catchsave))
     door2=stoi(catchsave)/95610;
    {
    sv_23.close();
   }}
   
    ifstream sv_25 ("sv_25");
    if(sv_25.is_open())
    {
     while (getline(sv_25,catchsave))
     door3=stoi(catchsave)/95610;
    {
    sv_25.close();
   }}
   
    ifstream sv_26 ("sv_26");
    if(sv_26.is_open())
    {
     while (getline(sv_26,catchsave))
     door4=stoi(catchsave)/95610;
    {
    sv_26.close();
   }}
   
    ifstream sv_27 ("sv_27");
    if(sv_27.is_open())
    {
     while (getline(sv_27,catchsave))
     door5=stoi(catchsave)/95610;
    {
    sv_27.close();
   }}
   
    ifstream sv_28 ("sv_28");
    if(sv_28.is_open())
    {
     while (getline(sv_28,catchsave))
     door6=stoi(catchsave)/95610;
    {
    sv_28.close();
   }}
   
    ifstream sv_29 ("sv_29");
    if(sv_29.is_open())
    {
     while (getline(sv_29,catchsave))
     door7=stoi(catchsave)/95610;
    {
    sv_29.close();
   }}
   
    ifstream sv_30 ("sv_30");
    if(sv_30.is_open())
    {
     while (getline(sv_30,catchsave))
     door8=stoi(catchsave)/95610;
    {
    sv_30.close();
   }}
//-----------------------------------------------load-one-side-doors-----------------------------------

//-----------------------------------------------load-ground-items-------------------------------------
    ifstream sv_31 ("sv_31");
    if(sv_31.is_open())
    {
     while (getline(sv_31,catchsave))
     item1=stoi(catchsave)/95610;
    {
    sv_31.close();
   }}
   
    ifstream sv_32 ("sv_32");
    if(sv_32.is_open())
    {
     while (getline(sv_32,catchsave))
     item2=stoi(catchsave)/95610;
    {
    sv_32.close();
   }}
   
    ifstream sv_33 ("sv_33");
    if(sv_33.is_open())
    {
     while (getline(sv_33,catchsave))
     item3=stoi(catchsave)/95610;
    {
    sv_33.close();
   }}
   
    ifstream sv_34 ("sv_34");
    if(sv_34.is_open())
    {
     while (getline(sv_34,catchsave))
     item4=stoi(catchsave)/95610;
    {
    sv_34.close();
   }}
   
    ifstream sv_36 ("sv_36");
    if(sv_36.is_open())
    {
     while (getline(sv_36,catchsave))
     item5=stoi(catchsave)/95610;
    {
    sv_36.close();
   }}
   
    ifstream sv_37 ("sv_37");
    if(sv_37.is_open())
    {
     while (getline(sv_37,catchsave))
     item6=stoi(catchsave)/95610;
    {
    sv_37.close();
   }}
   
    ifstream sv_38 ("sv_38");
    if(sv_38.is_open())
    {
     while (getline(sv_38,catchsave))
     item7=stoi(catchsave)/95610;
    {
    sv_38.close();
   }}
   
    ifstream sv_39 ("sv_39");
    if(sv_39.is_open())
    {
     while (getline(sv_39,catchsave))
     item8=stoi(catchsave)/95610;
    {
    sv_39.close();
   }}
//-----------------------------------------------load-ground-items-------------------------------------
    ifstream sv_40 ("sv_40");
    if(sv_40.is_open())
    {
     while (getline(sv_40,catchsave))
     newgame=stoi(catchsave)/95610;
    {
    sv_40.close();
   }}
   
    ifstream sv_41 ("sv_41");
    if(sv_41.is_open())
    {
     while (getline(sv_41,catchsave))
     asyldemfight=stoi(catchsave)/95610;
    {
    sv_41.close();
   }}
   
    ifstream sv_42 ("sv_42");
    if(sv_42.is_open())
    {
     while (getline(sv_42,catchsave))
     asyldemdoor=stoi(catchsave)/95610;
    {
    sv_42.close();
   }}
   
   ifstream sv_43 ("sv_43");
    if(sv_43.is_open())
    {
     while (getline(sv_43,catchsave))
     name=catchsave;
    {
    sv_43.close();
   }}
   
   ifstream sv_44 ("sv_44");
    if(sv_44.is_open())
    {
     while (getline(sv_44,catchsave))
     atk=stoi(catchsave)/95610;
    {
    sv_44.close();
   }}
   
   ifstream sv_45 ("sv_45");
    if(sv_45.is_open())
    {
     while (getline(sv_45,catchsave))
     def=stoi(catchsave)/95610;
    {
    sv_45.close();
   }}
   
   ifstream sv_46 ("sv_46");
    if(sv_46.is_open())
    {
     while (getline(sv_46,catchsave))
     frdef=stoi(catchsave)/95610;
    {
    sv_46.close();
   }}
   
   ifstream sv_47 ("sv_47");
    if(sv_47.is_open())
    {
     while (getline(sv_47,catchsave))
     regen=stoi(catchsave)/95610;
    {
    sv_47.close();
   }}
   
   save();    
if (newgame == 0) {
save();
system("clear");
   cout<<endl<<"Dark Souls - Demakest:"<<endl<<"Prepare to Read Edition"<<endl<<endl<<"disclaimer placeholder"<<endl<<endl<<"Chose Your Character:"<<endl<<endl<<"Name: ";
   cin >> name; cout<<"Your Character will be named "<<name<<endl<<endl<<"Chose your starting class"<<endl<<endl<<
   "(1)Warrior: lvl4 594HP 96STM 13STR"<<endl<<
   "(2)Knight:  lvl5 658HP 91STM 11STR"<<endl<<
   "(3)Pyromancer: lvl1 572HP 93STM 12STR"<<endl<<
   "(4)Deprived: lvl6 471HP 46STM 11STR"<<endl<<endl<<"input: ";cin>>chose;
   switch(chose)
   {
   case'1':
   hp=594;maxhp=594;stm=96;maxstm=96;herb=1;nextlevel=707;level=4;
   atk=80;def=165;frdef=165;
   break;
   case'2':
   hp=658;maxhp=658;stm=91;maxstm=91;herb=1;bomb=1;nextlevel=724;level=5;
   atk=82;def=217;frdef=217;
   break;
   case'3':
   hp=572;maxhp=572;stm=93;maxstm=93;humanity=4;nextlevel=673;level=1;
   atk=80;def=128;frdef=128;
   break;
   case'4':
   hp=471;maxhp=471;stm=46;maxstm=46;nextlevel=758;level=6;
   atk=87;def=80;frdef=80;
   break;
   };
   save();


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
undasyl=1;
};                                         //if (newgame==0)

  stm=maxstm;hp=maxhp;
while (x=9) {
 if (world==0) {                           //undead asylum
   if (undasyl==1) {                       //cell

save();
  cout << "'Undead Asylum'  'Cell'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(W) Out of the cage"<<endl<<"(A) "<<endl<<"(S) "<<endl<<"(D) "<<endl<<"(Q) "<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'w':
     case 'W':
     undasyl=2;
     break;
     case 'e':
     case 'E':
     menu();
     break;
   } //switch(chose)
  }  //if (undasyl=0)
  if (undasyl==2) {                         //corridor
save();  
  cout << "'Undead Asylum'  'Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) Into flooded room"<<endl<<"(A) "<<endl<<"(S) Back into the cage"<<endl<<"(D) "<<endl<<"(Q) Attack crying Hollow"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=1;
     break;
     case 'w':
     case 'W':
     undasyl=3;
     break;
     case 'q':
     case 'Q':
     Hollow();
     break;
     case 'e':
     case 'E':
     menu();
     break;
    } //switch(chose)
   }  //if (undasyl=1)
    if (undasyl==3) {                          //flooded room
save();    
  cout << "'Undead Asylum'  'Flooded room'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) Up the ladder"<<endl<<"(A) "<<endl<<"(S) Back to corridor"<<endl<<"(D) "<<endl<<"(Q) Attack laid out Hollow"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=2;
     break;
     case 'w':
     case 'W':
     undasyl=4;
     break;
     case 'q':
     case 'Q':
     Hollow();
     break;
     case 'e':
     case 'E':
     menu();
     break;
     }  //switch(chose)
    }   //if (undasyl==2)
    if (undasyl==4) {                        //empty space
    save();
  cout << "'Undead Asylum'  'Empty space'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
   <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) To the huge door"<<endl<<"(A) Check left corner"<<endl<<"(S) Down the ladder"<<endl<<"(D) Check left corner"<<endl<<"(Q) Rest at the Bonfire"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=3;
     break;
     case 'q':
     case 'Q':
     bonfire();
     lastbonf=1;
     save();
     break;
     case 'w':
     case 'W':
      if (asyldemdoor==0){
      cout<<endl<<"The door is closed by some contraption."<<endl<<endl;
      }
      else {cout<<endl<<"You opened the door."<<endl<<endl; undasyl=5;}
     break;
     case 'a':
     case 'A':
     cout<<"Just a side of pillars."<<endl<<endl;
     break;
     case 'd':
     case 'D':
     if(door1==0){
     cout<<"The door is closed from the other side."<<endl<<endl;}
     else{undasyl=9;}
     break;
     case 'e':
     case 'E':
     menu();
     break;
     }  //switch(chose)
    }   //if (undasyl==3)
    if (undasyl==5) {                       //boss room
    save();
  cout << "'Undead Asylum'  'Room with pots'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) To the exit door"<<endl<<"(A) To celled room"<<endl<<"(S) Back to Bonfire"<<endl<<"(D)"<<endl<<"(Q) Tackle the pots"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=3;
     break;
     case 'a':
     case 'A':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==5){undasyl=6;asyldemdoor=0;lastbonf=2;}}
     if(asyldemfight==0){undasyl=6;}
     break;
     case 'w':
     case 'W':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==5){undasyl=6;asyldemdoor=0;lastbonf=2;}}
     if(asyldemfight==0){undasyl=12;}
     break;
     case 'q':
     case 'Q':
     if(asyldemfight==1){Asylum_Demon();if(undasyl==5){undasyl=6;;asyldemdoor=0;lastbonf=2;}};
      if(asyldemfight==0){
       if(item1==1){cout<<endl<<endl<<"You found a Soul of a Lost Undead in one of them!"<<endl<<endl;
        soul1=soul1+1;item1=0;save();}
         else{cout<<endl<<endl<<"All the pots broke. Satisfaction restored."<<endl<<endl;}}     
     break;
     case 'e':
     case 'E':
     menu();
     break;     
     }  //switch(chose)
    }   //if (undasyl==4)
    if (undasyl==6) {                    //Celled flooded room
    save();
    cout << "'Undead Asylum'  'Celled flooded room'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) To upwards corridor"<<endl<<"(A)"<<endl<<"(S) Back to pots room"<<endl<<"(D)"<<endl<<"(Q) Rest to Bonfire"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     if(asyldemdoor==1){undasyl=5;}
     if(asyldemdoor==0){cout<<endl<<endl<<
      "Cell closed behind you."<<endl<<"You can still see the Asylum Demon wandering about in the pots room."<<endl<<endl;}
     break;
     case 'q':
     case 'Q':
     bonfire();
     lastbonf=2;
     save();
     break;
     case 'w':
     case 'W':
     undasyl=7;
     break;
     case 'e':
     case 'E':
     menu();
     break; 
    }   //switch(chose)
   }    //if (undasyl==5)
   if (undasyl==7) {                       //upwards corridor
   save();
  cout << "'Undead Asylum'  'Upwards Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"An Hollow is aiming at you with their bow!"<<endl<<"The fight is about to start!"
  <<endl<<endl;wait2();Hollowarch();if(undasyl==7){undasyl=8;}
   }
   if (undasyl==8) {
   save();
  cout << "'Undead Asylum'  'Upwards Corridor'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) To intern balcony"<<endl<<"(A) Check cell"<<endl<<"(S) Back to Bonfire"<<endl<<"(D)"<<endl<<"(Q) Check corpse in the middle of the stairs"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=6;
     break;
     case 'a':
     case 'A':
      if(item2==1){
      cout<<endl<<endl<<"You found a Green Blossom on a corpse in the cell."<<endl<<endl;herb=herb+1;item2=0;save();}
       else{cout<<endl<<endl<<"there's just a lonely corpse inside."<<endl<<endl;}
     break;
     case 'q':
     case 'Q':
     if(item4==1){
     cout<<endl<<endl<<"There's a Firebomb on the corpse."<<endl<<endl;
     bomb=bomb+1;item4=0;save();}
     else{cout<<endl<<endl<<"You already robbed this corpse."<<endl<<endl;}
     break;
     case 'w':
     case 'W':
     undasyl=9;
     break;
     case'e':
     case'E':
     menu();
     break;
    }   //switch(chose)
   }    //if(undasyl==7)
   if (undasyl==9) {                     //intern balcony
   save();
  cout << "'Undead Asylum'  'Intern Balcony'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
   <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) Up stairs"<<endl<<"(A) Check broken stairs"<<endl<<"(S) Back to upwards corridor"<<endl<<"(D) Down stairs"<<endl<<"(Q) Check hole in the wall"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=8;
     break;
     case 'a':
     case 'A':
     if(item3==1){
     cout<<endl<<endl<<"There's a loot higher in the stairs"<<endl<<"But the lower part is uncrossable."<<endl<<endl;}
     else{cout<<endl<<endl<<"The view leaves quite much to be desired."<<endl<<endl;}
     break;
     case 'q':
     case 'Q':
     if(oscar==1){
     cout<<endl<<endl<<"You found the knight that dropped you the key to your cell!"<<endl<<endl<<
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
     oscar=0;maxestus=5;
     estus=maxestus;
     souls=souls+150;save();}
      else{cout<<endl<<endl<<"There's a corpse..."<<endl<<endl;}
     break;
     case 'w':
     case 'W':
     cout<<endl<<endl<<"You've been spotted by an hostile Hollow!"<<endl<<"The fight is about to begin."<<endl<<endl; wait2();
     Hollow();if(undasyl==9){undasyl=10;};
     break;
     case 'd':
     case 'D':
     undasyl=4;door1=1;
     break;
     case'e':
     case'E':
     menu();
     break;
   }    //switch(chose)
  }     //if (undasyl==8)
  if (undasyl==10) {                               //outer balcony
   save();
   cout << "'Undead Asylum'  'Outer Balcony'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"You've been spotted by an hostile Hollow."<<endl<<"The battle is about to begin.";
  Hollow();if(undasyl==10){undasyl=11;}
  }
  if(undasyl==11){
  cout << "'Undead Asylum'  'Outer Balcony'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) Take the plunge"<<endl<<"(A) Cell door"<<endl<<"(S) Back to intern balcony"<<endl<<"(D) Rob corpse"<<endl<<"(Q)"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 's':
     case 'S':
     undasyl=9;
     break;
     case 'a':
     case 'A':
     Undead_Soldier();
      if(door2==0){cout<<endl<<endl<<"The door is key closed."<<endl<<endl;}
      else{if(item3==1){cout<<endl<<endl<<"You're on the broken stairs you saw before."<<endl<<
      "You found a Soul of a Lost Undead.";}else{cout<<endl<<endl<<"It's a dead end."<<endl<<endl;}}
      save();
     break;
     case 'd':
     case 'D':
     if(item5==1){cout<<endl<<endl<<"You found a Firebomb on the corpse."<<endl<<endl;bomb=bomb+1;item5=0;}
       else{cout<<endl<<endl<<"You already robbed this corpse."<<endl<<endl;}
     break;
     case 'w':
     case 'W':
     if(asyldemfight==1){
     Asylum_Demon();if(undasyl==11){asyldemdoor=1;asyldemfight=0;world=0;undasyl=5;humanity++;
     cout<<endl<<"The Asylum Demon dropped a Humanity!"<<endl<<endl;}}
     else{hp=hp-maxhp/5;world=0;undasyl=5;asyldemdoor=1;}
     break;
     case'e':
     case'E':
     menu();
     save();
     break;
    }
   }
   if(undasyl==12){
cout << "'Undead Asylum'  'Snowy Precipice'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(W) Take a look down from the higher peak"<<endl<<"(A) Explore the tiny rock entrance"<<endl<<"(S) Back to pots room"<<endl<<"(D) Explore small ruins"<<endl<<"(Q)"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'w':
     case 'W':
     system("clear");
     cout<<"Only, in the ancient legends it is stated,";wait();system("clear");
     cout<<" that one day an undead shall be chosen to leave the undead asylum, in pilgrimage,";wait();system("clear");
     cout<<" to the land of ancient lords,";wait();system("clear");
     cout<<" Lordran.";wait();system("clear");
     world=1;undasyl=0;firelink=1;
     break;
     case'a':
     case'A':
     break;
     if(item6==1){
     cout<<endl<<endl<<"You found a Soul of a Proud Knight on the ledge"<<endl<<endl;
     soul2++;item6=0;}
     else{cout<<endl<<endl<<"You checked this ledge already."<<endl<<endl;}
     case's':
     case'S':
     undasyl=5;
     break;
     case'd':
     case'D':
     cout<<endl<<endl<<"(?)Cra! Cra! Give me soft, give me warm."<<endl<<endl;
     if(humanity>0){cout<<endl<<endl<<"Do you want to trade Humanity with the little crow?"<<endl<<"(y/n)"<<endl<<endl<<"input: ";
     cin>>chose;
        switch(chose);
        case'y':
        case'Y':
        soul2=soul2+1;humanity=humanity-1;
        break;
        case'n':
        case'N':
        break;
     }
     case 'e':
     case 'E':
     menu();
     break;
   }
  }
   
  
  }     //if (world=0)
 }      //while(x=9)
  return 0;
}       //int main()
