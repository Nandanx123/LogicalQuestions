// Checks whether the number is perfect or not
bool perfectNumber(int number){
    int sum = 0;
    for(int i = 1; i <= number/2; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum == number;
}