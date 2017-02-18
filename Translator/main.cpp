#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

int main() {
	std::string contents;
	std::string totalcontents;
	std::ifstream inputfile("input.c");

	if (inputfile.is_open()) {
		while (std::getline(inputfile, contents)) {
			totalcontents = totalcontents + contents + "\n";
		}
	}
	else {
		try {
			throw std::runtime_error("input.c file not found");
		}
		catch (std::runtime_error &error) {
			std::cerr << error.what() << std::endl;
			throw;
		}
	}

	//Output file
	std::ofstream outputfile;
	outputfile.open("output.cpp");
	outputfile << totalcontents;
	outputfile.close();

	std::cout << contents.max_size() << std::endl;
	system("pause");
	return 0;
}