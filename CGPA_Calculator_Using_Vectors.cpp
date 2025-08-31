#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int courses;
    cout << "Enter Number of Courses: ";
    cin >> courses;

    vector<double> courses_grade(courses);
    vector<double> courses_credithours(courses);

    double total_grading_pts = 0;
    double total_credit_hours = 0;

    for (int i = 0; i < courses; i++)
    {
        cout << "Enter Grade (in points) in Course " << i + 1 << ": ";
        cin >> courses_grade[i];
        cout << "Enter Credit Hours in Course " << i + 1 << ": ";
        cin >> courses_credithours[i];

        total_grading_pts += courses_grade[i] * courses_credithours[i];
        total_credit_hours += courses_credithours[i];
    }

    cout << "--------------------------------------------------\n";
    cout << "|    Course\t| Credit Hours\t| Grade Points\t |\n";
    cout << "--------------------------------------------------\n";
    for (int i = 0; i < courses; i++)
    {
        cout << "| \t" << i + 1 << "\t|\t"
             << courses_credithours[i] << "\t|\t"
             << courses_grade[i] << "\t |\n";
    }
    cout << "--------------------------------------------------\n";

    cout << "Semester GPA: " << total_grading_pts / total_credit_hours << "\n\n";

    int semesters;
    cout << "Enter Number of Semesters done: ";
    cin >> semesters;

    double totalGPA = 0;
    cout << "\nEnter All Semester's GPAs one by one:\n";
    for (int i = 0; i < semesters; i++)
    {
        double GPA;
        cout << "Enter GPA of Semester " << i + 1 << ": ";
        cin >> GPA;
        totalGPA += GPA;
    }

    cout << "\nYour CGPA: " << totalGPA / semesters << endl;
    return 0;
}
