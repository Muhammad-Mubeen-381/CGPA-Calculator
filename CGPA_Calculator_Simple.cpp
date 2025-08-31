#include <iostream>

using namespace std;
int main()
{
    // Taking Input Number of Courses:
    int courses;
    cout << "Enter Number of Courses: ";
    cin >> courses;
    double courses_grade[courses];
    double courses_credithours[courses];
    double total_grading_pts = 0;
    double total_credit_hours = 0;
    for (int i = 0; i < courses; i++)
    {
        // Taking Input Grades and Credtit Hours:
        cout << "Enter Grade (in points) in Course " << i + 1 << ": ";
        cin >> courses_grade[i];
        cout << "Enter Credit Hours in Course " << i + 1 << ": ";
        cin >> courses_credithours[i];

        // Calculations:
        total_grading_pts += courses_grade[i] * courses_credithours[i];
        total_credit_hours += courses_credithours[i];
    }

    // Printing Grades For Each Course:
    cout << "--------------------------------------------------" << endl;
    cout << "|    Courses\t| Credit Hours\t| Grade Points\t |" << endl;
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < courses; i++)
    {
        cout << "| \t" << i + 1 << "\t|\t" << courses_credithours[i] << "\t|\t" << courses_grade[i] << "\t |" << endl;
    }
    cout << "--------------------------------------------------" << endl;

    // Printing GPA:
    cout << "Semester GPA: " << (double)total_grading_pts / total_credit_hours << "\n"
         << endl;
    cout << "For CGPA: \n"
         << endl;

    // For CGPA:
    // Input Number of Semesters:
    int semesters;
    cout << "Enter Number of Semesters done: ";
    cin >> semesters;
    cout << "\nEnter All Semester's GPAs one by one: \n"
         << endl;
    double GPA;
    double totalGPA = 0;
    for (int i = 1; i <= semesters; i++)
    {
        cout << "Enter GPA of Semester " << i << ": ";
        cin >> GPA;
        totalGPA += GPA;
    }
    // Calulating and Printing CGPA:
    cout << "\nYour CGPA: " << (double)totalGPA / semesters << endl;
    return 0;
}
