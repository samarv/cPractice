#include <stdio.h>
#include <iostream>
using namespace std;

/* 
    Define the Person struct by specifying the fields that make up the
    Person type. Don't forget to specify the type of each field. A 
    Person should have the fields `name`, `age`, `height`, and `weight`.
*/
class Person
{
public:
    string name;
    int age;
    int height;
    int weight;
    // Person(string name){
    //     name = name;
    // }
    void createPerson(string name, int age, int height, int weight);
};

void Person::createPerson(string n, int a, int h, int w)
{
    age = a;
    name = n;
    height = h;
    weight = w;
}

int main(void)
{
    Person Samar;
    Samar.createPerson("samar", 21, 170, 60);
    cout << "Samar's Age "
         << Samar.age << "\n";
    return 0;
}
