#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>
#include <sstream>

using namespace std;

int main() {
    map<string, int> wordCount;
    map<string, string> wordLines;
    string text;
    ifstream fd("input.txt");
    string line;
    int lineNum = 1;
    while (getline(fd, line)) {
        text += line + "\n";
        line = regex_replace(line, regex("[^\\w\\s]"), "");//pakeicia visus ne zodziu simbolius
        transform(line.begin(), line.end(), line.begin(), ::tolower);//pakeicia i mazasias raides
        stringstream ss(line); //pakeicia i stringstream, kad butu galima padalinti zodzius
        string word;
        while (ss >> word) {//is ss paimamas zodis
            wordCount[word]++;//suranda ar toks zodis jau paminetas, jeigu paminetas prideda skaiciu
            wordLines[word] += to_string(lineNum) + " ";
        }
        lineNum++;
    }
    fd.close();
    
    //Viska isveda:
    ofstream fr("output.txt");
    for (auto const& pair : wordCount) {// Pereina per kiekvieną wordCount elementą
        if (pair.second > 1) {
            fr << pair.first << ": " << pair.second << " [lines: " << wordLines[pair.first] << "]" << endl;
        }
    }
    //iesko nuorodu
    regex urlRegex("(https?://)?(www\\.)?\\S+(\\.(com|lt|org|net|edu))?");
    smatch match;
    while (regex_search(text, match, urlRegex)) {
        fr << match.str() << endl;
        text = match.suffix();
    }
    fr.close();
    return 0;
}
