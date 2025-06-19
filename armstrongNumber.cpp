// Gives power value of a number
int pow(int a, int b) {
    int result = 1;
    for(int i = 1; i <= b; i++){
        result *= a;
    }
    return result;
}
// Checks whether a number is armstrong number or not
bool armStrongNumber(int number){
    int numCopy = number;
    int temp = number;
    int count = 0;
    int sum = 0;
    while(temp > 0){
        temp /= 10;
        count++;
    }
    while(number > 0){
        int digit = number % 10;
        sum += pow(digit, count);
        number /= 10;
    }
    return numCopy == sum;
}