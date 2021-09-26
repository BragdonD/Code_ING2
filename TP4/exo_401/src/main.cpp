#include <iostream>
#include "school.h"

int main(){
    student *student1 = new student("DUCLOS Thomas"         ,"DT00012025",2025);
    student *student2 = new student("VIDAL Hugo"            ,"DT00022025",2025);
    student *student3 = new student("KEBE Ibrahim"          ,"DT00032025",2025);
    student *student4 = new student("FAIVRE-DAISAY Gaspard" ,"DT00042025",2025);
    student *student5 = new student("SABOUR IKRAM"          ,"DT00052025",2025);
    school aSchool;

    aSchool.AddStudent(student1);
    aSchool.AddStudent(student2);
    aSchool.AddStudent(student3);
    aSchool.AddStudent(student4);
    aSchool.AddStudent(student5);

    aSchool.printStudent();

    return 0;
}