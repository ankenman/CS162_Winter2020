#include <iostream>
#include <fstream>

using namespace std;

const int MAX_CHAR = 100;

int main() {
    ofstream outFile;
    outFile.open("test_output.txt", ios::app);
    outFile << "line1\n";
    outFile << "line2\n";
    outFile.close();

    ifstream inFile;
    char line[MAX_CHAR];
    inFile.open("test_output.txt");
    while(inFile.getline(line, MAX_CHAR)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
