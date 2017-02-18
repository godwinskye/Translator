#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "../Token/Token.h"

#define ALTER

class Parser {
public:
	void Parse(std::string filename);
	void MakeAllTokens();
	void MakeToken(std::string &temporary);
	void appendSubsequentValidCharacters(ALTER std::string &temporary);

	std::vector<Token> getContainer();

	char arbchar;
	std::ifstream inputstream;
private:
	std::vector<Token> Container;
	std::string temporary;
};