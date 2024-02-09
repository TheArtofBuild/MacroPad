  #include<Keyboard.h>
  
//telling the code what pins each button is connected to.  Check your wiring diagram as yours may be different than mine. 

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 7;
const int buttonPin5 = 6;
const int buttonPin6 = 5;
const int buttonPin7 = A0;
const int buttonPin8 = 9;
const int buttonPin9 = 8;
const int buttonPin10 = 15;
const int buttonPin11 = 14;
const int buttonPin12 = 16;
const int buttonPin13 = 10;

//Creating states for each of the buttons.  These will be used to detect button presses in the VOID LOOP section

int buttonState1;
int buttonState2;
int buttonState3;
int buttonState4;
int buttonState5;
int buttonState6;
int buttonState7;
int buttonState8;
int buttonState9;
int buttonState10;
int buttonState11;
int buttonState12;
int buttonState13; 

int previousButtonState1 = HIGH;
int previousButtonState2 = HIGH;
int previousButtonState3 = HIGH;
int previousButtonState4 = HIGH;
int previousButtonState5 = HIGH;
int previousButtonState6 = HIGH;
int previousButtonState7 = HIGH;
int previousButtonState8 = HIGH;
int previousButtonState9 = HIGH;
int previousButtonState10 = HIGH;
int previousButtonState11 = HIGH;
int previousButtonState12 = HIGH;
int previousButtonState13 = HIGH;



void setup() {
  
  // Here I am declaring the PinMode of all of my inputs:
pinMode(buttonPin1, INPUT_PULLUP);
pinMode(buttonPin2, INPUT_PULLUP);
pinMode(buttonPin3, INPUT_PULLUP);
pinMode(buttonPin4, INPUT_PULLUP);
pinMode(buttonPin5, INPUT_PULLUP);
pinMode(buttonPin6, INPUT_PULLUP);
pinMode(buttonPin7, INPUT_PULLUP);
pinMode(buttonPin8, INPUT_PULLUP);
pinMode(buttonPin9, INPUT_PULLUP);
pinMode(buttonPin10, INPUT_PULLUP);
pinMode(buttonPin11, INPUT_PULLUP);
pinMode(buttonPin12, INPUT_PULLUP);
pinMode(buttonPin13, INPUT_PULLUP);

//This is required to turn on the funtionality of the keyboard library. 
Keyboard.begin();
}

void loop() {
  
  // Here i am reading the values of all of the buttons
 int buttonState1 = digitalRead(buttonPin1);
int buttonState2 = digitalRead(buttonPin2);
int buttonState3 = digitalRead(buttonPin3);
int buttonState4 = digitalRead(buttonPin4);
int buttonState5 = digitalRead(buttonPin5);
int buttonState6 = digitalRead(buttonPin6);
int buttonState7 = digitalRead(buttonPin7);
int buttonState8 = digitalRead(buttonPin8);
int buttonState9 = digitalRead(buttonPin9);
int buttonState10 = digitalRead(buttonPin10);
int buttonState11 = digitalRead(buttonPin11);
int buttonState12 = digitalRead(buttonPin12);
int buttonState13 = digitalRead(buttonPin13);


//Here is am stating if the button state is LOW (button is being pressed) and previosly it was HIGH (not being pressed)do the action I want for a keypress, in this case typing "1" 
if (buttonState1 == LOW && previousButtonState1 ==HIGH){
  Keyboard.press('1');
   delay(50);
}

// Here I am stating if the button press has been released release the "1" key.  This is important, without this check the macropad will keep typing "1" indefinatly. 

if (buttonState1== HIGH && previousButtonState1==LOW){
 Keyboard.release('1');

  delay(50);
}

// The below lines repeate above, with only the button and desired key press changing
if (buttonState2 == LOW && previousButtonState2 ==HIGH){
  Keyboard.press('2');
  delay(50);
}

if (buttonState2== HIGH && previousButtonState2==LOW){
Keyboard.release('2');
delay(50);
}


if (buttonState3 == LOW && previousButtonState3 ==HIGH){
  Keyboard.press('3');
  delay(50);
}
if (buttonState3== HIGH && previousButtonState3==LOW){
Keyboard.release('3');
delay(50);
}

if (buttonState4 == LOW && previousButtonState4 ==HIGH){
  Keyboard.press('4');
  delay(50);
}
if (buttonState4== HIGH && previousButtonState4==LOW){
Keyboard.release('4');
delay(50);
}

if (buttonState5 == LOW && previousButtonState5 ==HIGH){
  Keyboard.press('5');
  delay(50);
}
if (buttonState5== HIGH && previousButtonState5==LOW){
Keyboard.release('5');
delay(50);
}

if (buttonState6 == LOW && previousButtonState6 ==HIGH){
  Keyboard.press('6');
  delay(50);
}
if (buttonState6== HIGH && previousButtonState6==LOW){
Keyboard.release('6');
delay(50);
}

if (buttonState7 == LOW && previousButtonState7 ==HIGH){
  Keyboard.press('7');
  delay(50);
}
if (buttonState7== HIGH && previousButtonState7==LOW){
Keyboard.release('7');
delay(50);
}

if (buttonState8 == LOW && previousButtonState8 ==HIGH){
  Keyboard.press('8');
  delay(50);
}
if (buttonState8== HIGH && previousButtonState8==LOW){
Keyboard.release('8');
delay(50);
}

if (buttonState9 == LOW && previousButtonState9 ==HIGH){
  Keyboard.press('9');
  delay(50);
}
if (buttonState9== HIGH && previousButtonState9==LOW){
Keyboard.release('9');
delay(50);
}

if (buttonState10 == LOW && previousButtonState10 ==HIGH){
  Keyboard.press('a');
  delay(50);
  
}
if (buttonState10== HIGH && previousButtonState10==LOW){
Keyboard.release('a');
delay(50);

}

if (buttonState11 == LOW && previousButtonState11 ==HIGH){
  Keyboard.press('b');
  delay(50);
}
if (buttonState11== HIGH && previousButtonState11==LOW){
Keyboard.release('b');
delay(50);
}

if (buttonState12 == LOW && previousButtonState12 ==HIGH){
  Keyboard.press('c');
  delay(50);
}
if (buttonState12== HIGH && previousButtonState12==LOW){
Keyboard.release('c');
delay(50);
}

if (buttonState13 == LOW && previousButtonState13 ==HIGH){
  Keyboard.press('d');
  delay(50);
}
if (buttonState13== HIGH && previousButtonState13==LOW){
Keyboard.release('d');
delay(50);
}
// Here I am setting the previous read to equal the current read before the code repeats. 

previousButtonState1 = buttonState1;
previousButtonState2 = buttonState2;
previousButtonState3 = buttonState3;
previousButtonState4 = buttonState4;
previousButtonState5 = buttonState5;
previousButtonState6 = buttonState6;
previousButtonState7 = buttonState7;
previousButtonState8 = buttonState8;
previousButtonState9 = buttonState9;
previousButtonState10 = buttonState10;
previousButtonState11 = buttonState11;
previousButtonState12 = buttonState12;
previousButtonState13 = buttonState13;




}
