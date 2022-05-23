// This source code file demonstrates Pointers using a multi-file CPP application.

#include <iostream>
using namespace std;
#include "Student.h"
#include "Person.h"

int main(){

  // test with full details for Student and Person objects
  Person Person_1(2002, "Hawaii", "Kai Kamal Huening");
  Student Student_1("Huening Kai", 140208, 3.9, "Undergraduate", Person_1);
  cout << "\tPreferred Name: " << Student_1.get_preferred_name() << endl; // returns Huening Kai
  cout << "\tStudent ID: " << Student_1.get_student_id() << endl; // returns 140208
  cout << "\tGrade Point Average: " << Student_1.get_grade_point_average() << endl; // returns 3.9
  cout << "\tDegree Pursuit: " << Student_1.get_degree_pursued() << endl; // returns Undergraduate
  cout << "\tStudent Birth Year: " << Student_1.get_student_year() << endl; // returns 2002
  cout << "\tStudent Home City: " << Student_1.get_student_hometown() << endl; // returns Hawaii
  cout << "\tStudent Legal Name: " << Student_1.get_student_name() << endl; // returns Kai Kamal Huening
  cout << "\tStudent Report: " << endl;
  Student_1.get_student_person_data();

  // test with full details for Student but with no Person object
  Student Student_2("Beomgyu", 130103, 3.5, "Undergraduate");
  cout << "\tPreferred Name: " << Student_2.get_preferred_name() << endl; // returns Beomgyu
  cout << "\tStudent ID: " << Student_2.get_student_id() << endl; // returns 130103
  cout << "\tGrade Point Average: " << Student_2.get_grade_point_average() << endl; // returns 3.5
  cout << "\tDegree Pursuit: " << Student_2.get_degree_pursued() << endl; // returns Undergraduate
  cout << "\tStudent Birth Year: " << Student_2.get_student_year() << endl;
  cout << "\tStudent Home City: " << Student_2.get_student_hometown() << endl;
  cout << "\tStudent Legal Name: " << Student_2.get_student_name() << endl;
  cout << "\tStudent Report: " << endl;
  Student_2.get_student_person_data();

  return 0;
};
