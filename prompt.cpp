#include "prompt.h"
#include <string>
#include <iostream>
#include <fstream>




void prompt::setText(std::string text){
if (text = "Name"){
`cout << "Welcome, Please enter your name" << endl;
    }   
else if (text = "Noun"){
    cout << "Please enter a noun" << endl;
    }
else if (text = "LNumber"){
    cout << "Please enter a Large Number" << endl;
    }

else if (text = "Title"){
    cout << "Please enter a Title (Sir, King, etc.)" << endl;
    }

else if (text = "Adjective"){

    cout << "Please enter an adjective" << endl;
    }
else if (text = "Adj2"){

    cout << "Please enter an adjective" << endl;
    }
else if (text = "Animal"){

    cout << "Please enter an animal" << endl;
    }
else if (text = "Animal2"){

    cout << "Please enter an animal" << endl;
    }
else if (text = "LPlace"){

    cout << "Please enter a large place" << endl;
    }
else if (text = "Number"){

    cout << "Please enter a number" << endl;
    }
else if (text = "Num2"){

    cout << "Please enter a number" << endl;
    }
else if (text = "MOT"){

    cout << "Please enter a measurement of time (Seconds, Hours, etc)" << endl;
    }
else if (text = "Adj3"){

    cout << "Please enter an adjective" << endl;
    }
else if (text = "Material"){

    cout << "Please enter a type of Material" << endl;
    }



}


std::string prompt::getStringResponse(){
cin >> word;

}

int prompt::getIntResponse(){
cin >> number;

}

int prompt::showIntResponse( ){
return number;
}

std::string prompt::showStringResponse(){
return word;
}
