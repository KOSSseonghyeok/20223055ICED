#define PIN_LED 7
unsigned int cnt;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  cnt = 0;
  }


void loop() {
  // put your main code here, to run repeatedly:
  if(cnt == 0) {
    digitalWrite(PIN_LED, 0);
    delay(1000);
  }
  while(cnt<5) { 
     digitalWrite(PIN_LED, 1);
     delay(100);
     digitalWrite(PIN_LED, 0);
     delay(100);
     cnt += 1;}
  if(cnt >= 5){
     digitalWrite(PIN_LED, 1);
    } // infinite loop
}
