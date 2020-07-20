
#include <PID_v1.h>
#include <motor_control.h>
#include <MPU6050.h>
#define MPU6050_ADDRESS 0x68

//Global variables
MPU6050 sensor(SDA, SCL);

//Setup PID controller variables
double setpoint = 0;
double base_motor_speed = 150;
double input;
double output;
double kp = 2;
double ki = 0;
double kd = 0;
PID controller(&input, &output, &setpoint, kp, ki, kd, AUTOMATIC);

void setup() {
  // setup motors
  motor_setup();

  //initialize accelerometer
  sensor.initialize();


  //Set PID parameters
  controller.SetOutputLimits(.5, 1.5);
  controller.SetSampleTime(25);
  controller.SetMode(1);

  //begin serial for debugging
  Serial.begin(9600);

}

void loop() {
  // get distance value from sensor, update input to be distance value
    input = sensor.get_ang_vel('z');
    sensor.update();
   
  
  //compute PID controller once input has been updated
  controller.Compute();
  //set motor power based on output from PID controller
  raw_motor_control(base_motor_speed, base_motor_speed * output); 
  
  
  Serial.print("ang_vel.z "); 
  Serial.print(input); 
  Serial.print(" "); 
  Serial.print("output "); 
  Serial.println(output);
}
 
