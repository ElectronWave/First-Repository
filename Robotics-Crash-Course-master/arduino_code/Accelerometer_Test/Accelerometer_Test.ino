#include <MPU6050.h>

#define SDA 4
#define SCL 5

MPU6050 sensor(SDA, SCL);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  sensor.initialize();
  sensor.update();

}

void loop() {

  sensor.update();-
  Serial.println(sensor.get_ang_vel('z'));
  delay(100);
  // put your main code here, to run repeatedly:

}
