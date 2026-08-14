#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest, amount;
    
    // Read input
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    // Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;
    
    // Calculate Compound Interest
    // Formula: A = P * (1 + R/100)^T
    // CI = A - P
    amount = principal * pow(1 + rate / 100, time);
    compoundInterest = amount - principal;
    
    // Print results
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    
    return 0;
}
