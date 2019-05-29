#include <stdio.h>
#include <string.h>
#include "student.h"

struct Student {
  char first[50];
  char last[50];
  char age[50];
  char id[50];
  int student;
};

void printStudent(struct Student* student)
{
  char students[50];
  printf("Enter your first name");
  scanf("%0s",student);
  printf("Enter your last name");
  scanf("%1s",student);
  printf("Enter your age");
  scanf("%2s",student);
  printf("Enter your Student ID");
  scanf("%3s",student);

  printf("First Name: %c, Last Name: %c, Age: %c, Student ID: %c\n", students[0], students[1], students[2], students[3]);
}

int main
{

}
