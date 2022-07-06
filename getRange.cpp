/*************************************************************************************************
* Author: Davis Mojela                                                                           * 
* Date: 27-Jul-2019 23h05                                                                        *
* Purpose: Given a sorted array A, with possibly duplicated elements, find the indeces of the    *
*          first and last occurances of a target element X, return -1 if the target is not found *                                                    *
*************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
int age;
public:
Student(int a){
age = a;
}
};

int main()
{
    //int A[] = {1,3,3,5,7,8,9,9,9,15};
    //int B[] = {100,150,150,153};
cout<<"Addition using pointers"<<endl<<endl;
int* a = new int(1);
int* b = new int(2);

int temp = *a + *b;

int* c = &temp;

cout<<*a<<" + "<<*b<<" = "<<*c<<endl;

cout<<"Size of ptr a: "<<sizeof(a)<<endl;
cout<<"Size of ptr b: "<<sizeof(b)<<endl;
cout<<"Size of ptr c: "<<sizeof(c)<<endl;

cout<<endl;

int A = 1;
int B = 2;

int C = A + B;

cout<<A<<" + "<<B<<" = "<<C<<endl;

cout<<"Size of var A: "<<sizeof(A)<<endl;
cout<<"Size of var B: "<<sizeof(B)<<endl;
cout<<"Size of var C: "<<sizeof(C)<<endl;

Student* std = new Student(12);

cout<<sizeof(std)<<endl;
}
