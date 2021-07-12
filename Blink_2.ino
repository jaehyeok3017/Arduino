// 아두이노에서 신호를 제어하기 (2)

int LED = 13; // LED라는 변수를 선언함

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED, OUTPUT); // 신호를 주는 것
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, 1);   // 13이라는 신호를 1만큼 준다 (켜준다)
  delay(1000);           // 1초 기다림
  digitalWrite(LED, 0);  // 13이라는 신호를 0만큼 준다 (꺼준다)
  delay(1000);          // 1초 기다림
}
