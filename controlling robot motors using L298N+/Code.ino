int Enable_button_1=13 ,Turn_right_1=12,Turn_left_1=11,Enable_button_2=10 ,Turn_right_2=9,Turn_left_2=8;
void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
}

void loop() {

digitalWrite(Enable_button_1,HIGH);  //For first motor
digitalWrite(Turn_right_1,LOW);
digitalWrite(Turn_left_1,HIGH);


digitalWrite(Enable_button_2,HIGH); //For second motor
digitalWrite(Turn_right_2,LOW);
digitalWrite(Turn_left_2,HIGH);

} 
