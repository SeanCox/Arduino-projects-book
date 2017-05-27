int switchState = 0;

// put your setup code here, to run once:
void setup() { 
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (2, INPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  switchState = digitalRead(2);
  
  //if button is not pressed
  if (switchState == LOW){
    digitalWrite (3, HIGH); //green led
    digitalWrite (4, LOW);  //red led
    digitalWrite (5, LOW); //red led
  }
  //button is pressed
  else {
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, HIGH);
  
    delay(250);
  
    digitalWrite (4, HIGH);
    digitalWrite (5, LOW);
  
    delay(250);
  }
}


