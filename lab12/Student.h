#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Person.h"

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

class Student : public Person, public basic_string<char> {
public:
  // Student constructor given no data or Person object
  Student();

  // Student constructor given a Person object
  Student(Person);

  // Student constructor given no Student data and data for a Person object (no Person object)
  Student(int, std::string, std::string);

  // Student constructor given data for a Student object and a Person data (no Person object)
  Student(std::string, int, float, std::string, int, std::string, std::string);

  // Student constructor given data for a Student object and Person object
  Student(std::string, int, float, std::string, Person);

  // Student constructor given data for a Student object (no Person object)
  Student(std::string, int, float, std::string);

  std::string get_preferred_name();
  int get_student_id();
  float get_grade_point_average();
  std::string get_degree_pursued();
  std::string get_student_name();
  std::string get_student_hometown();
  int get_student_year();
  void get_student_person_data();

protected:

  // setters (no prompts) for updating Student_Person fields
  void set_preferred_name(std::string);
  void set_student_id(int);
  void set_grade_point_average(float);
  void set_degree_pursued(std::string);

  // setters for establishing initial data in Student fields
  std::string establish_student_name();
  int establish_student_id_number();
  float establish_student_gpa();
  std::string establish_student_degree();

  // setters for establishing initial data in Student_Person fields
  int establish_year();
  std::string establish_hometown();
  std::string establish_name();

private:
  std::string preferred_name;
  int student_id;
  float grade_point_average;
  std::string degree_pursued;
  Person Student_Person; // year, hometown, name

};

#endif // PERSON_STUDENT_H
