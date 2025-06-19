// Check if two numbers are equal
bool checkIfNumsAreEqual(int n1, int n2){
    if((n1 ^ n2) == 0){
        return 1;
    }
    return 0;
}