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
//Etc

}

coutfile(){
//cout and save to file at same time.

}


