#include "PrintToken.h"

PrintToken::PrintToken(std::string lexeme) : Token(lexeme) {
	std::string message;
	bool insideBracket = false;
	for (auto& character : lexeme) {
		if (character == ')') {
			break;
		}
		if (insideBracket) {
			message = message + character;
		}
		if (character == '(') {
			insideBracket = true;
		}
	}
	message = "\tstd::cout << " + message + ";" + lexeme.back();
	this->setLexeme(message);
}
