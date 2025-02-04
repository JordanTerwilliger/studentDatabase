#include <iostream>
#include <vector>

using namespace std;

class Student{
    public:
    string name;
    double gpa;
    int id;

void computeGpa(double grades[], int num_grades){
    double avg = 0.0;
    for (int i = 0; i < num_grades; i++)
    {
        avg += grades[i];
        avg = avg/num_grades;
        gpa = avg;
    }
}
};

int main(){
    double grades_s[] = {3.0,2.0,2.0};
    Student s;
    s.name = "Roger";
    s.computeGpa(grades_s, 3);
    s.id = 801123454;

    Student s2;
    s.name = "Sam";
    s.gpa = 4.0;
    s.id = 801111111;

   

    cout << "Name: " << s.name << "\n";
    cout << "ID: " << s.id << "\n";
    cout << "GPA: " << s.gpa << "\n"; 
    /*
    int NUM_STUDENTS = 3;
    vector<string> names = {"Sam", "Bob", "Joe"};
    vector<double> gpas = {2.5, 3.4, 4.0};
    vector<int> ids = {800123456, 801234546, 801224556};

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Name: " << names[i] << "\n";
        cout << "ID: " << ids[i] << "\n";
        cout << "GPA: " << gpas[i] << "\n"; 
    }
    
*/
    return 0;
}
