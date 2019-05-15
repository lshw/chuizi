#define LED 13
#define KEY 6
#define DING A5
void setup() {
pinMode(LED,OUTPUT); //LED灯
pinMode(KEY,INPUT_PULLUP); //输入，47K上拉
pinMode(DING,OUTPUT); //电铃输出
digitalWrite(LED,LOW); //关LED
digitalWrite(DING,LOW); //关电铃

}

void loop() {
  digitalWrite(LED,HIGH); //开led
  digitalWrite(DING,HIGH);//开电铃
  delay(1000);//延迟1秒
  digitalWrite(LED,LOW);//关LED
  digitalWrite(DING,LOW);//关电铃
  delay(5000);//延迟2秒
}

