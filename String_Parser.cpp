#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
using namespace std;

void parseCSV(const string&);

int main() {
   parseCSV("students.csv");

   return 0;
}
