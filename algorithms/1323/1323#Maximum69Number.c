int maximum69Number (int num){
	int max = num;
	int divider=10;
    while(1){
        if (num/(divider/10)==0) break;
        
        if((num%divider)/(divider/10)==6) max = num + (3*divider/10);
        
        divider*=10;
    }
    return max;
}