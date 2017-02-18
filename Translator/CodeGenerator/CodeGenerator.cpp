#include "CodeGenerator.h"

void CodeGenerator::Generate(std::vector<Token> Container, std::string outputfile) {
	outputstream.open(outputfile);

	for (auto& token : Container) {
		outputstream << token.getLexeme();
	}
	outputstream.close();
}
