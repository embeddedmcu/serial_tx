int number = 0;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
  Serial.print("The number is ");
  Serial.println(number);    // print the number

  delay(500); // delay half second between numbers
  number++; // to the next number
}
