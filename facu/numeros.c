int divisiblePor(int num,int divisor){
	return (num % divisor == 0);
}

int noDivisiblePor(int num,int divisor){
	return !(divisiblePor(num,divisor));
}

int divisiblePorUnNumeroPeroNoPorOtro(int num,int divisorSi,int divisorNo){
	return (divisiblePor(num,divisorSi) && noDivisiblePor(num,divisorNo));
}