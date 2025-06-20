// Checks whether the number is automorphic or not
int square(int number){
    return number * number;
}
int digit(int number){
    int digitCount = 0;
    while(number != 0){
        int digit = number % 10;
        digitCount++;
        number /= 10;
    }
    return digitCount;
}
bool isAutoMorphic(int number){
    int num = square(number);
    int numCopy = number;
    int digitCount = digit(number);
    int digSum = 0;
    int pow = 1;
    for(int i = 0; i < digitCount; i++){
        int numDigits = num % 10;
        digSum += numDigits*pow;
        pow *= 10;
        num /= 10;
    }
    if(numCopy == digSum){
        return true;
    }return false;

}