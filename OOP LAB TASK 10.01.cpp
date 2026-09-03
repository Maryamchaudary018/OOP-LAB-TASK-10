#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager
{
public:

    void writeFile()
    {
        ofstream file("notes.txt");

        file << "C++ is an object-oriented programming language." << endl;
        file << "OOP uses classes and objects." << endl;
        file << "File handling is important in programming." << endl;

        file.close();
    }

    void readFile()
    {
        ifstream file("notes.txt");
        string line;

        cout << "Contents of the file:" << endl;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }

    void appendFile()
    {
        ofstream file("notes.txt", ios::app);

        file << "Name: Maryam" << endl;
        file << "Roll Number: 2024_SET_02" << endl;

        file.close();
    }
};

int main()
{
    FileManager obj;

    obj.writeFile();
    obj.readFile();
    obj.appendFile();

    cout << "Data appended successfully." << endl;

    return 0;
}
