// static int count; // makes count not externable - variable exists only in this file

int incr(){
	// static int count; <- static initializes with 0 (normally initialize has to be a constant)
	static int count; // visible only in function - created only once (its not being destroyed)
	count = count + 1;
	return count;
}