// 아두이노에서 신호를 제어하기 (1) -- 예제에서 Blink 사용

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); // 신호를 주는 것
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // (1) 아두이노 보드 내 LED를 켜준다
   delay(1000);                       // (2) 1초를 기다린다
   digitalWrite(LED_BUILTIN, LOW);    // (3) 아두이노 보드 내 LED를 꺼준다
   delay(1000);                       // (4) 1초를 기다린다
}
