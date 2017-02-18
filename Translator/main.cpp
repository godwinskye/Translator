#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include "Parser/Parser.h"
#include "Token/Token.h"
#include "CodeGenerator/CodeGenerator.h"

int main() {
	const static std::string inputfile("input.c");
	const static std::string outputfile("output.cpp");

	Parser parser;
	parser.Parse(inputfile);

	CodeGenerator Generator;
	Generator.Generate(parser.getContainer(), outputfile);
	return 0;
}
