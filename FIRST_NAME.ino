/*
  NAME - AGAMJOT SINGH
   2110994833
   TASK 2.1P AND 2.2C
*/


void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (LOW is the voltage level)
  delay(500); 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                                       
}

void dash()
{
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (LOW is the voltage level)
  delay(1000);                    
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                    
}

void loop()
{
  // A

  dot();
  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // G

  dash();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // A

  dot();
  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // M 

  dash();
  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // J 

  dot();
  dash();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // O 

  dash();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec

  // T 

  dash();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);     // wait for a 2.5 sec
}
