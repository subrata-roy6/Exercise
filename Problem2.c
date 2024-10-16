//.
//
/*   2. Enum for Error Codes
Define an enum for common error codes (e.g., SUCCESS, OUT_OF_MEMORY, INVALID_ARGUMENT, etc.).
Write a function that simulates a process and
returns an appropriate error code using the enum.
   */
#include<stdio.h>
typedef enum {
   SUCCESS, OUT_OF_MEMORY, INVALID_ARGUMENT, INVALID_OPERATION, INVALID_STATE,UNKNOWN_ERROR
}ErrorCode;
ErrorCode SimulateProblem(int argument) {
   if (argument < 0) {
      return INVALID_ARGUMENT;
   }
   else if (argument == 1) {
      return SUCCESS;
   }
   else if (argument == 2) {
      return OUT_OF_MEMORY;
   }
   else if (argument == 3) {
      return INVALID_OPERATION;
   }
   else if (argument == 4) {
      return INVALID_STATE;
   }
   return SUCCESS;
};

   void main() {
      int test[]={-1,2,4,5,3};
      char* testMessage[]={
         "SUCCESS", "OUT_OF_MEMORY", "INVALID_ARGUMENT", "INVALID_OPERATION", "INVALID_STATE","UNKNOWN ERROR"
      };
      for(int i = 0; i < sizeof(test)/sizeof(test[0]); i++) {
         ErrorCode result = SimulateProblem(test[i]);
         printf("Test case: %d = %s\n ", test[i], testMessage[result]);
      }
   }

