#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

  int x;           int newgame;     int world;      int undasyl;  int bow;      int item1;   int door1;   int soul1;   int humanity;
  int asyldemdoor; int asyldemfight;int firelink;   int item2;    int door2;    int soul2;   int regen;   string shop2;string shop1;
  int undburg;     int catacombs;   int petitelondo;int maxstm;   int item3;    int door3;   int soul3;   string shop3;string shop4;
  int lastbonf;    int hostile;     char oppatt;    int fight;    int maxestus; int item4;   int door4;   int soul4;   int shopper;
  int run;         int estus;       int hp;         int maxhp;    int stm;      int item5;   int door5;   int bomb;    string name;
  int opphp;       int maxopphp;    int oppstm;     int maxoppstm;int item6;    int door6;   int darkbomb;int item9;   int easteregg;
  int atk;         int def;         int frdef;      int oppatk;   int oppdef;   int item7;   int door7;   int herb;
  int froppdef;    int parry;       char parry2;    int souls;    int oscar;    int item8;   int door8;   int bless;
  int oppsouls;    char chose;      char input;     int level;    int nextlevel;int gotolord;int secrite; int snuggly;
  string savex;    string opponent; string weapon;  int lautrecz; int crst;     int petr;    int mage;    int wise;
  int pray;        int knht1;       int knht2;      int pyr;      int strg;     int firek;   int srp1;    int strnz;

  void youdied(){
  souls=0;
  cout<<"         You Died"<<endl<<endl;
  hp=maxhp;stm=maxstm;estus=maxestus;
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
    system("mkdir /usr/games/Dark_Souls-Demakest");                        //game folder
    system("mkdir /usr/games/Dark_Souls-Demakest/dir_1");                 //stats dir
    const char *path1="/usr/games/Dark_Souls-Demakest/dir_1/sv_1";
    ofstream sv_1(path1);
    string data1(to_string(hp*95610));                                       //hp
    sv_1 << data1;
    

    const char *path2="/usr/games/Dark_Souls-Demakest/dir_1/sv_2";
    ofstream sv_2(path2);
    string data2(to_string(maxhp*95610));                                     //maxhp
    sv_2<< data2;
    

    const char *path3="/usr/games/Dark_Souls-Demakest/dir_1/sv_3";
    ofstream sv_3(path3);
    string data3(to_string(maxstm*95610));                                   //maxstm
    sv_3<< data3;
    

    const char *path4="/usr/games/Dark_Souls-Demakest/dir_1/sv_4";
    ofstream sv_4(path4);
    string data4(to_string(level*95610));                                    //level
    sv_4<< data4;
    

    const char *path5="/usr/games/Dark_Souls-Demakest/dir_1/sv_5";
    ofstream sv_5(path5);
    string data5(to_string(nextlevel*95610));                               //nextlevel
    sv_5<< data5;
    
    
    const char *path6="/usr/games/Dark_Souls-Demakest/dir_1/sv_6";
    ofstream sv_6(path6);
    string data6(to_string(souls*95610));                                  //souls
    sv_6<< data6;
    

    const char *path7="/usr/games/Dark_Souls-Demakest/dir_1/sv_7";
    ofstream sv_7(path7);
    string data7(to_string(world*95610));                                  //world
    sv_7<< data7;

//------------------------------------------------save-microarea---------------------------------------
if(world==0){
    ofstream sv_8("sv_8");
    if(sv_8.is_open())
    {sv_8<<to_string(undasyl*95610);}sv_8.close();
}
if(world==1){
    ofstream sv_8("sv_8");
    if(sv_8.is_open())
    {sv_8<<to_string(firelink*95610);}sv_8.close();
}    
//------------------------------------------------save-microarea---------------------------------------
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

    ofstream sv_48 ("sv_48");
    if(sv_48.is_open())
    {sv_48<<to_string(item9*95610);}sv_48.close();
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
    
//-------------------------------------------save-npc-----------------------------------------------

    ofstream sv_49 ("sv_49");
    if(sv_49.is_open())
    {sv_49<<to_string(crst*95610);}sv_49.close();

    ofstream sv_50 ("sv_50");
    if(sv_50.is_open())
    {sv_50<<to_string(petr*95610);}sv_50.close();

    ofstream sv_51 ("sv_51");
    if(sv_51.is_open())
    {sv_51<<to_string(mage*95610);}sv_51.close();

    ofstream sv_52 ("sv_52");
    if(sv_52.is_open())
    {sv_52<<to_string(wise*95610);}sv_52.close();

    ofstream sv_53 ("sv_53");
    if(sv_53.is_open())
    {sv_53<<to_string(pray*95610);}sv_53.close();

    ofstream sv_54 ("sv_54");
    if(sv_54.is_open())
    {sv_54<<to_string(knht1*95610);}sv_54.close();

    ofstream sv_55 ("sv_55");
    if(sv_55.is_open())
    {sv_55<<to_string(knht2*95610);}sv_55.close();

    ofstream sv_56 ("sv_56");
    if(sv_56.is_open())
    {sv_56<<to_string(pyr*95610);}sv_56.close();

    ofstream sv_57 ("sv_57");
    if(sv_57.is_open())
    {sv_57<<to_string(strg*95610);}sv_57.close();

    ofstream sv_58 ("sv_58");
    if(sv_58.is_open())
    {sv_58<<to_string(firek*95610);}sv_58.close();

    ofstream sv_59 ("sv_59");
    if(sv_59.is_open())
    {sv_59<<to_string(srp1*95610);}sv_59.close();

    ofstream sv_60 ("sv_60");
    if(sv_60.is_open())
    {sv_60<<to_string(strnz*95610);}sv_60.close();

    ofstream sv_61 ("sv_61");
    if(sv_61.is_open())
    {sv_61<<to_string(lautrecz*95610);}sv_61.close();

//-------------------------------------------save-npc-----------------------------------------------
    }                                                                           //void save() 
  
  void menu(){                                                                  //void menu()
  if(soul1<0){soul1=0;}
  if(soul2<0){soul2=0;}
  if(soul3<0){soul3=0;}
  if(soul4<0){soul4=0;}
  if(bomb<0){bomb=0;}
  if(darkbomb<0){darkbomb=0;}
  if(herb<0){herb=0;}
  if(bless<0){bless=0;}
  if(humanity<0){humanity=0;}
  
        cout<<endl<<endl<<"{[-"<<name<<"-]}"<<endl<<
        "Your level: "<<level<<" | Required souls: "<<nextlevel<<endl;
       if(oscar==0){cout<<"Your Estus: "<<estus;}
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
void wait(){this_thread::sleep_for(chrono::seconds(0));}                    //void wait() per cutscene
void wait2(){this_thread::sleep_for(chrono::seconds(3));}                    //void wait2()per encounter

void bonfire(){
if(maxestus<=0){maxestus=5;}
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
     switch(chose){
     case'y':
     case'Y':
          if(humanity>0){
      if(maxestus<20){maxestus=maxestus+5;humanity=humanity-1;cout<<endl<<"You Kindled and your Estus flask can now hold more Flames.";break;}
      if(maxestus>=20){if(secrite==0){cout<<endl<<endl<<"You need the secret rite to Kindle further"<<endl<<endl;}break;}
      if(maxestus>=20){if(secrite==1){
      if(maxestus<40){maxestus=maxestus+5;humanity=humanity-1;cout<<endl<<"You Kindled and your Estus flask can now hold more Flames.";}}break;}
      else{cout<<endl<<"You can't Kindle any further.";}}else{cout<<endl<<endl<<"You own no Humanity."<<endl<<endl;break;}
      break;
     case'n':
     case'N':
     break;
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
       }//switch(chose)
       }//else
       }//else
       }                                                                                              //void bonfire()

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
if(undasyl==11){opphp=457;run=0;}
 maxopphp=813;
   oppstm=200;
maxoppstm=200;
   oppdef=83;
 froppdef=83;
   oppatk=54;
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

void happygrinding(){
opponent="Vamos Specter";
weapon="Pickaxe";
      run=1;
  hostile=69;
    opphp=1069;
 maxopphp=1069;
   oppstm=420;
maxoppstm=420;
   oppdef=103;
 froppdef=103;
   oppatk=22;
      bow=0;
    parry=1;
 oppsouls=250;
battle();}                                                                            //void happygrinding()

void shop(){
if(shopper==1){ //petrus
shop1="Divine Blessing";
shop2="Firebomb";
shop3="Green Blossom";
shop4="---";
}

cout<<endl<<endl<<"What do you want to buy?"<<endl<<"Your Souls:"<<souls<<endl<<endl<<
"(1) "<<shop1<<" ";if(shopper==1){cout<<"3000";}cout<<endl<<
"(2) "<<shop2<<" ";if(shopper==1){cout<<"       500";}cout<<endl<<
"(3) "<<shop3<<" ";if(shopper==1){cout<<"  800";}cout<<endl<<
"(4) "<<shop4<<" ";if(shopper==1){cout<<"            ---";}cout<<endl<<
"(0) Exit"<<endl<<endl<<"input: ";
cin>>chose;
 switch(chose){
 case'1':
  if(shopper==1){if(souls>=3000){bless=bless+1;souls=souls-3000;cout<<endl<<endl<<"You acquired a Divine Blessing from Petrus."<<endl<<endl;}else{cout<<endl<<endl<<"You don't have enaugh souls."<<endl<<endl;}}
 break;
 case'2':
 if(shopper==1){if(souls>=500){bomb=bomb+1;souls=souls-500;cout<<endl<<endl<<"You acquired a Firebomb from Petrus."<<endl<<endl;}else{cout<<endl<<endl<<"You don't have enaugh souls."<<endl<<endl;}}
 break;
 case'3':
 if(shopper==1){if(souls>=800){herb=herb+1;souls=souls-800;cout<<endl<<endl<<"You acquired a Green Blossom from Petrus."<<endl<<endl;}else{cout<<endl<<endl<<"You don't have enaugh souls."<<endl<<endl;}}
 break;
 case'4':
 break;
 case'0':
 break;
 }
}

void roundtable(){
cout<<endl<<endl<<"Who do you want to talk to?"<<endl<<endl;
cout<<"(1) ";if(crst>=1){cout<<"Crestfallen Warrior";}cout<<endl;                  //crestfallen
cout<<"(2) ";if(petr>=1){cout<<"Petrus of Thorolund";}cout<<endl;                  //petrus
cout<<"(3) ";if(firek>=1){cout<<"Fire keeper";}cout<<endl;                         //anastacia
cout<<"(4) ";if(mage>=1){cout<<"Griggs of Vineheim";}cout<<endl;                   //girggs
cout<<"(5) ";if(wise>=1){cout<<"Big Hat Logan";}cout<<endl;                        //logan
cout<<"(6) ";if(pray>=1){cout<<"Reah of Thorolund";}cout<<endl;                    //reah
cout<<"(7) ";if(knht1>=1){cout<<"Vince of Thorolund";}cout<<endl;                  //vince
cout<<"(8) ";if(knht2>=1){cout<<"Nico of Thorolund";}cout<<endl;                   //nico
cout<<"(9) ";if(pyr>=1){cout<<"Laurentius of the great swamp";}cout<<endl;         //laurentius
cout<<"(0) Others"<<endl<<endl<<"input: ";
cin >> chose;
switch(chose){
case'1':
  if(crst==1){                              //spontaneous talking no event required
  cout<<endl<<endl<<"Well, what do we have here? You must be a new arrival. Let me guess. Fate of the Undead, right? Well, you're not the first.But there's no salvation here. You'd have done better to rot in the Undead Asylum… But, too late now.Well, since you're here… Let me help you out. There are actually two Bells of Awakening. One's up above, in the Undead Church. The other is far, far below, in the ruins at the base of Blighttown. Ring them both, and something happens… Brilliant, right? Not much to go on, but I have a feeling that won't stop you. So, off you go. It is why you came, isn't it? To this accursed land of the Undead? Hah hah hah hah…"<<endl<<endl;crst=2;
  break;}
  if(crst==2){
  cout<<endl<<endl<<"Oh, your face! You're practically Hollow. But who knows, going Hollow could solve quite a bit! Hah hah hah hah… Hm, what? Restoring your humanity? Well, there are a few ways to go about it… Collect it bit by bit from corpses, or you can butter up a cleric, and get yourself summoned. And the quickest way, although I'd never do it, is to kill a healthy Undead, and pillage its humanity. Coveting thy neighbour is only human, after all! Hah hah hah hah… What are you looking at? Don't try anything clever. You might regret it."<<endl<<endl;crst=3;
  break;}
  if(crst==3){
  cout<<endl<<endl<<"Oi, hold on…Don't tell me, have you been cursed? Oh woe is the Undead who's cursed on top of it all Harsh times; harsh times indeed! Hah hah hah hah! No, no, I'm sorry. Here, let me share a nice tip. Long ago, I was told of a remedician who resides in New Londo. Does he really exist? Well, go and find out for yourself. But don't blame me if he's just an apparition! Hah hah hah hah!"<<endl<<endl;crst=4;
  break;}
  if(crst==4){
  cout<<endl<<endl<<"Hm? What, you want to hear more? Oh, that's all we need. Another inquisitive soul. Well, listen carefully, then… One of the bells is up above in the Undead Church, but the lift is broken. You'll have to climb the stairs up the ruins, and access the Undead Burg through the waterway. The other bell is back down below the Undead Burg, within the plague-infested Blighttown. But I'd die again before I step foot in that cesspool! Hah hah hah hah…"<<endl<<endl;crst=5;
  break;}
  if(crst==5){
  cout<<endl<<endl<<"You again? There's nothing to speak about, really. Oh, actually… Something strange did happen. That crow flew off with somebody in its clutches. I think it was a man curled up in a ball. Stranger things have happened, right? No, maybe not…"<<endl<<endl;crst=6;
  break;}
  if(crst==6){
  cout<<endl<<endl<<"Bloody hell, what is it now? You ask too many questions."<<endl<<endl;crst=7;
  break;}
  if(crst==7){
  cout<<endl<<endl<<"Have you been to the ruins of New Londo below? Just head down the stairs, and take the lift. It's certainly worth a visit. It was once an Undead city. You may find a clue or two. Unless the ghosts find you first… Keh heh heh heh!"<<endl<<endl;crst=8;
  break;}
  if(crst==8){
  cout<<endl<<endl<<"Oh, have you seen that terribly morose lass? … The Fire Keeper. She's stuck keeping that bonfire lit. Sad, really. She's mute and bound to this forsaken place. They probably cut her tongue out back in her village, so that she'd never say any god's name in vain. How do these martyrs keep chugging along? I'd peter out in an instant. Hah hah hah hah…"<<endl<<endl;crst=9;
  break;}
  if(crst==9){
  cout<<endl<<endl<<"How did that silly sorcerer's apprentice end up? You know, the one always prattling on about Master Logan. He left for the Undead Burg, but never came back. Serves him right. If even Old Big Hat can't make it out there, what chance does he have? I hope he enjoys his new life as a Hollow."<<endl<<endl;crst=69;
  break;}
  if(crst==69){                          //end of spontaneous talking
  cout<<endl<<endl<<"What now? I'm not up for chatting. Leave me alone."<<endl<<endl;
  break;}
  if(crst==8){                           //after crossing the first new area
  cout<<endl<<endl<<"What's wrong? Get a bit of scare out there? No problem. Have a seat and get comfortable. We'll both be Hollow before you know it. Hah hah hah hah… Well, what are you going to do? I've already decided. I don't really care; I'm simply crestfallen…"<<endl<<endl;crst=69;
  break;}
  if(crst==9){                           //after retrieving griggs
  cout<<endl<<endl<<"How did that nutty sorcerer make it back? Unexpected, but I suppose stranger things have happened."<<endl<<endl;crst=69;
  break;}
  if(crst==10){                          //after finding laurentius
  cout<<endl<<endl<<"How did that old man make it back? Unexpected, but I suppose stranger things have happened."<<endl<<endl;crst=69;
  break;}
   if(crst==11){                        //after ringing the first bell
  cout<<endl<<endl<<"Why, what a surprise. I didn't expect you to make it. … Oh, somebody rang the bell… Wait. Was it you? You never give up, do you? I don't know how you do it. Well, don't stop now. Only one more, but it's going to be suicide. Hah hah hah hah …"<<endl<<endl;crst=69;
  break;}
   if(crst==12){                       //after reah vince and nico comes in
  cout<<endl<<endl<<"Did you see her? That virtuous little maiden, complete with followers in tow. They're probably going straight to pillage graves. I've heard enough about 'M'Lady' for a lifetime."<<endl<<endl;crst=69;
  break;}
  if(crst==13){                       //after rescuing reah from the catacombs
  cout<<endl<<endl<<"Did you hear about the maiden? The virtuous lass came back alone, and in absolute tatters… Did her follower die, or was she abandoned? Who knows. But I suppose we've heard the last from 'M'lady'. Hah hah hah hah! That maiden? She's shuffled off somewhere. I believe to the Undead Church. These ruins are probably too awkward for her."<<endl<<endl;crst=69;
  break;}
  if(crst==14){                       //after rescuing logan
  cout<<endl<<endl<<"Oi, did you see him? Big Hat Logan, the legendary sorcerer, in the flesh! … This place is simply mad … Legendary heroes popping up left and right … They're making me feel quite inadequate, to be honest! Hah hah hah hah …"<<endl<<endl;crst=69;
  break;}
  if(crst==15){                       //after ringing both bells
  cout<<endl<<endl<<"Did you ring the second bell? That is incredible, I must say… But now we have a new problem. It's noisy, it snores, and its breath is lethal… This is no laughing matter, I tell you. Damn, that stench… And I was really beginning to like it here! Sigh… Maybe it's time I do something about it…"<<endl<<endl;crst=69;
  break;}
  break;
    if(crst==0){cout<<endl<<endl<<"There's no one here."<<endl<<endl;}
break;
case'2':
  if(petr==1){
   cout<<endl<<endl<<"Hello there. I believe we are not acquainted? I am Petrus of Thorolund. Have you business with us? ...If not, I'd prefer to keep a distance, if possible."<<endl<<endl;petr=2;break;
  }
  if(petr==2){
   cout<<endl<<endl<<"Hello there. I realize that I have requested that we retain our distance, but I also want you to know that it is not meant in ill-will. Here, take this. As a token of peace. No, go ahead. It's for you. Petrus handed you a Divine Blessing."<<endl<<endl;bless=bless+1;petr=3;break;
  }
  if(petr==3){
   cout<<endl<<endl<<"Oh, my... you again? Oh, I know. How about this... I have to await my companions here anyway, so, what if I were to teach you some miracles? Would that please you? That is a shame. But each to their own. Speak to me if you have a change of heart."<<endl<<endl;petr=4;break;
  }
  if(petr==4){
   cout<<endl<<endl<<"My companions are M'lady and her young knights. She is young, but burdened by an Undead mission. We are her defenses, to keep her from harm."<<endl<<endl;petr=5;break;
  }
  if(petr==5){
   cout<<endl<<endl<<"An Undead mission? Regrettably, I cannot share that with you. But you are my pupil, perhaps if you show your faith..."<<endl<<"Hand Petrus of 5000 souls? (y/n)"<<endl<<endl<<"input ";cin>>chose;
     switch(chose){
     case'y':
     case'Y':
      if(souls>=5000){souls=souls-5000;cout<<endl<<endl<<"Very well. I can surely tell you, of all people... Undead clerics are given a mission to seek Kindling. Kindling is the art of feeding bonfires with humanity. Through Kindling, we shall one day be granted magnificent powers."<<endl<<endl;petr=6;break;}
      else{cout<<endl<<endl<<"(You don't have enaugh souls.) I am afraid that may be difficult. For our missions are sacred."<<endl<<endl;petr=6;break;}
     break;
     case'n':
     case'N':
     cout<<endl<<endl<<"I am afraid that may be difficult. For our missions are sacred."<<endl<<endl;petr=6;
     break;
     }break;}
  if(petr==6){
   cout<<endl<<endl<<"Oh, hello. Miracles, I presume? Yes, I know."<<endl<<endl;shopper=1;shop();save();break;
break;
case'3':
break;
case'4':
  if(mage==1){}
  if(mage==0){cout<<endl<<endl<<"There's no one here."<<endl<<endl;}
break;
case'5':
break;
case'6':
break;
case'7':
break;
case'8':
break;
case'9':
break;
case'0':
cout<<endl<<endl<<"Who do you want to talk to?"<<endl<<endl;
cout<<"(1) ";if(lautrecz>=1){cout<<"Knight Lautrec of Karim";}cout<<endl;
cout<<"(2) ";if(strnz>=1){cout<<"Patches the Hyena";}cout<<endl;              
cout<<"(3) ";if(strg>=1){cout<<"Ingward";}cout<<endl;                         
cout<<"(4) ";if(srp1>=1){cout<<"King Seeker Frampt";}cout<<endl;              
cout<<"(0) Back"<<endl<<endl<<"input: ";
 cin >> chose;
  switch(chose){
  case'1':
  break;
  case'2':
  break;
  case'3':
  break;
  case'0':
  break;
  }
  
}

}
}

int main() {

crst=1;petr=1;mage=0;wise=0;pray=0;knht1=0;knht2=0;pyr=0;firek=1;
srp1=0;strnz=0;lautrecz=0;
x=9;//let's fucking go, go, go, go...
easteregg=1;
    newgame= 0;  item1=1;door1=0;soul1=0;humanity=0;
    lastbonf=0;  item2=1;door2=0;soul2=0;regen=0;
      world= 0;  item3=1;door3=0;soul3=0;
    undasyl= 1;  item4=1;door4=0;soul4=0;
asyldemdoor= 1;  item5=1;door5=0;bomb=0;
asyldemfight=1;  item6=1;door6=0;darkbomb=0;
       oscar=1;  item7=1;door7=0;herb=0;
     snuggly=0;  item8=1;door8=0;bless=0;
   firelink= 0;  item9=1;
    gotolord=0;
    undburg= 0;
  catacombs= 0;
petitelondo= 0;
     oppatt= 0;
      fight= 0;
      estus= 5;
   maxestus= 5;
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
  
                                           //save microarea
   if(world==0){ 
    ifstream sv_8 ("sv_8");
    if(sv_8.is_open())
    {
      while (getline(sv_8,catchsave));
      undasyl=stoi(catchsave)/95610;
    {
    sv_8.close();
   }}
  }  
                                           //save microarea
  if(world==1){
   ifstream sv_8 ("sv_8");
    if(sv_8.is_open())
    {
      while (getline(sv_8,catchsave));
      firelink=stoi(catchsave)/95610;
    {
    sv_8.close();
   }}
  }
   
   
   
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

   ifstream sv_48 ("sv_48");
    if(sv_48.is_open())
    {
     while (getline(sv_48,catchsave))
     item9=stoi(catchsave)/95610;
    {
    sv_48.close();
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
//-----------------------------------load-npcs-------------------------------------------------------
   ifstream sv_49 ("sv_49");
    if(sv_49.is_open())
    {
     while (getline(sv_49,catchsave))
     crst=stoi(catchsave)/95610;
    {
    sv_49.close();
   }}

   ifstream sv_50 ("sv_50");
    if(sv_50.is_open())
    {
     while (getline(sv_50,catchsave))
     petr=stoi(catchsave)/95610;
    {
    sv_50.close();
   }}

   ifstream sv_51 ("sv_51");
    if(sv_51.is_open())
    {
     while (getline(sv_51,catchsave))
     mage=stoi(catchsave)/95610;
    {
    sv_51.close();
   }}

   ifstream sv_52 ("sv_52");
    if(sv_52.is_open())
    {
     while (getline(sv_52,catchsave))
     wise=stoi(catchsave)/95610;
    {
    sv_52.close();
   }}

   ifstream sv_53 ("sv_53");
    if(sv_53.is_open())
    {
     while (getline(sv_53,catchsave))
     pray=stoi(catchsave)/95610;
    {
    sv_53.close();
   }}

   ifstream sv_54 ("sv_54");
    if(sv_54.is_open())
    {
     while (getline(sv_54,catchsave))
     knht1=stoi(catchsave)/95610;
    {
    sv_54.close();
   }}

   ifstream sv_55 ("sv_55");
    if(sv_55.is_open())
    {
     while (getline(sv_55,catchsave))
     knht2=stoi(catchsave)/95610;
    {
    sv_55.close();
   }}

   ifstream sv_56 ("sv_56");
    if(sv_56.is_open())
    {
     while (getline(sv_56,catchsave))
     pyr=stoi(catchsave)/95610;
    {
    sv_56.close();
   }}

   ifstream sv_57 ("sv_57");
    if(sv_57.is_open())
    {
     while (getline(sv_57,catchsave))
     strg=stoi(catchsave)/95610;
    {
    sv_57.close();
   }}

   ifstream sv_58 ("sv_58");
    if(sv_58.is_open())
    {
     while (getline(sv_58,catchsave))
     firek=stoi(catchsave)/95610;
    {
    sv_58.close();
   }}

   ifstream sv_59 ("sv_59");
    if(sv_59.is_open())
    {
     while (getline(sv_59,catchsave))
     srp1=stoi(catchsave)/95610;
    {
    sv_59.close();
   }}

   ifstream sv_60 ("sv_60");
    if(sv_60.is_open())
    {
     while (getline(sv_60,catchsave))
     strnz=stoi(catchsave)/95610;
    {
    sv_60.close();
   }}

    ifstream sv_61 ("sv_61");
    if(sv_61.is_open())
    {
     while (getline(sv_61,catchsave))
     lautrecz=stoi(catchsave)/95610;
    {
    sv_61.close();
   }}
  

//-----------------------------------load-npcs-------------------------------------------------------
if (newgame == 0) {
system("clear");
while(easteregg<=2) {   
easteregg=1;
cout<<endl<<"Dark Souls - Demakest:"<<endl<<"Prepare to Read Edition"<<endl<<endl<<"All rights reserved to From Software"<<endl<<"Software not intended for sale in respect of the original product"<<endl<<endl<<"Chose Your Character:"<<endl<<endl<<"Name: ";
   cin >> name; 
if(name=="sans"){system("clear");cout<<endl<<endl<<"nope."<<endl<<endl;easteregg=2;}
if(name=="Sans"){system("clear");cout<<endl<<endl<<"nope."<<endl<<endl;easteregg=2;}
if(name=="Gwyn"){system("clear");cout<<endl<<endl<<"You cannot."<<endl<<endl;easteregg=2;}
if(name=="gwyn"){system("clear");cout<<endl<<endl<<"You cannot."<<endl<<endl;easteregg=2;}
if(easteregg==1){easteregg=3;}
}
easteregg=0;
   cout<<"Your Character will be named "<<name<<endl<<endl<<"Chose your starting class:"<<endl<<endl<<
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
hp=maxhp;stm=maxstm;
};                                         //if (newgame==0)
while (x=9) {
stm=maxstm;
 if (world==0) {                           //undead asylum
   if (undasyl==1) {                       //cell
if(name=="piracy"){easteregg=1;cout<<endl<<endl<<"Happy Grinding."<<endl<<endl;}
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
      if(easteregg==1){happygrinding();save();}
      else{Hollow();save();}
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
      if(easteregg==1){happygrinding();save();}
      else{Hollow();save();}
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
     undasyl=4;
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
  <<endl<<endl;wait2();if(easteregg==1){happygrinding();save();if(undasyl==7){undasyl=8;}} else{Hollowarch();save();if(undasyl==7){undasyl=8;}}
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
   }    //if(undasyl==8)
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
     oscar=0;souls=souls+150;}
      else{cout<<endl<<endl<<"There's a corpse..."<<endl<<endl;}
     break;
     case 'w':
     case 'W':
     cout<<endl<<endl<<"You've been spotted by an hostile Hollow!"<<endl<<"The fight is about to begin."<<endl<<endl; wait2();
      if(easteregg==1){happygrinding();save();if(undasyl==9){undasyl=10;}}
      else{Hollow();save();if(undasyl==9){undasyl=10;}}
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
  }     //if (undasyl==9)
  if (undasyl==10) {                               //outer balcony
   save();
   cout << "'Undead Asylum'  'Outer Balcony'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"You've been spotted by an hostile Hollow."<<endl<<"The battle is about to begin.";
  if(easteregg==1){happygrinding();save();if(undasyl==10){undasyl=11;}}
      else{Hollow();save();if(undasyl==10){undasyl=11;}}
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
   if(undasyl==12){                              //snowy precipice
save();
cout << "'Undead Asylum'  'Snowy Precipice'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
  "(W) Take a look down from the higher peak"<<endl<<"(A) Explore the tiny rock entrance"<<endl<<"(S) Back to pots room"<<endl<<"(D) Explore small ruins"<<endl<<"(Q)"<<endl<<"(E) Inventory"
  <<endl<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case 'w':
     case 'W':
     system("clear");
     if(gotolord==0){
     cout<<"Only, in the ancient legends it is stated,";wait();system("clear");
     cout<<" that one day an undead shall be chosen to leave the undead asylum, in pilgrimage,";wait();system("clear");
     cout<<" to the land of ancient lords,";wait();system("clear");
     cout<<" Lordran.";wait();gotolord=1;
     }
     cout<<"A gigant crow appreared from down the peak!";wait();system("clear");
     if(snuggly>0){cout<<"Looks like the mother of the little crow from before.";wait();system("clear");}
     cout<<"It grabs you in its mouth and take you on a fly with them.";wait();system("clear");
     cout<<"Several hours later it finally lands"<<endl<<"and drops you right in front of a Bonfire.";wait();
     world=1;undasyl=0;firelink=1;
     break;
     case'a':
     case'A':
     if(item6==1){
     cout<<endl<<endl<<"You found a Soul of a Proud Knight on the ledge."<<endl<<endl;
     soul2=soul2=1;item6=0;}
     else{cout<<endl<<endl<<"You checked this ledge already."<<endl<<endl;humanity=99;}
     break;
     case's':
     case'S':
     undasyl=5;
     break;
     case'd':
     case'D':
     cout<<endl<<endl<<"(?)Cra! Cra! Give me soft, give me warm."<<endl<<endl;
     if(humanity>0){cout<<endl<<endl<<"Do you want to trade Humanity with the little crow?"<<endl<<"(y/n)"<<endl<<endl<<"input: ";
     cin>>chose;
        switch(chose){;
        case'y':
        case'Y':
        snuggly=rand()%1002;
         if(snuggly<300){soul2=soul2+1;cout<<endl<<endl<<"The crow handed you a Soul of a Proud Knight."<<endl<<endl;}
         if(snuggly<600){if(snuggly>300){bomb=bomb+1;cout<<endl<<endl<<"The crow handed you a Firebomb."<<endl<<endl;}}
         if(snuggly<900){if(snuggly>600){herb=herb+1;cout<<endl<<endl<<"The crow handed you a Green Blossom."<<endl<<endl;}}
         if(snuggly<1000){if(snuggly>900){bless=bless+1;cout<<endl<<endl<<"The crow handed you a Divine Blessing."<<endl<<endl;}}
         if(snuggly==1001){soul3=soul3+1;cout<<endl<<endl<<"The crow handed you a Soul of a Hero!"<<endl<<endl;}
         if(snuggly==1000){soul4=soul4+1;cout<<endl<<endl<<"The crow handed you a Soul of a Great Hero!"<<endl<<endl;}
         humanity=humanity-1;save();}
        break;
        case'n':
        case'N':
        break;
     }
     break;
     case 'e':
     case 'E':
     menu();
     break;
   }    //switch(chose)
  }     //if(undasyl==1)
  }     //if (world==0)
  
  if(world==1){
  gotolord=1;
  oscar=0;
  save();
    if(firelink==1){                               //firelink shrine
  cout << "'Firelink Shrine'"<<endl<<"Souls: "<<souls<<endl<<hp<<"HP    "<<stm<<"STM"
  <<endl<<endl<<"Select where to go:"<<endl<<
   "(W) Up the stairs on the precipice"<<endl<<
   "(A) Down the stairs in front of a burnt tree"<<endl<<
   "(S) At the lift up the stairs over the chapel"<<endl<<
   "(D) Over the monument to the graveyard"<<endl<<
   "(Q) Rest at the Bonfire"<<endl<<"(E) Inventory"<<endl<<"(B) Talk"<<endl<<
   "(U) Examine corpse on the well"<<endl<<
   "(I) Explore the depths of the ruins"<<endl<<
   "(O) Explore the heights of the ruins"<<endl<<
   "(P) At the center of the monument"<<endl<<
   "(X) Get back at the Undead Asylum"<<endl<<"input: ";
  cin >> chose;
     switch(chose) {
     case'x':
     case'X':
     world=0;firelink=0;undasyl=12;//this demo only
     break;
     case 'w':
     case 'W':
     
     break;
     case 'a':
     case 'A':
     
     break;
     case 's':
     case 'S':
     
     break;
     case 'd':
     case 'D':
     
     break;
     case 'q':
     case 'Q':
     bonfire();
     save();
     break;
     case'e':
     case'E':
     menu();
     save();
     break;
     case'b':
     case'B':
     roundtable();
     save();
     break;
     case'u':
     case'U':
      if(item7==1){
      cout<<endl<<endl<<"You found 3 Humanity on the corpse."<<endl<<endl;
      humanity=humanity+3;item7=0;save();break;
      }
      else{cout<<endl<<endl<<"You already robbed this corpse."<<endl<<endl;}
     break;
     case'i':
     case'I':
      if(item8==1){
      cout<<endl<<endl<<"You found a Firebomb hidden in a corner."<<endl<<endl;
      bomb=bomb+1;item8=0;save();break;
      }
      else{cout<<endl<<endl<<"There's nothing here."<<endl<<endl;}
     break;
     case'o':
     case'O':
      if(item9==1){
      cout<<endl<<endl<<"You found a Soul of a Proud Knight on the very edge of the monument."<<endl<<endl;
      soul2=soul2+1;item9=0;save();break;
      }
      else{cout<<endl<<endl<<"There's nothing here."<<endl<<endl;}
     break;
     case'p':
     case'P':
     cout<<endl<<endl<<"The moument is flooded... You hear a kind of snoring..."<<endl<<"'Hmgg... Hmgg...'"<<endl<<endl;
     break;
    }   //switch(chose)
   }    //if(firelink==1)
  }     //if (world=1)
 }      //while(x=9)
  return 0;
}       //int main()
