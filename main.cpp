#include <iostream>
#include<string>
#include<vector>
#include "prompt.h"

using namespace std;

void Story();


int main (){
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

Story(vector<prompt> all);


return 0;
}


void Story(vector<prompt> all){

 "Welcome, NAME. Let us begin our adventure."
"A long time ago, in a land not so far away, you find yourself embarking on a journey to discover the missing treasure of PLACE. 
Said treasure has been missing for LARGE NUMBER years, but you- you have decided to embark on this perilous adventure to be the one 
heralded as TITLE NAME, finder of the ADJECTIVE treasure."
The first choice you come upon is whether to truly begin your journey today.
After all, you will be leaving behind all comfort, all amenities, all other necessities aside from food. In all honesty,
the journey may suck. So, would you rather stay home with all your comforts, or embark on the adventure of a lifetime? 

CHOICE: (L)EAVE/(S)TAY"
  cin >> One;
  
  if (one == "S" || one == "s"){
  cout << "Wonderful. You have decided that maybe fame fortune and all that rubbish is not for you. 
  You prefer a more relaxed life of simple comforts. So the treasure of PLACE stay exactly where they were, 
  hidden forever more- never to be found. Congratulations, you have come to the end of your journey."
  
  break;
  }
    
  else if (one =="L" || one == "l")
  {
     "Huzzah! You have chosen to embark on your ADJECTIVE 2 quest. In doing so, you’ve left behind your comforts in search of fame and 
      fortune. Packing up what you need, you set out at the dawn of a new day. Problem is, where did you set out to?
      CHOICE: (M)OUNTAINS/(F)OREST"
      cin >> two;
  }
      if (two == "M" || two =="m"){
        "Oh, the Mountains of PLACE. Home to THING and THING 2. A beautiful, but treacherous area to travel. 
        But that matters not, for you are determined! Setting off on your ADJECTIVE 3 steed,
        the mountain range grows closer and closer. Soon you are upon it. Demounting your steed, 
        you find yourself taking a little known footpath up the side of the mountain. Hours pass and you grow exhausted, 
        but you are far from the base of the mountain already. There’s no turning back! 
        Except, your path seems to come to a sudden drop. Barely stopping in time to keep from falling, you weigh your options. 
        You only see two ways of going about this: either you can chance a jump from your path to a small ledge,
        risking your life in the process- or you can turn around and go search for a new path. What shall it be?
        CHOICE: (J)UMP/(T)URN BACK"
        cin >> three;
          if (three=="J" || three=="j"){
            "Jump? Alright… Mustering up your courage, you take a running start and jump with all of your might!
            The ground is no longer beneath your feet, but rather a perilous drop. You grow closer and closer to the edge.
            You might make it! Seconds seem to stretch on to hours as you feel the wind rush pass you, as you feel your heart in
            your throat, as you see yourself just inches from grasping at the ledge. Only, it’s too late that you realize you have
            jumped too short. Unfortunately, you fall and hit the ground with exceeding force. You are dead. Congratulations, 
            you have come to the end of your journey." 
              break;
          }
          else if (three=="T" || three =="t"){
            "Rather than chance the jump, you turn around in search of a new pathway. And while you do come across a few pathways, 
            none lead much further than your first- all seeming to end in many sorts of treacherous ledges.
            Maybe this mountain is not for you. Maybe if you had jumped, you could have found what you were looking for.
            But alas, there is nothing to find here for you. So with heavy heart, you pack up your items and return to the comforts of
            home, never to find the treasure you are seeking. Congratulations, your journey has come to an end."
              break;
 
          }
      }
        else if (two=="F"||two=="f"){
          "Ah! The forest! A wondrous place of THING and THING 2. But don’t let that ward you off. Surely deep in its depths lies 
          the treasure you seek. Through the branches and brambles you stumble, steadfast in your search. But as hours roll on,
          nothing out of the norm has cropped up. Perhaps you are too late in your quest? Wait! What is that? As hope seemed thin, 
          you come upon an old decrepit crypt, seemingly untouched by anything but time! Could it be your treasure’s resting point?
          Or is it a trap, used to lure in travelers such as yourself? There’s no way to find out just by doing nothing!
          You must make your choice!
          CHOICE: (G)O IN/ (I)GNORE IT"
          cin >> four;       
        
          if (four == "G"||four == "g"){
            "Deciding to ignore all sense of terrible feelings towards entering a dead guy’s final resting place, 
            you bravely choose to enter it. Going in, you find the crypt much bigger than it seemed on the outside.
            In fact, one could say it looked like the inside of a LARGE PLACE. But, maybe just in size, and not content. 
            I mean, there is a coffin sitting right there in the middle of the crypt. Speaking of the coffin, it looks slightly ajar,
            as if someone has recently opened it. Perhaps you should do the same? Or do you have morals? Because normal people wouldn’t
            exactly go searching through a coffin no matter what. But can we truly call you normal, NAME?
	          CHOICE: OPEN (C)OFFIN/(L)OOK SOMEWHERE ELSE"
              cin >> five;
              if (five=="C"||five=="c"){
                "IF OPEN: Wow, okay, no morals. Got it. Anyway, you go ahead and push at the lid of the MATERIAL coffin, 
                only to come upon a skeleton. Wow, shocker. So in finding nothing but what was supposed to be within there,
                you turn to begin a search for any other sort of clue towards hidden items. Except, you don’t get the chance. See,
                in opening the coffin, you triggered a trap for grave robbers. From under your feet a hatch swings downward, 
                forcing you into a fall of undeterminable height. At the bottom of said height is a pit of spikes. You are dead.
                Congratulations, you have come to the end of your journey."
                  break;
              }

             else if (five=="L"||five=="l"){
              "Congratulations, you’re normal, with normal morals. Anyway, good job on the choice. Rather than desecrate the grave,
              you go and look around a few of the NUMBER vases sitting about the room. Accidentally knocking a few over in the process,
              you come upon a key hidden inside one of them. Looking around again, you easily spot a floor hatch you had not 
              seen before, just next to the coffin. Using the key, you open up the hatch to find a ladder. Quickly making your way
              down the ladder, you find yourself ending up within a large cave splitting off into two pathways. Which way will you go?
	            CHOICE: (R)IGHT/(L)EFT"
              cin >> six;
               if (six =="R"||six=="r"){
                 "Making the choice to go to the right, you find yourself walking for NUMBER …MEASUREMENT OF TIME. 
                 All seems lost, and you have finally began to feel the exhaustion of this whole journey. You begin to ask yourself,
                 was this journey truly worth it? In the end, all you find in the cave are bones of long gone animals and a few rocks.
                 Saddened by your lack of discovery, you return home empty handed, never to find what you truly wished to find.
                 Congratulations, your journey has come to an end."
                   break;

               }
               else if (six=="L"||six=="l"){
                 "Making the choice to go to the left, you find yourself walking for NUMBER …MEASUREMENT OF TIME. 
                 When all seems lost, and you have finally began to feel the exhaustion of this whole journey that you stumble 
                 upon a cavern of vast treasure! It’s the treasure of PLACE! You found it! All of your work paid off and soon
                 become revered across the land for your findings of such riches. You live the rest of your life in luxury, 
                 wanting for nothing. Eventually you die of old age, surrounded by your riches. Congratulations, your journey 
                 has come to an end."
                   break;

               }
             }
           }
        }
          else if (four == "I"||four=="i"){
          "You have decided that going in a spooky old crypt is taking too much of a chance. So rather than go inside to find what 
           lie within, you go around it and continue on your journey through the forest. Unfortunately, days go by, food grows scarce,
           and you have found nothing to fulfill your need for treasure outside a few lost gold coins on the ground. 
           Feeling there is no use going on, you pack up the remaining supplies you have left and return home empty handed.
           Congratulations, your journey has come to an end."
             break;
           
          }

     
}

coutfile(){
//cout and save to file at same time.

}


