// Reverses an integer
int reverseInteger(int number){
    int revNum = 0;
    while(number > 0){
        int digits = number % 10;
        number /= 10;
        revNum = revNum*10 + digits;
    }
    return revNum;
}