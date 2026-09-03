#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager
{
public:

    void countLines()
    {
        ifstream file("notes.txt");
        string line;
        int count = 0;

        while (getline(file, line))
        {
            count++;
        }

        file.close();

        cout << "Total number of lines: " << count << endl;
    }
};

int main()
{
    FileManager obj;

    obj.countLines();

    return 0;
}
