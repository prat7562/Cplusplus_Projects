/*
#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<sstream>
#include <time.h>
#include<chrono>
#include<algorithm>
#include<map>
*/
#include"score.h"
#include "gtest/gtest.h"
using namespace std;

//TEST CASES FOR ELIGIBILITY
TEST(eligibile_true,score)
{
    /*Student(int u_id,std::string name,std::string m1_name,int m1_score,std::string m2_name,int m2_score,std::string m3_name,int m3_score*/
int i_uid=123;
string name_1="man";
string module_name1="pyth";
int i_marks_m1=98;
string module_name2="c++";
int i_marks_m2=75;
string module_name3="sdlc";
int i_marks_m3=76;
Student s2(i_uid,name_1,module_name1,i_marks_m1,module_name2,i_marks_m2,module_name3,i_marks_m3);
EXPECT_TRUE(s2.check_eligibility());
int ii_uid=123;
string iname_1="man";
string imodule_name1="pyth";
int ii_marks_m1=91;
string imodule_name2="c++";
int ii_marks_m2=43;
string imodule_name3="sdlc";
int ii_marks_m3=83;
Student s1(ii_uid,iname_1,imodule_name1,ii_marks_m1,imodule_name2,ii_marks_m2,imodule_name3,ii_marks_m3);
EXPECT_TRUE(s1.check_eligibility());
int u_uid=123;
string uname_1="man";
string umodule_name1="pyth";
int ui_marks_m1=93;
string umodule_name2="c++";
int ui_marks_m2=49;
string umodule_name3="sdlc";
int ui_marks_m3=73;
Student s3(u_uid,uname_1,umodule_name1,ui_marks_m1,umodule_name2,ui_marks_m2,umodule_name3,ui_marks_m3);
EXPECT_TRUE(s3.check_eligibility());
}
TEST(eligible_flase,False)
{
  int i_uid=123;
string name_1="man";
string module_name1="pyth";
int i_marks_m1=41;
string module_name2="c++";
int i_marks_m2=41;
string module_name3="sdlc";
int i_marks_m3=41;
Student s2(i_uid,name_1,module_name1,i_marks_m1,module_name2,i_marks_m2,module_name3,i_marks_m3);
EXPECT_FALSE(s2.check_eligibility());
int ii_uid=123;
string iname_1="man";
string imodule_name1="pyth";
int ii_marks_m1=41;
string imodule_name2="c++";
int ii_marks_m2=43;
string imodule_name3="sdlc";
int ii_marks_m3=32;
Student s1(ii_uid,iname_1,imodule_name1,ii_marks_m1,imodule_name2,ii_marks_m2,imodule_name3,ii_marks_m3);
EXPECT_FALSE(s1.check_eligibility());
int u_uid=123;
string uname_1="man";
string umodule_name1="pyth";
int ui_marks_m1=4;
string umodule_name2="c++";
int ui_marks_m2=4;
string umodule_name3="sdlc";
int ui_marks_m3=7;
Student s3(u_uid,uname_1,umodule_name1,ui_marks_m1,umodule_name2,ui_marks_m2,umodule_name3,ui_marks_m3);
EXPECT_FALSE(s3.check_eligibility());  
}


//TESTCASES FOR AVERAGE
TEST(average,score)
{
    /*Student(int u_id,std::string name,std::string m1_name,int m1_score,std::string m2_name,int m2_score,std::string m3_name,int m3_score*/
int uid=123;
string name_1="man";
string module_name1="pyth";
int marks_m1=98;
string module_name2="c++";
int marks_m2=75;
string module_name3="sdlc";
int marks_m3=76;
Student s1(uid,name_1,module_name1,marks_m1,module_name2,marks_m2,module_name3,marks_m3);
EXPECT_EQ(83,s1.avg_sum());
int uid1=123;
string iname_1="man";
string imodule_name1="pyth";
int ii_marks_m1=80;
string imodule_name2="c++";
int ii_marks_m2=43;
string imodule_name3="sdlc";
int ii_marks_m3=66;
Student s2(uid1,iname_1,imodule_name1,ii_marks_m1,imodule_name2,ii_marks_m2,imodule_name3,ii_marks_m3);
EXPECT_EQ(63,s2.avg_sum());
int uid2=123;
string uname_1="man";
string umodule_name1="pyth";
int ui_marks_m1=30;
string umodule_name2="c++";
int ui_marks_m2=49;
string umodule_name3="sdlc";
int ui_marks_m3=73;
Student s3(uid2,uname_1,umodule_name1,ui_marks_m1,umodule_name2,ui_marks_m2,umodule_name3,ui_marks_m3);
EXPECT_NE(60,s3.avg_sum());

}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(); 
    return RUN_ALL_TESTS();
}







 
