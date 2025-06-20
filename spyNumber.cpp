// Checks whether the number is spy number or not
bool isSpyNumber(int number){
    int sumOfDigits = 0;
    int prodOfDigits = 1;
    while(number > 0){
        int digit = number % 10;
        sumOfDigits += digit;
        prodOfDigits *= digit;
        number /= 10;
    }
    return sumOfDigits == prodOfDigits;
}