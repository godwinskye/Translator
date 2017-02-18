#include "Token.h"

Token::Token(std::string lexeme) {
	setLexeme(lexeme);
}

std::string Token::getLexeme() {
	return Lexeme;
}

void Token::setLexeme(std::string lexeme) {
	Lexeme = lexeme;
}
