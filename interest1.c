#include <stdio.h>

int main ()
{
  float principal, rate, time, simpleInterest;

  // Input principal amount, rate, and time
  printf ("Enter the principal amount: ");
  scanf ("%f", &principal);

  printf ("Enter the rate of interest: ");
  scanf ("%f", &rate);

  printf ("Enter the time period (in years): ");
  scanf ("%f", &time);

  // Calculate simple interest
  simpleInterest = (principal * rate * time) / 100.0;

  // Output the result
  printf ("Simple Interest: %.2f\n", simpleInterest);

  return 0;
}
