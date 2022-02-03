int onpush=13; //turns the motor on

int offpush=2; //turn the motor off

int motor=6;

int in1=8;// input 1

int in2=9;// input 2

int onpushstate;

int offpushstate;

int varout=0;

int y=0;

void setup() {

//  put your setup code here, to run once: pinMode(onpush,INPUT); pinMode(offpush,INPUT); pinMode(motor,OUTPUT); pinMode(in1,OUTPUT); pinMode(in2,OUTPUT); Serial.begin(9600);

} 

void loop() {

//  put your main code here, to run repeatedly: onpushstate=digitalRead(onpush); offpushstate=digitalRead(offpush);
 if(onpushstate==HIGH && y==0){

for( int i=0;i<=254;i++){ varout=varout+1; analogWrite(motor,varout); digitalWrite(in1,HIGH); digitalWrite(in2,LOW); delay(2000/255); Serial.println(varout);

}
y=1;
}
if(offpushstate==HIGH && y==1){
 for(int i=254;i>=0;i--){ varout=varout-1; analogWrite(motor,varout); digitalWrite(in1,HIGH); digitalWrite(in2,LOW); delay(2000/255); Serial.println(varout);
}
y=0;
}
}
