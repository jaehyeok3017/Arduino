#include <Wire.h> 
#include <LiquidCrystal_I2C.h> // 라이브러리 불러오기
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2); // 초기화해줌 - 16 X 2 크기로 되는 LCD이기에

void setup()
{
	lcd.begin();
	lcd.backlight();
  lcd.clear(); // 초기화
	lcd.print("Hello, world!"); // 출력
}

void loop()
{
	lcd.setCursor(5,1); // 위치를 지정해준다 ( 5번째 - 1번째 )
  lcd.print("ABC"); // 출력
}
