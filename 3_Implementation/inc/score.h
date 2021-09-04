

#ifndef __SCORE_H__
#define __SCORE_H__
#include<string.h>
#include<vector>
using namespace std;
class module
{ 
    public:
   
    std::string m1_name;
    std::string m2_name;
    std::string m3_name;
    int score_m1;
    int score_m2;
    int score_m3;
    public:

    module(string t_m1_name,string t_m2_name,string t_m3_name,int t_score_m1,int t_score_m2,int t_score_m3):m1_name(t_m1_name),m2_name(t_m2_name),m3_name(t_m3_name),score_m1(t_score_m1),score_m2(t_score_m2),score_m3(t_score_m3){}
};
class Student:public module
{
public:
int id;
std::string t_name;
std::string eligible;


int average=0;
public:
Student(int u_id,std::string name,std::string m1_name,int m1_score,std::string m2_name,int m2_score,std::string m3_name,int m3_score):id(u_id),t_name(name),module(m1_name,m2_name ,m3_name,m1_score
,m2_score,m3_score){}
int avg_sum();

bool operator<(Student &);

bool check_eligibility();

void display();
};
void add_eligibility(std::vector<Student>&);
#endif