int led_vermelho=8; 
int led_amarelo=9;
int led_verde=10;

void setup() {
  pinMode(led_vermelho,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_verde,OUTPUT);
}

void loop() {
 digitalWrite(led_vermelho,HIGH);
 digitalWrite(led_amarelo,LOW);
 digitalWrite(led_verde,LOW);
 delay(7000);

 digitalWrite(led_vermelho,LOW);
 digitalWrite(led_amarelo,LOW);
 digitalWrite(led_verde,HIGH);
 delay(9000);

 digitalWrite(led_vermelho,LOW);
 digitalWrite(led_amarelo,HIGH);
 digitalWrite(led_verde,LOW);
 delay(2000);
 
}