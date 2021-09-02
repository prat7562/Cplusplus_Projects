# Requirements
## Introduction
Lot of organisations find it difficult to keep track of their students/interns who do a lot of courses and calculate their scores at the end. To keep a track of lot of students is difficult, so we have created a simple application to keep track of all the students/inters who enrol for their courses and track their scores. Our application keeps track of all the students using their PS number(pay sheet) and calculate their grades based on their scores that they got on different courses. We also keep track of their courses through the courses id and name and finally we let them know whether they are eligible for GENESIS or not.
## Research:
Our application uses various concepts of C++ programming language like Object oriented programming and various standard template libraries like vectors, list, maps, set etc.
Using most of these concepts we try to create a scorecard of the candidates of STEPIN and check whether they are eligible for GENESIS or not. All the data about the candidates are put in a CSV file and from this file we take the data and do various operations and give the result.
## Defining our system:
Our application takes all the information of the students from a CSV file and using these data we do various operations to find the average score and grades of the students and check whether he/she is eligible for GENESIS or not. We use concepts like OOPS and STL to do the operations .
## State of Art
### Cost
* Production cost depends upon total opreation period of development.
* Application (Required to develop a code) cost is minimal in range.
* Wages for Developer who updates application.
## Features
* Our application gives overall candidates course results and eligible status.
## High Level Requirements:
|ID No|Requirement|Category| Status(Implemented/Future)|
|-----|-----------|--------|--------------------------|
|HLR01|To display the genesis score card of all modules.|Technical|Implemented|
|HLR02|To display score and details of each module.|Technical|Implemented|
|HLR03|To display student’s average score of all modules for GENESIS.|Technical|Implemented|
|HLR04|The system should be able to analyze student’s performance based on different criteria required by the user.|Technical|Implemented|
|HLR05|The system must be able to display list of all students who are eligible for GENESIS batch.|Technical|Implemented|
## Low Level Requirements:
|ID No|Description|HLR ID No|Category| Status(Implemented/Future)|
|-----|-----------|---------|---------|-------------------------|
|LLR01|Display Employee details- PS number, Email-ID, name in the score card.|HLR01|Technical|Implemented|
|LLR02|Display the course details – course ID, course name, score of each module in the score card.|HLR01|Technical|Implemented|
|LLR03|To calculate average score of all modules and display if student has met eligibility criteria or not and display actual cut-off score.|HLR03|Technical|Implemented|
|LLR04|The system must be able to sort the students list based on the average GENESIS performance. |HLR04|Technical|Implemented|
|LLR05| The system must be able to display the top 10 performers of the batch.|HLR04|Technical|Implemented|
|LLR06|The user must be able to find the details of students who are above average performers.|HLR04|Technical|Implemented|
|LLR07|The system must be able to display the details of students who didn’t meet GENESIS eligibility criteria.|HLR05|Technical|Implemented|
