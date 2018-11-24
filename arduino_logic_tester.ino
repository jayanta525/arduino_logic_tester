int a,b,c,d,e,f,g,h;
//declaring OUPUT pin variables.
void setup(){
	Serial.begin(115200);
	Serial.println("Arduino Based Digital Logic Tester:");
	Serial.println("Choose Logic Gate:");
	Serial.println("\t1. AND \n\t2. OR \n\t3. NOT \n\t4. NAND \n\t5. NOR \n\t6. XOR");
}
void loop(){
	if(Serial.available()>0){
		input=Serial.read(DEC);
	}
}
void setmode(){
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
}
void andgate(){
	setmode();
}
void notgate(){
	setmode();
}
void orgate(){
	setmode();
}
void nandgate(){
	setmode();
}
void norgate(){
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
	pinMode(,OUPUT);
	pinMode(,OUPUT);
	pinMode(,INPUT);
}
void xorgate(){
	setmode();
}