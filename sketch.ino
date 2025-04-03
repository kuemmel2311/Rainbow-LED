#define red 13
#define blue 8
#define green 12

void setup() {
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {

  int r,g,b;
  // red -> yellow (mehr green)
  for (g = 0; g <= 255; g++) {
  analogWrite(red, 255);
  analogWrite(green, g);
  analogWrite(blue, 0);
  delay(10);
  }
  //yellow -> green (weniger red)
  for (r = 255; r >= 0; r--){
  analogWrite(red, r);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(10);
  }
  //green -> cyan (mehr blue)
  for (b = 0; b <= 255; b++){
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, b);
  delay(10);
  }
  //cyan -> blue (weniger green)
  for (g = 255; g >= 0; g--){
  analogWrite(red, 0);
  analogWrite(green, g);
  analogWrite(blue, 255);
  delay(10);
  }
  //magenta -> red (weniger blue)
  for (b = 255; b >= 0; b--){
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, b);
  delay(10);
}
}