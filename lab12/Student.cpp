#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

// Student constructor given no data or Person object
Student::Student(){
  set_preferred_name(establish_student_name());
  set_student_id(establish_student_id_number());
  set_grade_point_average(establish_student_gpa());
  set_degree_pursued(establish_student_degree());
  Student_Person = Person(establish_year(), establish_hometown(), establish_student_name());
}

// Student constructor given a Person object
Student::Student(Person person)
  : Student_Person(person.get_birth_year(), person.get_hometown(), person.get_name()) {
  set_preferred_name(establish_student_name());
  set_student_id(establish_student_id_number());
  set_grade_point_average(establish_student_gpa());
  set_degree_pursued(establish_student_degree());
  }

// Student constructor given no Student data and data for a Person object (no Person object)
Student::Student(int the_year, std::string the_hometown, std::string the_name)
  : Student_Person(the_year, the_hometown, the_name) {
  set_preferred_name(establish_student_name());
  set_student_id(establish_student_id_number());
  set_grade_point_average(establish_student_gpa());
  set_degree_pursued(establish_student_degree());
  }

// Student constructor given data for a Student object, but no data for Person or Person object
Student::Student(std::string as_name, int as_id, float as_gpa, std::string as_degree)
  : preferred_name{as_name}, student_id{as_id},
    grade_point_average{as_gpa}, degree_pursued{as_degree} 
    {
      Student_Person = Person(establish_year(), establish_hometown(), establish_student_name());
    }

// Student constructor given data for a Student object and Person data (no Person object)
Student::Student(std::string a_name, int an_id, float start_gpa, std::string degree_type, int the_date, std::string the_hometown, std::string the_name)
  : preferred_name{a_name}, student_id{an_id},
    grade_point_average{start_gpa}, degree_pursued{degree_type},
    Student_Person(the_date, the_hometown, the_name)
  {}

// Student constructor given data for a Student object and a Person object
Student::Student(std::string a_name, int an_id, float start_gpa, std::string degree_type, Person person)
  : preferred_name{a_name}, student_id{an_id},
    grade_point_average{start_gpa}, degree_pursued{degree_type},
    Student_Person(person.get_birth_year(), person.get_hometown(), person.get_name())
  {}

// getters
std::string Student::get_preferred_name() {
  return this->preferred_name;
}

int Student::get_student_id() {
  return this->student_id;
}

float Student::get_grade_point_average() {
  return this->grade_point_average;
}

std::string Student::get_degree_pursued() {
  return this->degree_pursued;
}

std::string Student::get_student_name() {
  return Student_Person.get_name();
}

std::string Student::get_student_hometown() {
  return Student_Person.get_hometown();
}

int Student::get_student_year() {
  return Student_Person.get_birth_year();
};

// testing
void Student::get_student_person_data() {
  Student_Person.print_person_data();
}

// setters
void Student::set_preferred_name(std::string this_name) {
  this->preferred_name = this_name;
}

void Student::set_student_id(int std_id) {
  this->student_id = std_id;
}

void Student::set_grade_point_average(float student_gpa) {
  this->grade_point_average = student_gpa;
}

void Student::set_degree_pursued(std::string degree_type) {
  this->degree_pursued = degree_type;
}

std::string Student::establish_student_name() {
  cout << "Please enter preferred name for student: " << endl;
  std::string name;
  cin >> name;
  return name;
}

int Student::establish_student_id_number() {
  cout << "Please enter student ID number: " << endl;
  int id_num;
  cin >> id_num;
  return id_num;
}

float Student::establish_student_gpa() {
  cout << "Please enter current student GPA: " << endl;
  float gpa;
  cin >> gpa;
  return gpa;
}

std::string Student::establish_student_degree() {
  cout << "Please enter degree being pursued: " << endl;
  std::string degree;
  cin >> degree;
  return degree;
}

int Student::establish_year() {
  cout << "Please enter student's birth year: " << endl;
  int year;
  cin >> year;
  return year;
}

std::string Student::establish_hometown() {
  cout << "Please enter student's hometown: " << endl;
  std::string hometown;
  cin >> hometown;
  return hometown;
}

std::string Student::establish_name() {
  cout << "Please enter student's given name: " << endl;
  std::string given_name;
  cin >> given_name;
  return given_name;
}
