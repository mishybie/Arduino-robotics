//motor 1 variables
int ena=25;
int in1=26;
int in2=27;

//motor 2 varibles
int enb=14;
int in3=32;
int in4=33;

void forward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

  analogWrite(ena,150);
  analogWrite(enb,150);
}


void reverse({
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  analogWrite(ena,150);
  analogWrite(enb,150);
})


void setup() {
  // put your setup code here, to run once:


pinmode (ena,OUTPUT);
pinmode (in1,OUTPUT);
pinmode (in2,OUTPUT);
pinmode (enb,OUTPUT);
pinmode (in3,OUTPUT);
pinmode (in4,OUTPUT);

ledcAttachpin(ena,2);
ledcAttachpin(enb,2);
ledcSetup(0,1000,8);

}


void loop() {
  // put your main code here, to run repeatedly:
forward();

delay(5000);

reverse();

delay(5000);
}
