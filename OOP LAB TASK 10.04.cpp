#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class StudentFile
{
public:

    // Write student details to the file
    void writeStudents()
    {
        ofstream file("students.txt");

        file << "Name: Ali" << endl;
        file << "Roll Number: 2024_SET_01" << endl;

        file << "Name: Maryam" << endl;
        file << "Roll Number: 2024_SET_02" << endl;

        file << "Name: Ahmed" << endl;
        file << "Roll Number: 2024_SET_03" << endl;

        file.close();
    }

    // Read and display student details
    void readStudents()
    {
        ifstream file("students.txt");
        string line;

        cout << "Student Details:" << endl;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
};

int main()
{
    StudentFile obj;

    obj.writeStudents();
    obj.readStudents();

    return 0;
}
