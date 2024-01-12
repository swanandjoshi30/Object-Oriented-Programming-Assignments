#include<iostream>
#include<fstream>
using namespace std;

class FileHandler
{
public:
    void writeData();
    void readData();
};

void FileHandler::writeData()
{
    fstream file;
    char ch;

    // Open file in write mode
    file.open("swanand.txt", ios::out);

    cout << "Enter data to write into the file (Enter '.' to stop):\n";

    // Input data until '.' is entered
    cin >> ch;
    while (ch != '.')
    {
        file.put(ch);
        cin >> ch;
    }

    // Close the file
    file.close();
}

void FileHandler::readData()
{
    fstream file;
    char ch;

    // Open file in read mode
    file.open("swanand.txt", ios::in);

    // Check if the file is open successfully
    if (!file)
    {
        cout << "Error opening file! Make sure the file exists.\n";
        return;
    }

    cout << "Data read from the file:\n";

    // Read and display data until end-of-file is reached
    ch = file.get();
    while (!file.eof())
    {
        cout << ch;
        ch = file.get();
    }

    // Close the file
    file.close();
}

int main()
{
    FileHandler fileHandler;
    int choice;

    do
    {
        cout << "\nFile Handling Menu:\n";
        cout << "1. Write Data\n";
        cout << "2. Read Data\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            fileHandler.writeData();
            break;
        case 2:
            fileHandler.readData();
            break;
        case 3:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
            break;
        }

    } while (choice != 3);

    return 0;
}

