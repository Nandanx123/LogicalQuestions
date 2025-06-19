// Checks factorial of a number
int factorial(int number){
    int fact = 1;
    for(int i = 1; i <= number; i++){
        fact *= i;
    }
    return fact;
    
}
// Checks whether the number is strong number or not
bool strongNumber(int number){
    int numCopy = number;
    int sum = 0;
    while(number != 0){
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    return sum == numCopy;
    
}