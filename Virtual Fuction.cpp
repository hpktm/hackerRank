/*
This problem is to get you familiar with virtual functions. Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person.

The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor.

The class Student should have two data members: marks, which is an array of size  and cur_id. It has two member functions: getdata and putdata. The function getdata should get the input from the user: the name, age, and the marks of the student in  subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student.

For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from .

Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.

Note: Expand the main function to look at how the input is being handled.

Input Format

The first line of input contains the number of objects that are being created. If the first line of input for each object is , it means that the object being created is of the Professor class, you will have to input the name, age and publications of the professor.

If the first line of input for each object is , it means that the object is of the Student class, you will have to input the name, age and the marks of the student in  subjects.


*/

class Person
{
public:
    Person(){}
    Person(string name, int age, int id) : name(name)
                                         , age(age)
                                         , id(id)
    {}
    
    virtual void getdata()
    {
    }
        
    virtual void putdata() const   
    {
        
    }
    
    string name;
    int age;
    int id;
};

class Professor : public Person
{
    public:
   
    Professor(): Person() {}
    void getdata()    
    {
        cin >> name >> age >> publications;
        id = Professor::next_id;
        ++Professor::next_id;
    }
    
    void putdata() const
    {
        cout <<  name << " " << age << " " << publications << " " << id << endl;
    }
    
    static int next_id;
    int publications;
    
};

class Student : public Person
{
    public:
    
    Student(): Person() {}

    void getdata()    
    {
        cin >> name >> age;
        marks.clear();
        for (int i = 0; i < 6; ++i) {
            int x;
            cin >> x;
            marks.push_back(x);
        }
        id = Student::next_id;
        ++Student::next_id;
    }
    
    void putdata() const
    {
        int s = 0;
        for (int i = 0; i < marks.size(); ++i) {
            s += marks[i];
        }
        cout <<  name << " " << age << " " << s << " " << id << endl;
    }
    
    static int next_id;
    vector<int> marks;
};

int Student::next_id = 1;
int Professor::next_id = 1;
