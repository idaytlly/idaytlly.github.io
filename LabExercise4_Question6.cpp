/*?	Number of students = 10
?	There are 10 marks of students to be saved
Student 1: 70
Student 2: 85
Student 3: 57
Student 4: 64
Student 5: 83
Student 6: 92
Student 7: 75
Student 8: 69
Student 9: 95
Student 10: 72

Based on the above information, calculate the total of marks for all students, and then calculate its average.?*/

#include <iostream>
using namespace std;

int main(){
int NUM_STUDENTS = 10;
int marks [NUM_STUDENTS] = {70, 85, 57, 64, 83, 92, 75, 69, 95, 72};
double average, totalmark = 0;
int i = 0;

for (i = 0; i < NUM_STUDENTS; i++){
	cout << "Student" << (i+1) << ": " << marks[i] << endl;
}

for (i = 0 ; i < NUM_STUDENTS; i++){
	totalmark += marks [i];
}
average = totalmark/NUM_STUDENTS;

cout << endl;
cout << "Total marks of all students is " << totalmark << endl;
cout << "Average of students' mark is " << average << endl;

return 0;

}
