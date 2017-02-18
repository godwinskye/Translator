#pragma once
#include <string>

class Token {
public:
	Token(std::string lexeme);
	std::string getLexeme();
	void setLexeme(std::string lexeme);
private:
	std::string Lexeme;
};