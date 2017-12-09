# INPUT/OUTPUT
[main.cpp lines 14-15, 313- ](/main.cpp) [prompt.cpp lines 11-62](/prompt.cpp)
Input was needed to gather madlibs information and choices, while output was needed to tell the overall story to the user.
## CONTROL FLOW
[prompt.cpp lines 10-60](/prompt.cpp) [main.cpp lines 324, 337, 351, 363, 374, 387, 399, 411, 423, 435, 446](/main.cpp)
In order to go down different pathways within the story and in order to gather all information easily, if and if else statemets were widely used.
### ITERATION
[main.cpp lines 17, 107](/main.cpp) 

#### DATA STRUCTURE
[main.cpp lines 13, 19](/main.cpp)
Two vectors of strings were used- one to store user information, and another to store story information to be called upon later.
##### FUNCTION
[main.cpp lines 8,9,113,303](/main.cpp) [prompt.cpp lines 70,76, 81, 85] (/prompt.cpp)
I created multiple functions in order to complete tasks such as storing information multiple times and reading and saving the story. In order to pass in a vector to heavily edit, the story function uses pass by reference. 
###### FILE IO
[main.cpp lines 320-323](/main.cpp)
I created a file input in order to save the story so that the user could read their adventure at a later date.
####### CLASS
[prompt.h lines 1-20](/prompt.h)
I used a class thinking that it was the best way to prompt the user many different ways, recieve a user's multiple answers to store, and retrieving the values without bogging down main.cpp with repetitive code. 
