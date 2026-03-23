#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void parseCSV(const string& filename) {
    ifstream file(filename);

    if (!file) {
        cout << "Error opening file\n";
        return;
    }

    string line;

    while (getline(file, line)) {
        string name, age, initial, isStudent, grade;
        stringstream ss(line);
        string token;

        while (ss >> token) {
            if (token.find("Name:") == 0)
                name = token.substr(5);
            else if (token.find("Age:") == 0)
                age = token.substr(4);
            else if (token.find("Initial:") == 0)
                initial = token.substr(8);
            else if (token.find("IsStudent:") == 0)
                isStudent = token.substr(10);
            else if (token.find("Grade:") == 0)
                grade = token.substr(6);
        }

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Initial: " << initial << endl;
        cout << "IsStudent: " << isStudent << endl;
        cout << "Grade: " << grade << endl << endl;
    }
}

int main() {
    parseCSV("students.csv");
    return 0;
}
