#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "../Token/Token.h"

class CodeGenerator {
public:
	void Generate(std::vector<Token> Container, std::string outputfile);

	std::ofstream outputstream;
};