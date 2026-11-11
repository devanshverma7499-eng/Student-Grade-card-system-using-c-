#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0;
    float percentage;
    bool pass = true;

    string subjects[5] = {
        "C++", "Python", "Maths", "Computer", "English"
    };

    cout << "===== STUDENT RESULT ANALYZER =====\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter " << subjects[i] << " marks: ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks!";
            return 0;
        }

        total += marks[i];

        if (marks[i] < 33)
            pass = false;
    }

    percentage = total / 5.0;

    cout << "\nTotal Marks: " << total << "/500";
    cout << "\nPercentage: " << percentage << "%";

    if (!pass)
        cout << "\nResult: FAIL";
    else if (percentage >= 80)
        cout << "\nGrade: A";
    else if (percentage >= 60)
        cout << "\nGrade: B";
    else if (percentage >= 45)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: D";

    cout << "\n";

    return 0;
}