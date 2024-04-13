
const int ir= 3;
const int led = 13;
int ir_state =0;

void setup() {
pinMode(ir,INPUT);
pinMode(led,OUTPUT); 
}

void loop() {
ir_state = digitalRead (ir);
if(ir_state == 1){
  digitalWrite(led,HIGH);
  }
else{
  digitalWrite(led,LOW);
 }


}
