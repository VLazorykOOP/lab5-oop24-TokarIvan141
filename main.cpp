#include <iostream>
#include "Task1/Person.h"
#include "Task1/Student.h"
#include "Task2/Window.h"
#include "Task2/TitledWindow.h"
#include "Task2/ButtonWindow.h"
#include "Task 3/GraduateStudent.h"

using namespace std;

void task1()
{
    srand(time(0));

    cout << "=============Task 1=============" << endl;

    Person p("Alice", "Smith", "Marie", 30, 60.5);
    p.print();

    cout << "------------------------" << endl;

    Student s1("Emily", "Brown", "Anne", 17, 50.2, 11);
    s1.print();

    cout << "------------------------" << endl;

    Student s("John","Doe","Michael",rand() % 10 + 15,rand() % 20 + 40,rand() % 12 + 1);
    s.print();

    cout << "------------------------" << endl;
}

void task2()
{
    cout << "=============Task 2=============" << endl;

    Window w(200, 150);
    w.display();

    cout << "------------------------" << endl;

    TitledWindow tw(300, 200, "Settings");
    tw.display();

    cout << "------------------------" << endl;

    ButtonWindow bw(400, 300, "Confirmation", "Submit");
    bw.display();

    cout << "------------------------" << endl;
}

void task3()
{
    cout << "=============Task 3=============" << endl;

    GraduateStudent gs1("Anna", "Brown", "Lee", 24, 58.0, 5, "Deep Learning in Medicine");
    gs1.print();

    GraduateStudent gs2;
    cout << "Enter graduate student data (fn ln mn age weight grade thesisTopic):" << endl;
    cin >> gs2;
    cout << gs2 << endl;
}


int main()
{
    srand(time(nullptr));

    int choice;
    do
    {
        cout << "\n============ Main Menu ============" << endl;
        cout << "1 - Task 1" << endl;
        cout << "2 - Task 2" << endl;
        cout << "3 - Task 3" << endl;
        cout << "0 - Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 0: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again\n";
        }
    } while (choice != 0);

    return 0;
}

