/**
 * Kevin Gonzalez
 * ENGR 355 - Microprocessor Systems
 * 
 * This program combines knowledge of C and AAssembly code. The purpose of this code is
 * to read distance using an ultrasonic sensor and change the speed and direction of rotation
 * of a continuous rotation servo motor. The code that takes care of the servo motor si written in
 * Assembly, while the code used in the rest if the program is using C.
 */

int pos = 0;    // variable to store the servo position

// Setup pins for the ultrasonic sensor.
const int trigPin = 10;
const int echoPin = 11;

float duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

  // Start of assembly code.
  asm(
    //Set Bit in I/O Register as output.
    "sbi %0, %1 \n"
    : : "I" ( _SFR_IO_ADDR(DDRB)), "I" (DDB1)
  );
}

void loop() {
  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin, LOW);

  // Get pulse from ultrasonic sensor.
  duration = pulseIn(echoPin, HIGH);

  // Convert the duration of the pulse into cm. 
  distance = (duration / 2) / 29.1;

  // Display info.
  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.println(" cm");

  if (distance == 2) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1300);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 3) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1360);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 4) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1380);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 5) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1400);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 6) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1420);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 7) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1440);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 8) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1460);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 9) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1480);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  // At 10cm, the servo motor stays still.

  if (distance == 11) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1520);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 12) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1540);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 13) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1560);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 14) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1580);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 15) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1600);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 16) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1620);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 17) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1640);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 18) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1660);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 19) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1680);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance == 20) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1690);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);

  }

  if (distance > 20) {
    asm volatile(
      "sbi %0, %1 \n"     //Set Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delayMicroseconds(1700);

    asm volatile(
      "cbi %0, %1 \n"     //Clear Bit in I/O Register
      : : "I" ( _SFR_IO_ADDR(PORTB)), "I" (PORTB4)
    );

    delay(20);
  }
}
