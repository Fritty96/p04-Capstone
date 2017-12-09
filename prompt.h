#ifindef _PROMPT_H_
#define _PROMPT_H_

#include <string>
#include <iostream>

class prompt {
public:
void setText(string);
int getIntResponse();
std:: string getStringResponse();
int showIntResponse();
std:: string showStringResponse();
private:
int number();
std:: string word;
std:: string text; //change to not functions
};

#endif
