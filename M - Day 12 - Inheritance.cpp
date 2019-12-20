#include <iostream>
#include <vector>

using namespace std;


class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }

};

class Student :  public Person{
private:
    vector<int> testScores;
public:
    /*
    *   Class Constructor
    *
    *   Parameters:
    *   firstName - A string denoting the Person's first name.
    *   lastName - A string denoting the Person's last name.
    *   id - An integer denoting the Person's ID number.
    *   scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
    {
        testScores = scores;
    }
    /*
    *   Function Name: calculate
    *   Return: A character denoting the grade.
    */
    // Write your function here
    char calculate(){
        double average=0;
        for (auto i : testScores){
            average+=i;
        }
        average = average/static_cast<double> (testScores.size());
        char grade;
        if (average<40){
            grade = 'T';
        }else if (average>=40 && average<55){
            grade = 'D';
        }else if (average>=55 && average<70){
            grade = 'P';
        }else if (average>=70 && average<80){
            grade = 'A';
        }else if (average>=80 && average<90){
            grade = 'E';
        }else{
            grade = 'O';
        }
        return grade;
    }
};

int main() {