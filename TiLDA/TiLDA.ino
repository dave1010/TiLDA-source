void setup() {
  led_cycle(&lights, PIN_LED_LEFT, 250);
  led_cycle(&lights, PIN_LED_RIGHT, 250);
  pinMode(PIN_BUTTON, INPUT_PULLUP);
  attachInterrupt(INT_BUTTON, button_press, CHANGE);
}

void loop() {
  
}


