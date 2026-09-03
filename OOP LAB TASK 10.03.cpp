#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager
{
public:

    void copyFile()
    {
        ifstream source("notes.txt");
        ofstream destination("copy.txt");

        string line;

        while (getline(source, line))
        {
            destination << line << endl;
        }

        source.close();
        destination.close();

        cout << "File content copied successfully." << endl;
    }
};

int main()
{
    FileManager obj;

    obj.copyFile();

    return 0;
}
