// Author: Abbey Kato amk7306@psu.edu
// Collaborator: ZhihongJiang  zbj5088@psu.edu
// Collaborator: Prajnay Kataria pmk5429@psu.edu
// Collaborator: Travis Stauffer tcs5399@psu.edu
// Section: 1
// Breakout: 12
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double  grade = atof(readline("Enter your CMPSC 131 grade: "));
  if(grade<60){
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  if(60<=grade && grade<70){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  if(70<=grade && grade<=77){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  if(77<grade && grade<80){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  if(80<=grade && grade<83){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  if(83<=grade && grade<87){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  if(87<=grade && grade<90){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  if(90<=grade && grade<93){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  if(93<=grade && grade<100){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  if(grade==100){
    printf("Your letter grade for CMPSC 131 is A+.\n");
  }
  return 0;
}