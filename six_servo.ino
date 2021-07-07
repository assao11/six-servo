#include <Servo.h>


int s1 = 0;

int s4 = 0;

Servo servo_1;

Servo servo_2;

Servo servo_3;

Servo servo_4;

Servo servo_5;

Servo servo_6;

void setup()
{
  servo_1.attach(9, 500, 2500);

  servo_2.attach(5, 500, 2500);

  servo_3.attach(3, 500, 2500);

  servo_4.attach(6, 500, 2500);

  servo_5.attach(10, 500, 2500);

  servo_6.attach(11, 500, 2500);

}

void loop()
{
  s1 = 0;
  for (s1 = 1; s1 <= 135; s1 += 1) {
    servo_1.write(s1);
    servo_2.write(s1);
    servo_3.write(s1);
    delay(15); // Wait for 20 millisecond(s)
  }
  for (s1 = 1; s1 >= 135; s1 -= 1) {
    servo_1.write(s1);
    servo_2.write(s1);
    servo_3.write(s1);
  }

  s4 = 0;
  for (s4 = 1; s4 <= 180; s4 += 1) {
    servo_4.write(s4);
    servo_5.write(s4);
    servo_6.write(s4);
    delay(25); // Wait for 20 millisecond(s)
  }
  for (s4 = 1; s4 >= 180; s4 -= 1) {
    servo_4.write(s4);
    servo_5.write(s4);
    servo_6.write(s4);
  }
}
