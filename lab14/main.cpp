// This source code file reuses code from lab 13, but implements file read/write for data consumption.

using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include <algorithm> // used to call sort() and find()
// handle file read/write
#include <fstream>
#include <sstream>

auto lambdaSort = [](Student S1, Student S2) -> bool
{
    return S1.get_student_name() < S2.get_student_name();
};

auto lambdaSortGPA = [](Student S1, Student S2) -> bool
{
    return S1.get_grade_point_average() > S2.get_grade_point_average();
};

vector<std::string> split(const string &s, char delim)
{
    vector<std::string> result;
    stringstream ss(s);
    std::string item;
    while (getline(ss, item, delim))
    {
        result.push_back(item);
    }
    return result;
}

int main()
{
    cout << "Welcome to lab 14!" << endl;

    std::vector<Student> Student_Body{};
    // get a handle on the file and read out a single line
    ifstream student_data("student_list.csv");
    std::string this_line;
    while (getline(student_data, this_line))
    {
        // handle file text
        vector<string> v = split(this_line, ',');
        int pn_len = v[0].length(); // string of length 6: 0 = ", 1 = A, 2 = d, 3 = a, 4 = m, 5 = " // string = "Adam"
        string pn = v[0].substr(1, pn_len - 2);
        int id = stoi(v[1]);
        float gpa = stof(v[2]);
        int dg_len = v[3].length();
        string deg = v[3].substr(2, dg_len - 3);
        int yr = stoi(v[4]);
        int loc_len = v[5].length();
        string loc = v[5].substr(2, loc_len - 3);
        int gn_len = v[6].length();
        string gn = v[6].substr(2, gn_len - 4);

        Student s(pn, id, gpa, deg, yr, loc, gn);
        Student_Body.push_back(s);
    }

    // sort-print all Students by last name, first name
    std::sort(Student_Body.begin(), Student_Body.end(), lambdaSort);
    cout << "\n\tStudents by Last Name, First Name: " << endl;
    for (Student s : Student_Body)
        cout << "\t" << s.get_student_name() << ", " << s.get_preferred_name() << endl;

    // report the names and the degree being pursued for students with a 4.0 GPA
    float max_gpa = 4.0;
    cout << "\n\tStudents with a 4.0 GPA: " << endl;
    for (int x = 0; x < 20; x++)
    {
        if (Student_Body[x].get_grade_point_average() == 4.0)
        {
            cout << "\t" << Student_Body[x].get_preferred_name() << " " << Student_Body[x].get_student_name()
                 << " who is in the " << Student_Body[x].get_degree_pursued() << " degree program has a 4.0 GPA." << endl;
        }
    }

    // calculate the average gpa for each of the Degree Pursuit types (UG, G, PG, D).
    std::vector<Student> UG;
    std::vector<Student> GR;
    std::vector<Student> PG;
    std::vector<Student> DR;
    int ug_count = 0;
    int gr_count = 0;
    int pg_count = 0;
    int dr_count = 0;
    float ug_total = 0.0;
    float gr_total = 0.0;
    float pg_total = 0.0;
    float dr_total = 0.0;
    for (int y = 0; y < 20; y++)
    {
        // read degree, assign to proper vector
        if (Student_Body[y].get_degree_pursued() == "Undergraduate")
        {
            UG.push_back(Student_Body[y]);
            ug_count++;
            ug_total += Student_Body[y].get_grade_point_average();
        }
        else if (Student_Body[y].get_degree_pursued() == "Graduate")
        {
            GR.push_back(Student_Body[y]);
            gr_count++;
            gr_total += Student_Body[y].get_grade_point_average();
        }
        else if (Student_Body[y].get_degree_pursued() == "Post-Graduate")
        {
            PG.push_back(Student_Body[y]);
            pg_count++;
            pg_total += Student_Body[y].get_grade_point_average();
        }
        else
        {
            DR.push_back(Student_Body[y]);
            dr_count++;
            dr_total += Student_Body[y].get_grade_point_average();
        }
    }
    cout.precision(2);
    cout << "\n\tThe GPA Averages for each Degree Program: " << endl;
    cout << "\tThere are " << dr_count << " Doctoral Students with an average GPA of " << dr_total / dr_count << endl;
    cout << "\tThere are " << pg_count << " Post-Graduate Students with an average GPA of " << pg_total / pg_count << endl;
    cout << "\tThere are " << gr_count << " Graduate Students with an average GPA of " << gr_total / gr_count << endl;
    cout << "\tThere are " << ug_count << " Undergraduate Students with an average GPA of " << ug_total / ug_count << endl;

    // compute the most pursued degree:
    if ((ug_count > gr_count) and (ug_count > pg_count) and (ug_count > dr_count))
    {
        cout << "\n\tThe most popular degree program is Undergraduate Studies.\n";
    }
    else if ((gr_count > ug_count) and (gr_count > pg_count) and (gr_count > dr_count))
    {
        cout << "\n\tThe most popular degree program is Graduate Studies.\n";
    }
    else if ((pg_count > ug_count) and (pg_count > gr_count) and (pg_count > dr_count))
    {
        cout << "\n\tThe most popular degree program is Post-Graduate Studies.\n"
             << endl;
    }

    // sort all GPA for each Degree Display Each List
    cout.precision(2);
    cout << "\n\tSorted Lists of GPAs by Degree Program: " << endl;
    std::sort(DR.begin(), DR.end(), lambdaSortGPA);
    cout << "\tDoctoral Students by GPA (Highest to Lowest): " << endl;
    for (Student s : DR)
        cout << "\t" << s.get_student_name() << " GPA: " << s.get_grade_point_average() << endl;
    std::sort(PG.begin(), PG.end(), lambdaSortGPA);
    cout << "\n\tPost-Graduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : PG)
        cout << "\t" << s.get_student_name() << " GPA: " << s.get_grade_point_average() << endl;
    std::sort(GR.begin(), GR.end(), lambdaSortGPA);
    cout << "\n\tGraduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : GR)
        cout << "\t" << s.get_student_name() << " GPA: " << s.get_grade_point_average() << endl;
    std::sort(UG.begin(), UG.end(), lambdaSortGPA);
    cout << "\n\tUndergraduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : UG)
        cout << "\t" << s.get_student_name() << " GPA: " << s.get_grade_point_average() << endl;

    // save sorted list to a file
    // create name of the file to be saved to
    string save_file_name = "../sorted_students.csv";
    // create an instance of the ofstream (out file stream) object with the file name
    ofstream out_file;
    // open a handle to the file
    out_file.open(save_file_name);
    // for each record in Student_Body update the file with the record
    for (int i = 0; i < 20; i++)
    {
        out_file << Student_Body[i].get_preferred_name() << ","
                 << Student_Body[i].get_student_id() << ","
                 << Student_Body[i].get_grade_point_average() << ","
                 << Student_Body[i].get_degree_pursued() << ","
                 << Student_Body[i].get_student_year() << ","
                 << Student_Body[i].get_student_hometown() << ","
                 << Student_Body[i].get_student_name() << endl;
    }
    // close file when done writing
    out_file.close();

    return 0;
}
