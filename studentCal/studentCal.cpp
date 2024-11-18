#include <string>
#include <iostream>
#include <vector>
#include <cmath>

class student {
public:

    // Student grade vectors up to four students 
    std::vector<double> student1Grades;
    std::vector<double> student2Grades;
    std::vector<double> student3Grades;
    std::vector<double> student4Grades;

    // student name variables 
    std::string student1;
    std::string student2;
    std::string student3;
    std::string student4;
    void addStudent(int numOfStudents) {
        studentCount = numOfStudents;
        switch (studentCount) {
        case 1:
            std::cout << "Emter the name for the student one\n";
            std::cin.ignore();
            std::getline(std::cin, student1);
            // Making sure student name is not empty
            while (student1.empty()) {
                std::cout << "Student one can no be empty\n";
                std::getline(std::cin, student1);
            }
            break;
            // Student input is 2
        case 2:
            std::cout << "Enter the name for student one:\n";
            std::cin.ignore();
            std::getline(std::cin, student1);
            std::cout << "Enter the name for student two:\n";
            std::getline(std::cin, student2);
            while (student1.empty() || student2.empty()) {
                if (student1.empty()) {
                    std::cout << "Student one's name can not be empty\n";
                    std::getline(std::cin, student1);
                }
                if (student2.empty()) {
                    std::cout << "Student two's name can not be empty\n";
                    std::getline(std::cin, student2);
                }
                else {
                    std::cout << "An unknown error has occured, please try again!\n";
                }
            }
            break;
            // Student input is 3 
        case 3:
            std::cout << "Enter the name for student one:\n";
            std::cin.ignore();
            std::getline(std::cin, student1);
            std::cout << "Enter the name for student two:\n";
            std::getline(std::cin, student2);
            std::cout << "Enter the name for student three:\n";
            std::getline(std::cin, student3);
            while (student1.empty() || student2.empty() || student3.empty()) {
                if (student1.empty()) {
                    std::cout << "Student one's name can not be empty\n";
                    std::getline(std::cin, student1);
                }
                if (student2.empty()) {
                    std::cout << "Student two's name can not be empty\n";
                    std::getline(std::cin, student2);
                }
                if (student3.empty()) {
                    std::cout << "Student three's name can not be empty\n";
                    std::getline(std::cin, student3);
                }
                else {
                    std::cout << "An unknown error has occured, please try again!\n";
                }
                break;
                // student input is 4
        case 4:
            std::cout << "Enter the name for student one:\n";
            std::cin.ignore();
            std::getline(std::cin, student1);
            std::cout << "Enter the name for student two:\n";
            std::getline(std::cin, student2);
            std::cout << "Enter the name for student three:\n";
            std::getline(std::cin, student3);
            std::cout << "Enter the name for student four:\n";
            std::getline(std::cin, student4);
            // Making sure all students have input
            while (student1.empty() || student2.empty() || student3.empty() || student4.empty()) {
                if (student1.empty()) {
                    std::cout << "Student one's name can not be empty\n";
                    std::getline(std::cin, student1);
                }
                if (student2.empty()) {
                    std::cout << "Student two's name can not be empty\n";
                    std::getline(std::cin, student2);
                }
                if (student3.empty()) {
                    std::cout << "Student three's name can not be empty\n";
                    std::getline(std::cin, student3);
                }
                if (student4.empty()) {
                    std::cout << "Student four's name can not be empty\n";
                    std::getline(std::cin, student4);
                }
                else {
                    std::cout << "An unknown error has occured, please try again\n";
                }
                break;
            }





            }
        }
    } // End of method (add student)
    void addGrades(int userInput) {
        student students;
        GradesInput = userInput;
        
        // student one Grade vars
        double student1Grade1;
        double student1Grade2;
        double student1Grade3;
        double student1Grade4;
        // student two Grade vars
        double student2Grade1;
        double student2Grade2;
        double student2Grade3;
        double student2Grade4;
        // student three Grade vars
        double student3Grade1;
        double student3Grade2;
        double student3Grade3;
        double student3Grade4;
        // student four Grade vars
        double student4Grade1;
        double student4Grade2;
        double student4Grade3;
        double student4Grade4;

        switch (GradesInput) {
         //grade input is 1 for all students  
        case 1:
            if (!student1.empty()) {
                std::cout << "Enter grades for student one\n";
                std::cin >> student1Grade1;
                student1Grades.push_back(student1Grade1); // Index 0
           }
            if (!student2.empty()) {
                std::cout << "Enter grades for student two\n";
                std::cin >> student2Grade1;
                student2Grades.push_back(student2Grade1); // Index 0
            }
            if (!student3.empty()) {
                std::cout << "Enter grades for student three\n";
                std::cin >> student3Grade1;
                student3Grades.push_back(student3Grade1); // Index 0
            }
            if (!student4.empty()) {
                std::cout << "Enter grades for student four\n";
                std::cin >> student4Grade1;
                student4Grades.push_back(student4Grade1); // Index 0
            }
            break;
            // Grade input is 2 
        case 2:
            if (!student1.empty()) {
                std::cout << "Enter the first grade for student one\n";
                std::cin >> student1Grade1;
                std::cout << "Enter the second grade for student one\n";
                std::cin >> student1Grade2;
                student1Grades.push_back(student1Grade1); // Index 0
                student1Grades.push_back(student1Grade1); // Index 1
            }
            if (!student2.empty()) {
                std::cout << "Enter the first grade for student two\n";
                std::cin >> student2Grade1;
                std::cout << "Enter the second grade for student two\n";
                std::cin >> student2Grade2;
                student2Grades.push_back(student2Grade1); // Index 0
                student2Grades.push_back(student2Grade2); // Index 1
            }
            if (!student3.empty()) {
                std::cout << "Enter the first grade for student three\n";
                std::cin >> student3Grade1;
                std::cout << "Enter the second grade for student three\n";
                std::cin >> student3Grade2;
                student3Grades.push_back(student3Grade1); // Index 0
                student3Grades.push_back(student3Grade2); // Index 1
            }
            if (!student4.empty()) {
                std::cout << "Enter the first grade for student four\n";
                std::cin >> student4Grade1;
                std::cout << "Enter the second grade for student four\n";
                std::cin >> student4Grade2;
                student4Grades.push_back(student4Grade1); // Index 0
                student4Grades.push_back(student4Grade2); // Index 1
            }
            break;
            // Grade input is 3 
        case 3:
            if (!student1.empty()) {
                std::cout << "Enter the first grade for student one\n";
                std::cin >> student1Grade1;
                std::cout << "Enter the second grade for student one\n";
                std::cin >> student1Grade2;
                std::cout << "Enter the third grade for student one\n";
                std::cin >> student1Grade3;
                student1Grades.push_back(student1Grade1); // Index 0
                student1Grades.push_back(student1Grade2); // Index 1
                student1Grades.push_back(student1Grade3); // Index 2
            }
            if (!student2.empty()) {
                std::cout << "Enter the first grade for student two\n";
                std::cin >> student2Grade1;
                std::cout << "Enter the second grade for student two\n";
                std::cin >> student2Grade2;
                std::cout << "Enter the third grade for student two\n";
                std::cin >> student2Grade3;
                student2Grades.push_back(student2Grade1); // Index 0
                student2Grades.push_back(student2Grade2); // Index 1
                student2Grades.push_back(student2Grade3); // Index 2
            }
            if (!student3.empty()) {
                std::cout << "Enter the first grade for student three\n";
                std::cin >> student3Grade1;
                std::cout << "Enter the second grade for student three\n";
                std::cin >> student3Grade2;
                std::cout << "Enter the third grade for student three\n";
                std::cin >> student3Grade3;
                student3Grades.push_back(student3Grade1); // Index 0
                student3Grades.push_back(student3Grade2); // Index 1
                student3Grades.push_back(student3Grade3); // Index 2
            }
            if (!student4.empty()) {
                std::cout << "Enter the first grade for student four\n";
                std::cin >> student4Grade1;
                std::cout << "Enter the second grade for student four\n";
                std::cin >> student4Grade2;
                std::cout << "Enter the third grade for student four\n";
                std::cin >> student4Grade3;
                student4Grades.push_back(student4Grade1); // Index 0
                student4Grades.push_back(student4Grade2); // Index 1
                student4Grades.push_back(student4Grade3); // Index 2

            }
            break;
        case 4:
            if (!student1.empty()) {
                std::cout << "Enter the first grade for student one\n";
                std::cin >> student1Grade1;
                std::cout << "Enter the second grade for student one\n";
                std::cin >> student1Grade2;
                std::cout << "Enter the third grade for student one\n";
                std::cin >> student1Grade3;
                std::cout << "Enter the fourth grade for student one\n";
                std::cin >> student1Grade4;
                student1Grades.push_back(student1Grade1); // Index 0
                student1Grades.push_back(student1Grade2); // Index 1
                student1Grades.push_back(student1Grade3); // Index 2
                student1Grades.push_back(student1Grade4); // Index 3
            }
            if (!student2.empty()) {
                std::cout << "Enter the first grade for student two\n";
                std::cin >> student2Grade1;
                std::cout << "Enter the second grade for student two\n";
                std::cin >> student2Grade2;
                std::cout << "Enter the third grade for student two\n";
                std::cin >> student2Grade3;
                std::cout << "Enter the fourth grade for student two\n";
                std::cin >> student2Grade4;
                student2Grades.push_back(student2Grade1); // Index 0
                student2Grades.push_back(student2Grade2); // Index 1
                student2Grades.push_back(student2Grade3); // Index 2
                student2Grades.push_back(student2Grade4); // Index 3
            }
            if (!student3.empty()) {
                std::cout << "Enter the first grade for student three\n";
                std::cin >> student3Grade1;
                std::cout << "Enter the second grade for student three\n";
                std::cin >> student3Grade2;
                std::cout << "Enter the third grade for student three\n";
                std::cin >> student3Grade3;
                std::cout << "Enter the fourth grade for student three\n";
                std::cin >> student3Grade4;
                student3Grades.push_back(student3Grade1); // Index 0
                student3Grades.push_back(student3Grade2); // Index 1
                student3Grades.push_back(student3Grade3); // Index 2
                student3Grades.push_back(student3Grade4); // Index 3
            }
            if (!student4.empty()) {
                std::cout << "Enter the first grade for student four\n";
                std::cin >> student4Grade1;
                std::cout << "Enter the second grade for student four\n";
                std::cin >> student4Grade2;
                std::cout << "Enter the third grade for student four\n";
                std::cin >> student4Grade3;
                std::cout << "Enter the fourth grade for student four\n";
                std::cin >> student4Grade4;
                student4Grades.push_back(student4Grade1); // Index 0
                student4Grades.push_back(student4Grade2); // Index 1
                student4Grades.push_back(student4Grade3); // Index 2
                student4Grades.push_back(student4Grade4); // Index 3

            }
            break;


        } // End of switch 


    } // End of method (add grades)

    // Get grades sum

    void sgSum() {
        if (GradesInput == 1 && studentCount == 1) {
            std::cout << student1 << " overall grade is " << student1Grades[0] << "%\n";
        }
        if (GradesInput == 1 && studentCount == 2) {
            std::cout << student1 << " overall grade is " << student1Grades[0] << "%\n";
            std::cout << student2 << " overall grade is " << student2Grades[0] << "%\n";
        }
        if (GradesInput == 1 && studentCount == 3) {
            std::cout << student1 << " overall grade is " << student1Grades[0] << "%\n";
            std::cout << student2 << " overall grade is " << student2Grades[0] << "%\n";
            std::cout << student3 << " overall grade is " << student3Grades[0] << "%\n";
         }
        if (GradesInput == 1 && studentCount == 4) {
            std::cout << student1 << " overall grade is " << student1Grades[0] << "%\n";
            std::cout << student2 << " overall grade is " << student2Grades[0] << "%\n";
            std::cout << student3 << " overall grade is " << student3Grades[0] << "%\n";
            std::cout << student4 << " overall grade is " << student4Grades[0] << "%\n";
         }
        // Grades input is 2 
        if (GradesInput == 2 && studentCount == 1) {
            double gradeSum = (student1Grades[0] + student1Grades[1]) / 2;
            std::cout << student1 << " overall grade is " << gradeSum << "%\n";
        }
        if (GradesInput == 2 && studentCount == 2) {
            double student1Sum = (student1Grades[0] + student1Grades[1]) / 2;
            double student2Sum = (student2Grades[0] + student2Grades[1]) / 2;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
        }
        if (GradesInput == 2 && studentCount == 3) {
            double student1Sum = (student1Grades[0] + student1Grades[1]) / 2;
            double student2Sum = (student2Grades[0] + student2Grades[1]) / 2;
            double student3Sum = (student3Grades[0] + student3Grades[1]) / 2;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
        }
        if (GradesInput == 2 && studentCount == 4) {
            double student1Sum = (student1Grades[0] + student1Grades[1]) / 2;
            double student2Sum = (student2Grades[0] + student2Grades[1]) / 2;
            double student3Sum = (student3Grades[0] + student3Grades[1]) / 2;
            double student4Sum = (student4Grades[0] + student4Grades[1]) / 2;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
            std::cout << student4 << " overall grade is " << student4Sum << "%\n";
        }
        // Grades input is 3 
        if (GradesInput == 3 && studentCount == 1) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2]) / 3;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
        }
        if (GradesInput == 3 && studentCount == 2) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2]) / 3;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2]) / 3;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
        }
        if (GradesInput == 3 && studentCount == 3) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2]) / 3;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2]) / 3;
            double student3Sum = (student3Grades[0] + student3Grades[1] + student3Grades[2]) / 3;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
        }
        if (GradesInput == 3 && studentCount == 4) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2]) / 3;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2]) / 3;
            double student3Sum = (student3Grades[0] + student3Grades[1] + student3Grades[2]) / 3;
            double student4Sum = (student4Grades[0] + student4Grades[1] + student4Grades[2]) / 3;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
            std::cout << student4 << " overall grade is " << student4Sum << "%\n";
        }
        // Grades input is 4
        if (GradesInput == 4 && studentCount == 1) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2] + student1Grades[3]) / 4;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
        }
        if (GradesInput == 4 && studentCount == 2) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2] + student1Grades[3]) / 4;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2] + student2Grades[3]) / 4;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
        }
        if (GradesInput == 4 && studentCount == 3) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2] + student1Grades[3]) / 4;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2] + student2Grades[3]) / 4;
            double student3Sum = (student3Grades[0] + student3Grades[1] + student3Grades[2] + student3Grades[3]) / 4;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
        }
        if (GradesInput == 4 && studentCount == 4) {
            double student1Sum = (student1Grades[0] + student1Grades[1] + student1Grades[2] + student1Grades[3]) / 4;
            double student2Sum = (student2Grades[0] + student2Grades[1] + student2Grades[2] + student2Grades[3]) / 4;
            double student3Sum = (student3Grades[0] + student3Grades[1] + student3Grades[2] + student3Grades[3]) / 4;
            double student4Sum = (student4Grades[0] + student4Grades[1] + student4Grades[2] + student4Grades[3]) / 4;
            std::cout << student1 << " overall grade is " << student1Sum << "%\n";
            std::cout << student2 << " overall grade is " << student2Sum << "%\n";
            std::cout << student3 << " overall grade is " << student3Sum << "%\n";
            std::cout << student4 << " overall grade is " << student4Sum << "%\n";
        }
    }


    private:
        int studentCount;
        int GradesInput;
};




int main() {
    student student;
    std::cout << "Bytewise student calculator (V 1.0) \n";
    std::cout << "How many students do you want to enter?\n";
    int StudentInput;
    int inputGrades;
    std::cin >> StudentInput;
    student.addStudent(StudentInput);
    std::cout << "You may enter up to 4 grades per student, how many do you want to enter?\n";
    std::cin >> inputGrades;
    student.addGrades(inputGrades);
    student.sgSum();
}

