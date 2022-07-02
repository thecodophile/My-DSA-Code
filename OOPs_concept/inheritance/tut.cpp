// virtual base class
#include <iostream>
using namespace std;
class Student
{
protected:
    int rollNumber;

public:
    void getNumber(int a)
    {
        rollNumber = a;
    }
    void putNumber()
    {
        cout << "Roll No-> " << rollNumber << endl;
    }
};

class test : virtual public Student
{
protected:
    /*
    int rollNumber;
    void getNumber(int a)
    {
        rollNumber = a;
    }
    void putNumber()
    {
        cout << "Roll No-> " << rollNumber << endl;
    }
    */
    float part1, part2;

public:
    void getMarks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void putMarks()
    {
        cout << "Marks obtain-> " << endl;
        cout << "Part1-> " << part1 << endl;
        cout << "part2-> " << part2 << endl;
    }
};
class sports : virtual public Student
{
protected:
    /*
     int rollNumber;
     void getNumber(int a)
     {
         rollNumber = a;
     }
     void putNumber()
     {
         cout << "Roll No-> " << rollNumber << endl;
     }
     */
    float score;

public:
    void getScore(float s)
    {
        score = s;
    }
    void putScore()
    {
        cout << "Sports wt-> " << score << endl;
    }
};
class result : public test, public sports
{
    float total;

protected:
    /*
        int rollNumber;
        void getNumber(int a)
        {
            rollNumber = a;
        }
        void putNumber()
        {
            cout << "Roll No-> " << rollNumber << endl;
        }
        */

    // float part1, part2;
    // float score;

public:
    /*
        void getMarks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }
        void putMarks()
        {
            cout << "Marks obtain-> " << endl;
            cout << "Part1-> " << part1 << endl;
            cout << "part2-> " << part2 << endl;
        }
        */
    /*
        void getScore(float s)
        {
            score = s;
        }
        void putScore()
        {
            cout << "Sports wt-> " << score << endl;
        }
        */
    void display()
    {
        total = part1 + part2 + score;
        putNumber();
        putMarks();
        putScore();
        cout << "Total Score-> " << total << endl;
    }
};
int main()
{
    result student01;
    student01.getNumber(678);
    student01.getMarks(30.5, 25.5);
    student01.getScore(7.0);
    student01.display();
    return 0;
}