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


//Start Story

Story();

return 0;
}


void Story(){


}
