#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "WordPuzzleSolver.h"

using namespace std;

const string INPUTFILE = "C:\\Users\\Jesse\\ClionProjects\\CIS-353-HW1\\WordPuzzleSolver\\test.txt";

// Windows users may want to use one of the following paths
//const string INPUTFILE = "C:\\Customize\\it\\to\\your\\own\\path.txt"
//const string INPUTFILE = "C:/Customize/it/to/your/own/path.txt"
//
int main() {
    ifstream puzzle_input (INPUTFILE);

    WordPuzzleSolver one;

    one.load (puzzle_input);

    puzzle_input.close();

//    one.solve ("triple");
    one.solve ("quadruple");   // or solve using the other technique
    return 0;
}