int a,b,c,d,e,f,g,h;
//declaring input pin variables.
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