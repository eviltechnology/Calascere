int row[3] = {2, 3, 4}; //digital
int column[3] = {0, 1, 2}; //analog


void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 3; i++)
  {
   pinMode(row[i], INPUT_PULLUP);
  }
 // for (int i = 0; i < 3; i++)
 // {
 //   pinMode(column[i], INPUT);
 // }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++) {
    int x = analogRead(column[i]);
    if (x > 20) {
      Serial.print("Column ");
      Serial.print(i+1);
      Serial.print(" Measured Value:");
      Serial.println(x);
    }
    for (int j = 0; j < 3; j++) {
      int y = digitalRead(row[j]);
      if (y == 0) {
        Serial.print("Row ");
        Serial.println(j+1);
 //       Serial.print(" Hi/Lo:");
 //       Serial.println(y);
      }
    }
  }
  delay(200);
}
