int x;
void setup() {
Serial.begin(115200);
Serial.setTimeout(1);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}
void loop() {
x = Serial.readString().toInt();
if( x == 11) {
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
delay(5000);
Serial.print(12);
}
else
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
}
