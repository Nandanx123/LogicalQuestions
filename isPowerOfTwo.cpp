// Checks whether the number is power of 2
int isPowerOfTwo(int number){ 
    int ans = 0;
    while(number > 0){
        int num = number & 1;
        if(num == 1){
            ans++;
        }
        number >>= 1;
    }
    return ans == 1;
}

