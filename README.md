# C to C++ "Translator"/Parser Experiment

##A Parsing Toy

This project is created as a toy for me to explore parsing and just why/how compiler design works the way it does. The current goal is to replace
popular functions such as **printf()** with their "corresponding" C++ functions, which in this case would be something like **std::cout** from STL.
This is merely a parsing problem and has no need for anything other than a parser. However, I intend to introduce a valid Intermediate Representation
(IR) by implementing an AST. This is all merely to slowly "build" a *high-level-to-high-level compiler*, which would help me further my understanding
of compilers in general.

##TODO List

######Choose and implement an IR design, preferably simple

######Decide which functions are worth implementing in the parser before finalizing an AST

##Current features

######Ability to swap out **<stdio.h>** with **<iostream>** and **printf** with **std::cout**. These are implemented in a naive way though.
