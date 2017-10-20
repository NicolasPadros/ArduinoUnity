

const int echoPin1 = 1; // Echo Pin connected to sensor1
const int trigPin1 = 2; // Trigger Pin connected to sensor1
long duration1, distance1, duration2, distance2; // Used to calculate distance


const int echoPin2 = 3;
const int trigPin2 = 4;



void setup() {
  Serial.begin(115200);

  // Set our pins
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin2, OUTPUT);  

}

void loop() {
 /*
        // Calculate the distance of the ultrasonic sensor
        // Roughly http://playground.arduino.cc/Main/UltrasonicSensor
        digitalWrite(trigPin1, LOW);
        //digitalWrite(trigPin2, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin1, HIGH);
        //digitalWrite(trigPin2, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin1, LOW);
        //digitalWrite(trigPin2, LOW);
        duration1 = pulseIn(echoPin1, HIGH);
        //duration2 = pulseIn(echoPin2, HIGH);
        //Calculate the distance (in cm) based on the speed of sound.
        //distance1 = duration1/58.2;
        */
        distance1 = random(0, 30);
        distance2 = random(0, 30);

        // Send the distance to the client, along with a break to separate our messages
        Serial.print(distance1);
        Serial.print(' ');
        Serial.print(distance2);
        Serial.println(' ');
        //client.print(distance2);
        // client.print(/r);

        // Delay before the next reading
        delay(10);
   
 } 
