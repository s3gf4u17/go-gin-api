int isPalindrome(int x){
	// negative number cannot be a palindrome because of the - sign
	if (x < 0) return 0;

	// long to avoid overflow
	long int y = 0;

	// so we can change x value and still compare it with reversed
	int temp = x;

	while (temp) {
		y = y*10+temp%10;
		temp/=10;
	}

	return (y==x);
}