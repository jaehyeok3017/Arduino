// 아두이노는 무엇일까
/* 오픈소스로 만들어진 하드웨어 혹은 여러 가지를 만들기 위한 것 
IDE환경에서 예제를 직접 제공해주기도 하며, 보드 종류에도 우노부터 시작해서 여러 가지가 존재함*/


// 아두이노에서 출력하기
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}


//아두이노와 통신해서 출력을 시작한다
void loop() {
  
  Serial.println("Hello, World!"); // Serial에서 println 명령을 수행함
  delay(1000); // delay를 통해 출력 간 간격을 1초로 정해준다 = 1초에 한 번씩 출력함
}
