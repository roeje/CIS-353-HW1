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
    void load (ifstream& __input_file_to_read_from__);
    void solve (const string& __algorithm_to_use__);
    void check_row(int row, int&col, string& word);
    void check_col(int& row, int col, string& word);
    void quad();
private:
    vector<vector<char>> the_grid;
    vector<string> the_words;
    /* You may add as many private variables and functions here */
};


#endif