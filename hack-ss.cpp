#include <vector>
#include <sstream>
#include <iostream>
struct Student
{
    int age;
    std::string s;
    std::string s2;
    int std;
};
class Student
{
private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(std::string fn)
    {
        first_name = fn;
    }
    std::string get_first_name()
    {
        return first_name;
    }
    void set_last_name(std::string ln)
    {
        last_name = ln;
    }
    std::string get_last_name()
    {
        return last_name;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    int get_standard()
    {
        return standard;
    }
    std::string to_string()
    {
        std::stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};
class Solution
{
public:
    static std::vector<int> parseInt(std::string str)
    {
        std::stringstream ss(str);
        std::vector<int> ans;
        char ch;
        int tmp;
        while (ss >> tmp)
        {
            ans.push_back(tmp);
            ss >> ch;
        }
        return ans;
    }
};