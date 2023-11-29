#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class student {
public:
    int dob;
    long tel;
    string name;

    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Birth date: ";
        cin >> dob;
        cout << "Enter telephone: ";
        cin >> tel;
    }

    void display() const {
        cout << name << "   ";
        cout << dob << "     ";
        cout << tel << endl;
    }
};

bool compareName(const student &s1, const student &s2) {
    return s1.name < s2.name;
}

int main() {
    vector<student> students;
    string nm;

    int n;
    cout << "Enter the no of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        student temp;
        temp.input();
        students.push_back(temp);
    }

    sort(students.begin(), students.end(), compareName);

    cout << "NAME     BIRTH DATE    TELEPHONE " << endl;
    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    cout << "Enter the record to be searched: ";
    cin >> nm;

    if (binary_search(students.begin(), students.end(), student{0, 0, nm}, compareName))
        cout << "Record found";
    else
        cout << "Record not found";

    return 0;
}

