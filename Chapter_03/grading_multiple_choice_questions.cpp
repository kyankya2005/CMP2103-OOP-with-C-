#include <iostream>
using namespace std;

// Function to grade a student's answers
int gradeStudent(const char answers[], const char key[], int numberOfQuestions)
{
    int correct = 0;

    for (int i = 0; i < numberOfQuestions; i++)
    {
        if (answers[i] == key[i])
        {
            correct++;
        }
    }

    return correct;
}

int main()
{
    // The correct answers
    const char key[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Students' answers
    const char answers[8][10] =
    {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };

    // Grade each student
    for (int student = 0; student < 8; student++)
    {
        int score = gradeStudent(answers[student], key, 10);

        cout << "Student " << student << " got "
             << score << " correct answers." << endl;
    }

    return 0;
}