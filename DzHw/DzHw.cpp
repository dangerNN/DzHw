#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string fullName;
    double averageGrade;
    string university;
    int groupNumber;

public:
    Student() : fullName("Невідомий"), averageGrade(0.0), university("Невідомо"), groupNumber(0) {}
    Student(string name, double grade, string uni, int group)
        : fullName(name), averageGrade(grade), university(uni), groupNumber(group) {}

    string getFullName() const { return fullName; }
    double getAverageGrade() const { return averageGrade; }
    string getUniversity() const { return university; }
    int getGroupNumber() const { return groupNumber; }

    void setFullName(const string& name) { fullName = name; }
    void setAverageGrade(double grade) { averageGrade = grade; }
    void setUniversity(const string& uni) { university = uni; }
    void setGroupNumber(int group) { groupNumber = group; }

    void displayInfo() const {
		cout << "ПІБ: " << fullName << endl;
		cout << "Середній бал: " << averageGrade << endl;
		cout << "Університет: " << university << endl;
		cout << "Номер групи: " << groupNumber << endl;
    }
};

int main() {
    setlocale(0, "");

    Student student1;
	cout << "Студент за замовчуванням:\n";
    student1.displayInfo();
	cout << endl;

    Student student2("Іван Петренко", 4.8, "КНУ ім. Т. Шевченка", 105);
	cout << "Студент з вказаними даними:\n";
    student2.displayInfo();
    cout << endl;

    student1.setFullName("Іван Петренко");
    student1.setAverageGrade(5.4);
    student1.setUniversity("КНУ ім. Т. Шевченка");
    student1.setGroupNumber(105);

	cout << "Студент зі зміненими даними:\n";
    student1.displayInfo();

    return 0; 
}
