
// Relay Control Outputs
const uint8_t RL1 = 2;
const uint8_t RL2 = 3;
const uint8_t RL3 = 4;
const uint8_t RL4 = 5;
const uint8_t NumberOfOutputs = 4;
uint8_t outputs[NumberOfOutputs] = {RL1, RL2, RL3, RL4};


// Digital Inputs
const uint8_t D9 = 9;
const uint8_t D8 = 8;
const uint8_t D7 = 7;
const uint8_t D6 = 6;
uint8_t inputs[NumberOfOutputs] = {D6, D7, D8, D9};


// Analog Inputs
const uint8_t AI1 = A6;
const uint8_t AI2 = A7;
const uint8_t LM35 = A3;

// Free Pins A0, A1, A2, D10, D11, D12, D13

void setup() {
  
  // Pins Configuration
  for (int i = 0; i < NumberOfOutputs; i++)
  {
    pinMode(inputs[i], INPUT);
    pinMode(outputs[i], OUTPUT);
  }

  // Fast Test
  TestOuputs();  
}


void loop() {
    for (int i = 0; i < NumberOfOutputs; i++)
      digitalWrite(outputs[i], digitalRead(inputs[i]));
}


void TestOuputs(){
    int wait = 750;
    for (int i = 0; i < NumberOfOutputs; i++)
    {
      digitalWrite(outputs[i], HIGH);
      delay(wait);
      digitalWrite(outputs[i], LOW);
      delay(wait);
    }
}