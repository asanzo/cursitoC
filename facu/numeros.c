int divisiblePor(int num,int divisor){
	if(num % divisor == 0){
		return 1;
	}else{
		return 0;
	}	
}

int noDivisiblePor(int num,int divisor){
	return !(divisiblePor(num,divisor));
}

int divisiblePorUnNumeroPeroNoPorOtro(int num,int divisorSi,int divisorNo){
	return (divisiblePor(num,divisorSi) && noDivisiblePor(num,divisorNo));
}