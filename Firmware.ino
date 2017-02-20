const int LED = 0;
const unsigned int TWENTY_SECONDS = 20000; // 20 seconds in milliseconds
const unsigned int REGULAR_WAIT = 90; // The amount of time between double buzzes (half an hour)
const unsigned int SLEEP_WAIT = 270; // The amount of time it should be off for before it starts so that people can get to sleep
bool firstLoop = true;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  if(firstLoop == true)
  {
    // Hacky way of sleeping for a long time. But I am tired and want to sleep for a long time instead, so this will do.
    for(int i = 0; i<SLEEP_WAIT; i++)
    {
      delay(TWENTY_SECONDS);
    }
    firstLoop = false;
  }else{
    // Hacky way of sleeping for a long time. But I am tired and want to sleep for a long time instead, so this will do.
    for(int i = 0; i<REGULAR_WAIT; i++)
    {
      delay(TWENTY_SECONDS);
    }
  }
}
