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
    printf("Your letter grade for CMPSC 131 is F.");
  }
  if(60<grade && grade<=70){
    printf("Your letter grade for CMPSC 131 is D.");
  }
  if(70<grade && grade<=77){
    printf("Your letter grade for CMPSC 131 is C.");
  }
  if(77<grade && grade<=80){
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  if(80<grade && grade<=83){
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  if(83<grade && grade<=87){
    printf("Your letter grade for CMPSC 131 is B.");
  }
  if(83<grade && grade<=90){
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  if(90<grade && grade<93){
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  if(93<=grade && grade<=99){
    printf("Your letter grade for CMPSC 131 is A");
  }
  if(99<grade && grade<=100){
    printf("Your letter grade for CMPSC 131 is A+");
  }
  return 0;
}