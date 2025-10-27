// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: [NAME HERE]

#include <iostream>
using namespace std;

/****************************************************************
 *  double getScore
 * cout << "give me a test score" << endl;
 cin >>
 while (Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/

double getScore() {        
    cout << "give me a test score" << endl; // asking user for test score 
    double x;  // x is going to equal the score 
    cin >> x;   
    while (x > 100 || x < 0)  // if the score is greater than 100 or 0 then its going to be invalid 
        cout << "invalid score!" << endl;
    return x;  // return the score
}




 /****************************************************************
  * Function Name: displayLetterGrade
  * Purpose: Determine and display the letter grade
  *          corresponding to the numeric score.
  * Parameters: score (double) – the numeric test score
  * Return Value: None (displays the letter grade to the screen)
  ****************************************************************/

void displayLetterGrade(double y) {
    

    if (y >= 90) {          // checking if the score is greater than or equal to 90 
        cout << "your letter grade is an A" << endl;   // if so, thats an A 
    }
    else if (y >= 80) {     // seeing if score is equal to or greater than 80
        cout << "your letter grade is a B" << endl;  // grade is going to be a B
    }
    else if (y >= 70 ) {   // seeing if grade is greater than or equal to 70 
        cout << "your letter grade is a C" << endl;  // grade is C
    }
    else if (y >= 60) {    // seeing if grade is greater than or equal to 60 
        cout << "your letter grade is a D" << endl;  // grade is a D
    }
    else
        cout << "your letter grade is an F" << endl;  // if grade is below a 60 then grade is an F
}
      // Determine the letter grade and display it.
      // Example grading scale:
      // 90–100: A
      // 80–89:  B
      // 70–79:  C
      // 60–69:  D
      // Below 60: F



  // You should not need to edit main for your program to run 
  // correctly. Only edit it to add cout statements or comment
  // out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}