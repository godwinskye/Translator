#pragma once
#include "Token.h"

class PrintToken : public Token {
public:
	PrintToken(std::string lexeme);
};