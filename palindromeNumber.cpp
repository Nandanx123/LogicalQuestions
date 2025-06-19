// Checks whether the number is palindrome
bool palindrome(int number){
    int numCopy = number;
    int revNum = 0;
    while(number != 0){
        int digit = number % 10;
        revNum = revNum*10 + digit;
        number /= 10;
        
    }
    if(revNum == numCopy){
        return true;
    }
    return false;
}