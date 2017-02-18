#include "Parser.h"
#include <iostream>

void Parser::Parse(std::string filename) {
	try {
		ALTER inputstream.open(filename, std::ifstream::in);
	}
	catch (std::ios_base::failure &error) {
		std::cerr << "File not found" << std::endl;
		std::cerr << "Error message: " << error.what() << std::endl;
		throw;
	}
	MakeAllTokens();
}

void Parser::MakeAllTokens() {
	while (inputstream.good()) {
		arbchar = inputstream.get();
		temporary = arbchar;
		MakeToken(temporary);
	}
}

void Parser::MakeToken(ALTER std::string &temporary) {		//temporary contains first character
	appendSubsequentValidCharacters(temporary);
	Token token(temporary);
	Container.push_back(token);
}

//Function returns valid token characters along with the FIRST space/newline AFTER the token
void Parser::appendSubsequentValidCharacters(ALTER std::string &temporary) {
	while (inputstream.good()) {
		arbchar = inputstream.get();
		if (arbchar == '\n' || arbchar == ' ') {
			temporary = temporary + arbchar;
			break;
		}
		temporary = temporary + arbchar;
	}
}

std::vector<Token> Parser::getContainer() {
	return Container;
}
