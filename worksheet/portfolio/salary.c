
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Jayaed Miah
 * ID:
 */

 /*
 You are provided with the following data:
• Salary in £ (UK pounds), which is in the range of £14000-£40000
• National Insurance (NI) rate as a %, which is in the range 0%-10%
• Tax rate as a %, which is in the range 10%-30%
You should calculate the take-home salary after deductions according to the following rules:
• National Insurance is deducted from the total salary
• Tax is deducted from the salary remaining after NI deduction, and only applies to the part
of salary remaining over £12500
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250.0;
   float NI_rate = 0.08;
   float tax_rate = 0.15;

    // calculate the deductions and final take-home salary
   float NI_contribution = salary * NI_rate;
   float salary_after_NI = salary - NI_contribution;

   float taxable_salary = salary_after_NI - 12500.0;
   float tax_contribution = taxable_salary * tax_rate;

   float take_home_salary = salary_after_NI - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £...",salary);
    printf("NI contribution £...",NI_contribution);
    printf("Tax contribution £...",tax_contribution);
    printf("Take home salary £...",take_home_salary);

    return 0;
 }