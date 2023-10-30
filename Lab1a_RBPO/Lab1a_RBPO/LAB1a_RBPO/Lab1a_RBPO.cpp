#include <iostream>
#include <ostream>
#include <string>

using namespace std;

unsigned short ReadPersonAge() {
    unsigned short age;
    cout << "Возраст >";
    cin >> age;
    return age;
}

string ReadPersonName() {
    string string;
    cout << "Имя >";
    cin >> string;
    return string;
}

unsigned short height;

void ReadPersonHeight() {
    cout << "Рост >";
    cin >> height;
}

void ReadPersonWeight(unsigned short& weight) {
    cout << "Вес >";
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cout << "З/П >";
    cin >> *salary;
}


void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& h, unsigned short& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    h = height;
    ReadPersonWeight(weight);

}

string salary;

void WritePersonData(const string& name, const unsigned short* age, const string& height = "", const string& weight = "") {
   cout << "\nИмя: " << name << " Возраст: " << *age << "\nРост: " << height << " Вес: " << weight << " З/П: " << salary << endl;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    string name;
    unsigned short age, height, weight;
    double fSalary;
    ReadPersonData(name, age, fSalary);
    ReadPersonData(name, age, height, weight);
    salary = to_string(fSalary);
    WritePersonData(name, &age, to_string(height), to_string(weight));
}

