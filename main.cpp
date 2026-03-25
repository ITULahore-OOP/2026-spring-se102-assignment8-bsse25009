#include "AccessCard.h"
#include "UniversityMember.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"
int main()
{
    // Create access cards
    AccessCard basicCard("CARD-001", 1);
    AccessCard staffCard("CARD-002", 2);
    AccessCard taCard("CARD-003", 3);
    
    // Create students
    Student s1("Ali Raza", 1001, 3.4);
    Student s2("Fatima Khan", 1002, 3.7);
    Student s3("Hassan Ahmed", 1003, 2.9);
    
    // Create staff
    Staff prof1("Dr. Aslam", 2001, 85000, staffCard);
    Staff prof2("Dr. Nida", 2002, 79000, staffCard);
    
    // Create teaching assistants
    TeachingAssistant ta1("Usman", 3001, 3.8, 18000, taCard, 15);
    TeachingAssistant ta2("Ayesha", 3002, 3.9, 18500, taCard, 20);
    
    // Test polymorphism
    cout << "=== Testing displayRole() ===" << endl;
    UniversityMember* members[5];
    members[0] = &s1;
    members[1] = &prof1;
    members[2] = &ta1;
    members[3] = &s2;
    members[4] = &ta2;
    
    for(int i = 0; i < 5; i++) {
        members[i]->displayRole();
        cout << "-------------------" << endl;
    }
    
    // Test department aggregation
    cout << "\n=== Department System ===" << endl;
    Department csDept("Computer Science");
    csDept.addMember(&s1);
    csDept.addMember(&s2);
    csDept.addMember(&ta1);
    csDept.addMember(&prof1);
    csDept.displayAllRoles();
    
    // Test method overloading
    cout << "\n=== Grading Assignments ===" << endl;
    ta1.gradeAssignment(92);
    ta1.gradeAssignment("A");
    ta2.gradeAssignment(78);
    ta2.gradeAssignment("B+");
    
    // Test tutoring sessions
    cout << "\n=== Tutoring Sessions ===" << endl;
    TutoringSession session1(101, 45.0, &ta1, &s1);
    TutoringSession session2(102, 30.0, &ta1, &s2);
    TutoringSession session3(103, 60.0, &ta2, &s3);
    
    session1.displaySession();
    cout << endl;
    session2.displaySession();
    cout << endl;
    session3.displaySession();
    
    // Test operator overloading
    cout << "\n=== Comparing Sessions ===" << endl;
    if(session1 > session2) {
        cout << "Session 1 is longer than Session 2" << endl;
    } else {
        cout << "Session 2 is longer than Session 1" << endl;
    }
    
    cout << "\n=== Merging Sessions ===" << endl;
    TutoringSession merged = session1 + session2;
    cout << "Merged duration: " << merged.getDuration() << " minutes" << endl;
    
    // Test diamond problem
    cout << "\n=== Diamond Problem Check ===" << endl;
    Student* stuPtr = &ta1;
    Staff* staffPtr = &ta1;
    UniversityMember* base1 = stuPtr;
    UniversityMember* base2 = staffPtr;
    
    if(base1 == base2) {
        cout << "Virtual inheritance working - single base instance" << endl;
    } else {
        cout << "Error: Multiple base instances found" << endl;
    }
    
    // Update student GPA
    cout << "\n=== GPA Updates ===" << endl;
    cout << s1.getName() << " old GPA: " << s1.getCGPA() << endl;
    s1.updateCGPA(3.6);
    cout << s1.getName() << " new GPA: " << s1.getCGPA() << endl;
    
    return 0;
}