

#ifndef __SCORE_H__
#define __SCORE_H__
#include<string.h>
#include<vector>
#include<map>
using namespace std;
class module
{ 
    public:
   
    string m1_name;
    string m2_name;
    string m3_name;
    int score_m1;
    int score_m2;
    int score_m3;

    public:
    module(){}
    module(string t_m1_name,string t_m2_name,string t_m3_name,int t_score_m1,int t_score_m2,int t_score_m3):m1_name(t_m1_name),m2_name(t_m2_name),m3_name(t_m3_name),score_m1(t_score_m1),score_m2(t_score_m2),score_m3(t_score_m3){}
};
class Student:public module
{
public:
int id;
string t_name;
string eligible;
string st_1,st_2,st_3;

int average=0;
public:
Student(){}
Student(int u_id,string name,string m1_name,int m1_score,string m2_name,int m2_score,string m3_name,int m3_score):id(u_id),t_name(name),module(m1_name,m2_name ,m3_name,m1_score,m2_score,m3_score){}
int avg_sum();
void dis_module_status();
bool operator<(Student &);

bool check_eligibility();

void display();
};
void add_eligibility(std::vector<Student>&);
int get_n_r();
void print(vector<Student>&);
void print_top_ten(vector<Student>&);
void average(vector<Student>&);
void ini_student(vector<Student>&);
void print_module_status(vector<Student>&);
void find_ps(long ,map<int,Student> );
void init_map(vector<Student>&,map<int,Student>&);
std::ostream& operator<<(ostream & ,Student& );
#endif
