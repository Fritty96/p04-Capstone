#include <iostream>
#include<string>
#include<vector>
#include "prompt.h"

using namespace std;

void Story(vector<string>, vector <string>&);
void coutfile(vector<string>);

int main (){
char choose;
vector<string>story;
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
ten.setText("Number");
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

prompt fourteen;
fourteen.setText("Material");
fourteen.setStringResponse();
all.push_back(fourteen);




//Start Story

	coutfile(story);
	break;

} 
while(choose=='Y'&& choose=='y');


return 0;
}


void Story(vector<prompt> all, vector <string> & story){
//Function to assign story to strings within a vector

story.resize(0);
string a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,one,two;
string Name, Noun, LNumber, Title, Adjective, Adj2, Animal, Animal2, LPlace, Number, Num2, MOT, Adj3, Material;
//change cout statements so that each line is a string. Change madlibs words to own strings.

//BEGINING

a = "A long time ago, in a land not so far away, you find yourself embarking on a journey to discover the missing treasure of";
story.push_back(a);

Noun = second.showStringResponse();
story.push_back(Noun);

b = ". Said treasure has been missing for ";
story.push_back(b);

LNumber = third.showIntResponse();
story.push_back(LNumber);

c = " years, but you- you have decided to embark on this perilous adventure to be the one heralded as";
story.push_back(c);

Title = fourth.showStringResponse(); 
story.push_back(Title);

Name = first.showStringResponse();
story.push_back;

d = ", finder of the";
story.push_back(d);

Adjective = fifth.showStringResponse();
story.push_back(Adjective);

e =" treasure. The first choice you come upon is whether to truly begin your journey today. After all, you will be leaving behind all comfort, all amenities, all other necessities aside from food. In all honesty, the journey may suck. So, would you rather stay home with all your comforts, or embark on the adventure of a lifetime?";
story.push_back(e);

//cout << "CHOICE: (L)EAVE/(S)TAY" << endl;
 // cin >> One;
  

//STAY CHOICE
f = "Wonderful. You have decided that maybe fame fortune and all that rubbish is not for you. You prefer a more relaxed life of simple comforts. So the treasure of ";
story.push_back(f);

//Noun 

g = " stay exactly where they were, hidden forever more- never to be found. Congratulations, you have come to the end of your journey.";
story.push_back(g);
  

//LEAVE CHOICE
h = "Huzzah! You have chosen to embark on your ";
story.push_back(h);

Adj2 = sixth.showStringResponse();
story.push_back(Adj2);

i = " quest. In doing so, you’ve left behind your comforts in search of fame and fortune. Packing up what you need, you set out at the dawn of a new day. Problem is, where did you set out to?";
story.push_back(i);

//     cout << " CHOICE: (M)OUNTAINS/(F)OREST" << endl;
  //    cin >> two;


//MOUNTAIN CHOICE
j = "Oh, the Mountains of ";
story.push_back(j);

//       << Noun 

k = ". Home to ";
story.push_back(k);

Animal = seven.showStringResponse();
story.push_back(Animal);

l =  ". A beautiful, but treacherous area to travel. But that matters not, for you are determined! Setting off on your ";
story.push_back(l);

Adj3 = thirteen.showStringResponse();
story.push_back(Adj3);

m = " steed, the mountain range grows closer and closer. Soon you are upon it. Demounting your steed, you find yourself taking a little known footpath up the side of the mountain. Hours pass and you grow exhausted, but you are far from the base of the mountain already. There’s no turning back! Except, your path seems to come to a sudden drop. Barely stopping in time to keep from falling, you weigh your options. You only see two ways of going about this: either you can chance a jump from your path to a small ledge,risking your life in the process- or you can turn around and go search for a new path. What shall it be? ";
story.push_back(m);

        //cout <<"CHOICE: (J)UMP/(T)URN BACK" <<endl;
        //cin >> three;

//JUMP CHOICE
n = "Jump? Alright… Mustering up your courage, you take a running start and jump with all of your might! The ground is no longer beneath your feet, but rather a perilous drop. You grow closer and closer to the edge. You might make it! Seconds seem to stretch on to hours as you feel the wind rush pass you, as you feel your heart in your throat, as you see yourself just inches from grasping at the ledge. Only, it’s too late that you realize you have jumped too short. Unfortunately, you fall and hit the ground with exceeding force. You are dead. Congratulations, you have come to the end of your journey.";
story.push_back(n);
 
  
//TURN BACK CHOICE   
o = "Rather than chance the jump, you turn around in search of a new pathway. And while you do come across a few pathways, none lead much further than your first- all seeming to end in many sorts of treacherous ledges. Maybe this mountain is not for you. Maybe if you had jumped, you could have found what you were looking for. But alas, there is nothing to find here for you. So with heavy heart, you pack up your items and return to the comforts of home, never to find the treasure you are seeking. Congratulations, your journey has come to an end.";
story.push_back(o);
              
   
//FOREST CHOICE
p = "Ah! The forest! A wondrous place of ";
story.push_back(p);
          
Animal2 = eight.showStringResponse();
story.push_back(Animal2);

q = ". But don’t let that ward you off. Surely deep in its depths lies the treasure you seek. Through the branches and brambles you stumble, steadfast in your search. But as hours roll on, nothing out of the norm has cropped up. Perhaps you are too late in your quest? Wait! What is that? As hope seemed thin, you come upon an old decrepit crypt, seemingly untouched by anything but time! Could it be your treasure’s resting point? Or is it a trap, used to lure in travelers such as yourself? There’s no way to find out just by doing nothing! You must make your choice!";
story.push_back(q);
//          cout << "CHOICE: (G)O IN/ (I)GNORE IT"<< endl;
  //        cin >> four;       
        
          
//GO IN
r = "Deciding to ignore all sense of terrible feelings towards entering a dead guy’s final resting place, you bravely choose to enter it. Going in, you find the crypt much bigger than it seemed on the outside. In fact, one could say it looked like the inside of a ";
story.push_back(r);

LPlace = nine.showStringResponse();
story.push_back(LPlace);

s = " . But, maybe just in size, and not content. I mean, there is a coffin sitting right there in the middle of the crypt. Speaking of the coffin, it looks slightly ajar, as if someone has recently opened it. Perhaps you should do the same? Or do you have morals? Because normal people wouldn’t exactly go searching through a coffin no matter what. But can we truly call you normal, ";
story.push_back(s);

//  <<Name<<"?" <<endl;

// cout<< "CHOICE: OPEN (C)OFFIN/(L)OOK SOMEWHERE ELSE"<<endl;
//     cin >> five;
 
//OPEN COFFIN CHOICE
t = "Wow, okay, no morals. Got it. Anyway, you go ahead and push at the lid of the ";
story.push_back(t);

Material = fourteen.showStringResponse();
story.push_back(Material);

u = " coffin, only to come upon a skeleton. Wow, shocker. So in finding nothing but what was supposed to be within there, you turn to begin a search for any other sort of clue towards hidden items. Except, you don’t get the chance. See, in opening the coffin, you triggered a trap for grave robbers. From under your feet a hatch swings downward, forcing you into a fall of undeterminable height. At the bottom of said height is a pit of spikes. You are dead. Congratulations, you have come to the end of your journey.";
story.push_back(u);
                
            

   
//LOOK ELSEWHERE CHOICE              
v = "Congratulations, you’re normal, with normal morals. Anyway, good job on the choice. Rather than desecrate the grave, you go and look around a few of the ";
story.push_back(v);

Number= ten.showIntResponse();
story.push_back(Number);

w = " vases sitting about the room. Accidentally knocking a few over in the process, you come upon a key hidden inside one of them. Looking around again, you easily spot a floor hatch you had not seen before, just next to the coffin. Using the key, you open up the hatch to find a ladder. Quickly making your way down the ladder, you find yourself ending up within a large cave splitting off into two pathways. Which way will you go?";
story.push_back(w);

//          << "CHOICE: (R)IGHT/(L)EFT" << endl;
  //            cin >> six;

                 //RIGHT CHOICE
x = "Making the choice to go to the right, you find yourself walking for ";
story.push_back(x);

Num2 = eleven.showIntResponse();
story.push_back(Num2);

MOT = twelve.showStringResponse();
story.push_back(MOT);

y = "All seems lost, and you have finally began to feel the exhaustion of this whole journey. You begin to ask yourself, was this journey truly worth it? In the end, all you find in the cave are bones of long gone animals and a few rocks. Saddened by your lack of discovery, you return home empty handed, never to find what you truly wished to find. Congratulations, your journey has come to an end.";
story.push_back(y);
                 

//LEFT CHOICE
z = "Making the choice to go to the left, you find yourself walking for ";
story.push_back(z);
                 //<< Num2 << " "
                 //<< MOT << "."<<endl
one = "When all seems lost, and you have finally began to feel the exhaustion of this whole journey that you stumble upon a cavern of vast treasure! It’s the treasure! You found it! All of your work paid off and soon become revered across the land for your findings of such riches. You live the rest of your life in luxury, wanting for nothing. Eventually you die of old age, surrounded by your riches. Congratulations, your journey has come to an end.";
story.push_back(one);
           


//IGNORE CRYPT
two = "You have decided that going in a spooky old crypt is taking too much of a chance. So rather than go inside to find what lie within, you go around it and continue on your journey through the forest. Unfortunately, days go by, food grows scarce, and you have found nothing to fulfill your need for treasure outside a few lost gold coins on the ground. Feeling there is no use going on, you pack up the remaining supplies you have left and return home empty handed. Congratulations, your journey has come to an end.";
story.push_back(two);
          
           
        

     
}

void coutfile(vector <string> story){
//cout and save to file at same time.
	char one;
	char two;
	char three;
	char four;
	char five;
	char six;

cout<< "Welcome," << Name << ". Let us begin our adventure." << endl;

//begin
cout<< a << Noun << b << LNumber << c << Title << Name << d << Adjective << e << endl;
cout << "CHOICE: (L)EAVE/(S)TAY" << endl;
cin >> One;

ofstream myfile;
myfile.open("Story.txt");
myfile << a << Noun << b << LNumber << c << Title << Name << d << Adjective << e << endl;
myfile.close();

  if (one == 'S' && one == 's'){
	  //stay
   cout << f << Noun << g << endl;
  
    ofstream myfile;
    myfile.open("Story.txt");
    myfile << f << Noun << g << endl;
    myfile.close();


  break;
  }
    
  else if (one =='L' && one == 'l')
  {
	  //leave
     cout << h << Adj2 << i << endl;
     
     ofstream myfile;
     myfile.open("Story.txt");
     myfile << h << Adj2 << i << endl;
     myfile.close();


     cout << " CHOICE: (M)OUNTAINS/(F)OREST" << endl;
      cin >> two;
  }
      if (two == 'M' && two =='m'){
	      //mountain 
       cout << j << Noun << k << Animal << l << Adj3 << m << endl;
       
       ofstream myfile;
       myfile.open("Story.txt");
       myfile << j << Noun << k << Animal << l << Adj3 << m << endl;
       myfile.close();
       
       cout <<"CHOICE: (J)UMP/(T)URN BACK" <<endl;
        cin >> three;
	      
          if (three=='J' && three=='j'){
		  //jump
            cout<< n << endl;

            ofstream myfile;
            myfile.open("Story.txt");
            myfile << n << endl;
            myfile.close();
            
            break;
          }
          else if (three=='T' && three =='t'){
		  //turn around mountain
            cout<< o << endl;

            ofstream myfile;
            myfile.open("Story.txt");
            myfile << o << endl;
            myfile.close();  
            
            break;
 
          }
      }
        else if (two=='F'&& two=='f'){
		//forest
          cout << p << Animal2 << q << endl;
          
          ofstream myfile;
          myfile.open("Story.txt");
          myfile << p << Animal2 << q << endl;
          myfile.close();
          
          cout << "CHOICE: (G)O IN/ (I)GNORE IT"<< endl;
          cin >> four;       
        
          if (four == 'G'&&four == 'g'){
		  //goincrypt
            cout<< r << LPlace << s << Name << endl;
            
            ofstream myfile;
            myfile.open("Story.txt");
            myfile << r << LPlace << s << Name << endl;
            myfile.close();

            cout<< "CHOICE: OPEN (C)OFFIN/(L)OOK SOMEWHERE ELSE"<<endl;
              cin >> five;
		  
              if (five=='C'&&five=='c'){
		      //COffin
                cout<< t << Material << u << endl;
                
                ofstream myfile;
                myfile.open("Story.txt");
                myfile << t << Material << u << endl;
                myfile.close();

                break;
              }

             else if (five=='L'&&five=='l'){
		//Look around room
              cout << v << Number << w << endl;
		      
              ofstream myfile;
              myfile.open("Story.txt");
              myfile << v << Number << w << endl;
              myfile.close();

              cout << "Choice: (R)ight or (L)eft?" << endl;
              cin >> six;
		     
               if (six =="R"&&six=="r"){
                 //Right
        		 cout << x << Num2 << MOT << y << endl;
                   
                 ofstream myfile;
                 myfile.open("Story.txt");
                 myfile << x << Num2 << MOT << y << endl;
                 myfile.close();
                   break;

               }
               else if (six=="L"&&six=="l"){
                 //Left
		          cout<< z << Num2 << MOT << One << endl;
                  
                  ofstream myfile;
                  myfile.open("Story.txt");
                  myfile << z << Num2 << MOT << One << endl;
                  myfile.close();

                  break;

               }
             }
           }
        }
          else if (four == "I"&&four=="i"){
		  //ignore
            cout << two << endl;
           
            ofstream myfile;
            myfile.open("Story.txt");
            myfile << two << endl;
            myfile.close();

            break;
           
          }

     
}
	
	
}


