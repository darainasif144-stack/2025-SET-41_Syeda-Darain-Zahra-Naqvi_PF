#include <iostream>
using namespace std;

// Function declarations
void showInstructions();
void startExam();
void showResult(int score);

int main()
{
    int choice;

    do
    {
        cout << "\n===== ONLINE EXAMINATION SYSTEM =====\n";
        cout << "1. View Instructions\n";
        cout << "2. Start Exam\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showInstructions();
            break;

        case 2:
            startExam();
            break;

        case 3:
            cout << "\nThank you for using the Online Examination System.\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}

// Function to display instructions
void showInstructions()
{
    cout << "\n----- EXAM INSTRUCTIONS -----\n";
    cout << "1. This exam contains multiple choice questions.\n";
    cout << "2. Each correct answer carries 1 mark.\n";
    cout << "3. No negative marking.\n";
    cout << "4. Enter option number (1-4) only.\n";
    cout << "5. Result will be displayed at the end.\n";
}

// Function to start the exam
void startExam()
{
    const int totalQuestions = 5;
    int answer;
    int score = 0;

    cout << "\n----- EXAM STARTED -----\n";

    // Question 1
    cout << "\nQ1. Which language is used for Programming Fundamentals?\n";
    cout << "1. HTML\n2. C++\n3. CSS\n4. SQL\n";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\nQ2. Which loop is used to repeat a block of code?\n";
    cout << "1. if\n2. switch\n3. for\n4. break\n";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 3
    cout << "\nQ3. Which statement is used for decision making?\n";
    cout << "1. for\n2. if\n3. continue\n4. return\n";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 4
    cout << "\nQ4. Which symbol is used to end a statement in C++?\n";
    cout << "1. :\n2. .\n3. ;\n4. ,\n";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 5
    cout << "\nQ5. Which data type stores whole numbers?\n";
    cout << "1. float\n2. char\n3. int\n4. double\n";
    cin >> answer;
    if (answer == 3)
        score++;

    showResult(score);
}

// Function to show result
void showResult(int score)
{
    cout << "\n----- EXAM RESULT -----\n";
    cout << "Total Marks: 5\n";
    cout << "Obtained Marks: " << score << endl;

    if (score >= 4)
        cout << "Grade: A (Excellent)\n";
    else if (score == 3)
        cout << "Grade: B (Good)\n";
    else if (score == 2)
        cout << "Grade: C (Average)\n";
    else
        cout << "Grade: F (Fail)\n";
}
