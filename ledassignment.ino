//set pin numbers
//const won't change
const int ledPin = 13;   //the number of the LED pin
const int btn = 7;   //Button pin
const int ldrPin = A0;  //the number of the LDR pin

int buttonState = 0;
int oldButtonState = LOW;
int ledState = LOW;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
  pinMode(btn, INPUT_PULLUP); // initialize button as input
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=500) {

    digitalWrite(ledPin, HIGH);               //turn LED on
    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(ledPin, LOW);          //turn LED off
    Serial.println("---------------");
  }

  int digitalVal = digitalRead(btn); // Take a reading

  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); //Turn the LED off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on

  }
  
  
}
