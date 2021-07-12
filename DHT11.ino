// Modified by John 2015 11 03
// MIT license

#include "DHT.h" // 라이브러리를 불러와줌
#define DHTPIN 2 // DHTPIN 을 2로 지정함
#define DHTTYPE DHT11 // TYPE를 DHT11으로 지정 -- 11도 있고 22도 있기에
DHT dht(DHTPIN, DHTTYPE); // 사용할 수 있도록 설정해주는 것

void setup() {
  Serial.begin(9600); // 시작
}
void loop() {
  delay(2000); // 2초 기다림
  int h = dht.readHumidity(); // 습도 측정
  int t = dht.readTemperature(); // 온도 측정
  Serial.print("Humidity: "); // 출력
  Serial.print(h); // 습도 변수 출력
  Serial.print(" %\t"); // 다음 줄로 변경함
  Serial.print("Temperature: "); // 출력
  Serial.print(t); // 온도 변수 출력
  Serial.println(" C"); // 단위 출력
}
