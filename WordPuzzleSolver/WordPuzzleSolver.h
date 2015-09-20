//
// Created by Jesse on 9/18/2015.
//

#ifndef CS263_WORD_PUZZLE_VECTOR_EXERCISE_H
#define CS263_WORD_PUZZLE_VECTOR_EXERCISE_H

#include <fstream>
#include <vector>
#include <string>

using namespace std;

class WordPuzzleSolver {
public:
    /* DO NOT CHANGE the signature of the public functions,
     * otherwise your program will not compile when it is run
     * from my script */
    WordPuzzleSolver();
    WordPuzzleSolver load (ifstream& __input_file_to_read_from__);
    void solve (const string& __algorithm_to_use__);
private:
    vector<vector<char>> the_grid;
    vector<string> the_words;
    /* You may add as many private variables and functions here */
    tuple<string, string> check_row();

    long check_col();
};


#endif