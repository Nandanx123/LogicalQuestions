// Checks whether the number is neon number or not
bool isNeonNumber(int number){
    int numCopy = number;
    int squareOfNumber = number * number;
    int sum = 0;
    while(squareOfNumber > 0){
        int digit = squareOfNumber % 10;
        sum += digit;
        squareOfNumber /= 10;
    }
    return numCopy == sum;
}