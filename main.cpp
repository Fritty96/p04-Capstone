#include <iostream>
#include<string>
#include<vector>
#include "prompt.h"

using namespace std;

void Story();


int main (){
char choose;
cout<< "Welcome, Would you like to Play Adventure Madlibs? (Y/N)"<<endl;
cin << choose;

do{
//Retrieve and Store User Words
vector <prompt> all;
prompt first;
first.setText("Name");
first.getStringResponse();
all.push_back(first);

//repeat
prompt second;
second.setText("Noun");
second.getStringResponse();
all.push_back(second);

prompt third;
third.setText("LNumber");
third.getIntResponse();
all.push_back(third);

prompt fourth;
fourth.setText("Title");
fourth.getStringResponse();
all.push_back(fourth);

prompt fifth;
fifth.setText("Adjective");
fifth.setStringResponse();
all.push_back(fifth);

prompt sixth;
sixth.setText("Adj2");
sixth.setStringResponse();
all.push_back(sixth);


prompt seven;
seven.setText("Animal");
seven.setStringResponse();
all.push_back(seven);


prompt eight;
eight.setText("Animal2");
eight.setStringResponse();
all.push_back(eight);


prompt nine;
nine.setText("LPlace");
nine.setStringResponse();
all.push_back(nine);


prompt ten;
tem.setText("Number");
ten.setIntResponse();
all.push_back(ten);


prompt eleven;
eleven.setText("Num2");
eleven.setIntResponse();
all.push_back(eleven);


prompt twelve;
twelve.setText("MOT");
twelve.setStringResponse();
all.push_back(twelve);


prompt thirteen;
thirteen.setText("Adj3");
thirteen.setStringResponse();
all.push_back(thirteen);





//Start Story

Story(all);
	
} 
while(choose=='Y'&& choose=='y');


return 0;
}


void Story(vector<prompt> all){
string a,b,c;
//change cout statements so that each line is a string. Change madlibs words to own strings.

cout<< "A long time ago, in a land not so far away, you find yourself embarking on a journey to discover the missing treasure of"  <<
Noun << "." <<endl; 
cout << " Said treasure has been missing for "<<LNumber<<" years, but you- you have decided to embark on this perilous adventure to be the one" 
<< endl << "heralded as" << Title << Name <<", finder of the" << Adjective <<" treasure." <<endl;
cout << "The first choice you come upon is whether to truly begin your journey today." <<endl
<< "After all, you will be leaving behind all comfort, all amenities, all other necessities aside from food. In all honesty," << endl
<< "the journey may suck. So, would you rather stay home with all your comforts, or embark on the adventure of a lifetime? " <<endl;

cout << "CHOICE: (L)EAVE/(S)TAY" << endl;
  cin >> One;
  
  if (one == 'S' && one == 's'){
  cout << "Wonderful. You have decided that maybe fame fortune and all that rubbish is not for you." << endl
  << "You prefer a more relaxed life of simple comforts. So the treasure of " << Noun << " stay exactly where they were, << endl <<
  "hidden forever more- never to be found. Congratulations, you have come to the end of your journey." << endl;
  
  break;
  }
    
  else if (one =='L' && one == 'l')
  {
     cout << "Huzzah! You have chosen to embark on your " << Adj2 <<" quest. In doing so, you’ve left behind your comforts "<<endl
     << "in search of fame and fortune. Packing up what you need, you set out at the dawn of a new day. Problem is, where did you set out to?"
     << endl;
     cout << " CHOICE: (M)OUNTAINS/(F)OREST" << endl;
      cin >> two;
  }
      if (two == 'M' && two =='m'){
       cout << "Oh, the Mountains of "<< Noun <<". Home to "<<Animal<<" and "<<Animal2<< ". A beautiful, but treacherous area to travel.<<endl 
        <<" But that matters not, for you are determined! Setting off on your "<<Adj3<<" steed," << endl
        << "the mountain range grows closer and closer. Soon you are upon it. Demounting your steed, you find yourself "<< endl<< 
	<< "taking a little known footpath up the side of the mountain. Hours pass and you grow exhausted, but you are far "<<endl<<
	<<"from the base of the mountain already. There’s no turning back! Except, your path seems to come to a sudden drop."<<endl<<
	"Barely stopping in time to keep from falling, you weigh your options. You only see two ways of going about this: "<<endl<<
	"either you can chance a jump from your path to a small ledge,risking your life in the process- or you can turn "<<endl<<
	"around and go search for a new path. What shall it be? "<<endl;
        cout <<"CHOICE: (J)UMP/(T)URN BACK" <<endl;
        cin >> three;
          if (three=='J' && three=='j'){
            cout<< "Jump? Alright… Mustering up your courage, you take a running start and jump with all of your might!" <<endl<<
            "The ground is no longer beneath your feet, but rather a perilous drop. You grow closer and closer to the edge."<<endl<<
            "You might make it! Seconds seem to stretch on to hours as you feel the wind rush pass you, as you feel your heart in"<<endl<<
            " your throat, as you see yourself just inches from grasping at the ledge. Only, it’s too late that you realize you have"<<endl<<
            " jumped too short. Unfortunately, you fall and hit the ground with exceeding force. You are dead. Congratulations, "<< endl<<
            "you have come to the end of your journey." <<endl;
              break;
          }
          else if (three=='T' && three =='t'){
            cout<< "Rather than chance the jump, you turn around in search of a new pathway. And while you do come across a few pathways, "
            <<endl<< "none lead much further than your first- all seeming to end in many sorts of treacherous ledges." <<endl<<
            "Maybe this mountain is not for you. Maybe if you had jumped, you could have found what you were looking for."<<endl<<
            " But alas, there is nothing to find here for you. So with heavy heart, you pack up your items and return to the comforts of"
            <<endl<< " home, never to find the treasure you are seeking. Congratulations, your journey has come to an end." <<endl;
              break;
 
          }
      }
        else if (two=='F' && two=='f'){
          cout << "Ah! The forest! A wondrous place of "<<Animal<<" and "<<Animal2<<". But don’t let that ward you off. Surely deep in" 
          <<endl<< " its depths lies the treasure you seek. Through the branches and brambles you stumble, steadfast in your search."
	  <<endl<<" But as hours roll on, nothing out of the norm has cropped up. Perhaps you are too late in your quest? Wait!"
	  <<endl<<" What is that? As hope seemed thin, you come upon an old decrepit crypt, seemingly untouched by anything but time!"
	  <<endl<<" Could it be your treasure’s resting point?Or is it a trap, used to lure in travelers such as yourself?"
	  <<endl<<" There’s no way to find out just by doing nothing! You must make your choice!" << endl;
          cout << "CHOICE: (G)O IN/ (I)GNORE IT"<< endl;
          cin >> four;       
        
          if (four == 'G'&& four == 'g'){
            "Deciding to ignore all sense of terrible feelings towards entering a dead guy’s final resting place, " <<endl<<
            "you bravely choose to enter it. Going in, you find the crypt much bigger than it seemed on the outside." <<endl<<
            " In fact, one could say it looked like the inside of a "<< LPlace <<" . But, maybe just in size, and not content."<<endl<<
            " I mean, there is a coffin sitting right there in the middle of the crypt. Speaking of the coffin, it looks slightly ajar, "
            <<endl<< "as if someone has recently opened it. Perhaps you should do the same? Or do you have morals? "
	    <<endl<< "Because normal people wouldn’t exactly go searching through a coffin no matter what. " <<endl<<
	    "But can we truly call you normal, "<<Name<<"?" <<endl;
	    cout<< "CHOICE: OPEN (C)OFFIN/(L)OOK SOMEWHERE ELSE"<<endl;
              cin >> five;
              if (five=='C'&& five=='c'){
                cout<< "Wow, okay, no morals. Got it. Anyway, you go ahead and push at the lid of the "<< Material <<" coffin,"<<endl<<
                " only to come upon a skeleton. Wow, shocker. So in finding nothing but what was supposed to be within there,"<<endl<<
                " you turn to begin a search for any other sort of clue towards hidden items. Except, you don’t get the chance. "<<endl<<
                " See, in opening the coffin, you triggered a trap for grave robbers. From under your feet a hatch swings downward,"<<endl<<
                " forcing you into a fall of undeterminable height. At the bottom of said height is a pit of spikes. You are dead." <<endl<<
                " Congratulations, you have come to the end of your journey." <<endl;
                  break;
              }

             else if (five=='L'&& five=='l'){
              cout << "Congratulations, you’re normal, with normal morals. Anyway, good job on the choice. Rather than desecrate the grave,"
              <<endl<<" you go and look around a few of the "<<Number<<" vases sitting about the room. Accidentally knocking a few over in the "
              <<endl<<" process, you come upon a key hidden inside one of them. Looking around again, you easily spot a floor hatch "
              <<endl<<" you had not seen before, just next to the coffin. Using the key, you open up the hatch to find a ladder. "
              <<endl<<" Quickly making your way down the ladder, you find yourself ending up within a large cave splitting off into "
	      <<endl<< "two pathways. Which way will you go?" <<endl << "CHOICE: (R)IGHT/(L)EFT" << endl;
              cin >> six;
               if (six =="R"&&six=="r"){
                 cout <<"Making the choice to go to the right, you find yourself walking for "<< Num2 << MOT<<"."<<endl<< 
                 "All seems lost, and you have finally began to feel the exhaustion of this whole journey. You begin to ask yourself, "
                 <<endl<< " was this journey truly worth it? In the end, all you find in the cave are bones of long gone animals and "
                 <<endl<<" a few rocks. Saddened by your lack of discovery, you return home empty handed, never to find what you" 
                 <<endl<<" truly wished to find. Congratulations, your journey has come to an end." <<endl;
                   break;

               }
               else if (six=="L"&&six=="l"){
                 "Making the choice to go to the left, you find yourself walking for "<< Num2 << " "<< MOT << "."<<endl
                 << "When all seems lost, and you have finally began to feel the exhaustion of this whole journey that you stumble " 
                 <<endl<< "upon a cavern of vast treasure! It’s the treasure of "<<PLACE<<"! You found it! All of your work paid off and soon"
                 <<endl<<" become revered across the land for your findings of such riches. You live the rest of your life in luxury," 
                 <<endl<<" wanting for nothing. Eventually you die of old age, surrounded by your riches. Congratulations, your journey "
                 <<endl<< "has come to an end."<<endl;
                   break;

               }
             }
           }
        }
          else if (four == "I"&&four=="i"){
          cout <<"You have decided that going in a spooky old crypt is taking too much of a chance. So rather than go inside to find what "
           <<endl<< "lie within, you go around it and continue on your journey through the forest. Unfortunately, days go by, food grows scarce, "
           <<endl<<" and you have found nothing to fulfill your need for treasure outside a few lost gold coins on the ground. "
           <<endl<<" Feeling there is no use going on, you pack up the remaining supplies you have left and return home empty handed."
           <<endl<< "Congratulations, your journey has come to an end." <<endl;
             break;
           
          }

     
}

coutfile(){
//cout and save to file at same time.
	char one;
	char two;
	char three;
	char four;
	char five;
	char six;

cout<< "Welcome," << Name << ". Let us begin our adventure." << endl;

//begin
cout<<endl;

cout << "CHOICE: (L)EAVE/(S)TAY" << endl;
cin >> One;
  
  if (one == 'S' || one == 's'){
	  //stay
  cout << endl;
  
  break;
  }
    
  else if (one =='L' || one == 'l')
  {
	  //leave
     cout << endl;
     cout << " CHOICE: (M)OUNTAINS/(F)OREST" << endl;
      cin >> two;
  }
      if (two == 'M' || two =='m'){
	      //mountain 
       cout << endl;
        cout <<"CHOICE: (J)UMP/(T)URN BACK" <<endl;
        cin >> three;
	      
          if (three=='J' || three=='j'){
		  //jump
            cout<<endl;
              break;
          }
          else if (three=='T' || three =='t'){
		  //turn around mountain
            cout<<endl;
              break;
 
          }
      }
        else if (two=='F'||two=='f'){
		//forest
          cout <<  endl;
          cout << "CHOICE: (G)O IN/ (I)GNORE IT"<< endl;
          cin >> four;       
        
          if (four == 'G'||four == 'g'){
		  //goincrypt
            cout<< ;
	    cout<< "CHOICE: OPEN (C)OFFIN/(L)OOK SOMEWHERE ELSE"<<endl;
              cin >> five;
		  
              if (five=='C'||five=='c'){
		      //COffin
                cout<< 
                  break;
              }

             else if (five=='L'||five=='l'){
		//Look around room
              cout << //story 
		     cout << //choice
		     ;
              cin >> six;
		     
               if (six =="R"||six=="r"){
                 //Right
		 cout <<
                   break;

               }
               else if (six=="L"||six=="l"){
                 //Left
		 cout<<
                   break;

               }
             }
           }
        }
          else if (four == "I"||four=="i"){
		  //ignore
          cout <<;
             break;
           
          }

     
}
	
	
}


