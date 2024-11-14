
// -- Variáveis Globais ---
int var1 = 0; // variável global para armazenar o valor ADC

// Função de configuração
void setup() 
{

  pinMode(A0, INPUT);  // configura entrada analógica 0
  pinMode(16, OUTPUT); // configura a saída digital para o LED
                        // pulse width modulation (modulação por largura de pulso)
                        // PWM nos permite o controle do brilho do LED
} // end setup


// -- Loop Infinito
void loop() 
{
  var1 = analogRead(A0); // 0 e 1023
  if(var1 > 512) digitalWrite(3, HIGH);
  else digitalWrite(3, LOW);
} // end loop
