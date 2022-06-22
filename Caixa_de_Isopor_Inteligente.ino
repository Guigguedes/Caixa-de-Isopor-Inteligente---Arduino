#include <LiquidCrystal.h>
#include <Servo.h>

Servo myServo;

int pressionado; 
int botao=3;
int estado=0;
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

void setup(){

lcd.begin(16,2);
myServo.attach(9);
myServo.write(0); 
pinMode(botao, INPUT_PULLUP);

}
void loop(){
pressionado=digitalRead(botao);
 delay(200);
  if((estado==0)&&(pressionado==0)){
      myServo.write(75);
      estado==1;
      delay(5000);
      myServo.write(0);
      estado==0;

lcd.clear();
lcd.home();
lcd.print("Agua");
delay(100);
lcd.print(" Coca");
delay(100);
lcd.print(" LOBAO");
delay(100);
lcd.setCursor(0,2);
lcd.print(" Aperte o botao");
delay(500);
  }
}
