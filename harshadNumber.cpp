// Checks whether the number is Harshad number or not
bool isHarshadNumber(int number){
    int sum = 0;
    int numCopy = number;
    while(number != 0){
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return (numCopy % sum) == 0;
}